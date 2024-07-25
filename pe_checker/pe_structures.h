#ifndef PE_STRUCTURES_H
#define PE_STRUCTURES_H

#include <windows.h>

// Pour déréférencer un pointeur vers un membre de structure (et donc lire ou altérer ce qui se trouve à l'adresse pointée), on utilise :
// MY_IMAGE_DOS_HEADER->membre ou (*MY_IMAGE_DOS_HEADER).membre

// Tous les headers sont préfixé par MY afin de ne pas confondre avec les structures de la bibliothèque windows.h

// RAPPEL : Structures dans l'ordre =
// 1. DOS Header
// 2. NT Headers > Pointe vers > Optionnal Header 32 ou 64
// 3. File Header
// 4. Optional Header en mode 32 ou 64

typedef struct MY_IMAGE_DOS_HEADER
{
    WORD e_magic;    // Nombre magique
    WORD e_cblp;     // Octets sur la dernière page du fichier
    WORD e_cp;       // Pages dans le fichier
    WORD e_crlc;     // Réallocations
    WORD e_cparhdr;  // Taille de l'en-tête en paragraphes
    WORD e_minalloc; // Nombre minimum de paragraphes supplémentaires nécessaires
    WORD e_maxalloc; // Nombre maximum de paragraphes supplémentaires nécessaires
    WORD e_ss;       // Valeur initiale (relative) de SS
    WORD e_sp;       // Valeur initiale de SP
    WORD e_csum;     // Somme de contrôle
    WORD e_ip;       // Valeur initiale de IP
    WORD e_cs;       // Valeur initiale (relative) de CS
    WORD e_lfarlc;   // Adresse du fichier de la table de réallocation
    WORD e_ovno;     // Numéro de superposition
    WORD e_res[4];   // Mots réservés
    WORD e_oemid;    // Identifiant OEM (pour e_oeminfo)
    WORD e_oeminfo;  // Informations OEM ; spécifiques à e_oemid
    WORD e_res2[10]; // Mots réservés
    LONG e_lfanew;   // Début des en-têtes NT
} MY_IMAGE_DOS_HEADER, *PMY_IMAGE_DOS_HEADER;

typedef struct MY_IMAGE_FILE_HEADER
{
    WORD Machine;               // Type de machine cible (x86, x64, etc.)
    WORD NumberOfSections;      // Nombre de sections dans le fichier
    DWORD TimeDateStamp;        // Date et heure de compilation
    DWORD PointerToSymbolTable; // Adresse de la table des symboles
    DWORD NumberOfSymbols;      // Nombre de symboles dans la table
    WORD SizeOfOptionalHeader;  // Taille de l'en-tête optional
    WORD Characteristics;       // Caractéristiques du fichier (exécutable, DLL, etc.)
} MY_IMAGE_FILE_HEADER, *PMY_IMAGE_FILE_HEADER;

typedef struct MY_IMAGE_OPTIONAL_HEADER32 // INCOMPLET POUR L'INSTANT
{
    WORD Magic;              // Nombre magique (0x10B pour les exécutables 32 bits)
    WORD MajorLinkerVersion; // Version majeure du linker
    WORD MinorLinkerVersion; // Version mineure du linker
} MY_IMAGE_OPTIONAL_HEADER32, *PMY_IMAGE_OPTIONAL_HEADER32;

typedef struct MY_IMAGE_OPTIONAL_HEADER64 // INCOMPLET POUR L'INSTANT
{
    WORD Magic;              // Nombre magique (0x20B pour les exécutables 64 bits)
    WORD MajorLinkerVersion; // Version majeure du linker
    WORD MinorLinkerVersion; // Version mineure du linker
} MY_IMAGE_OPTIONAL_HEADER64, *PMY_IMAGE_OPTIONAL_HEADER64;

typedef struct MY_IMAGE_NT_HEADERS
{
    DWORD Signature;                           // Signature de l'en-tête NT
    MY_IMAGE_FILE_HEADER FileHeader;           // En-tête de fichier
    MY_IMAGE_OPTIONAL_HEADER32 OptionalHeader; // En-tête facultatif 32 bits

} MY_IMAGE_NT_HEADERS, *PMY_IMAGE_NT_HEADERS;

typedef struct MY_IMAGE_NT_HEADERS_64
{
    DWORD Signature;                           // Signature de l'en-tête NT
    MY_IMAGE_FILE_HEADER FileHeader;           // En-tête de fichier
    MY_IMAGE_OPTIONAL_HEADER64 OptionalHeader; // En-tête facultatif 64 bits
} MY_IMAGE_NT_HEADERS64, *PMY_IMAGE_NT_HEADERS64;

#endif