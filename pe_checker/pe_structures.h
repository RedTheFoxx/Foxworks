#ifndef PE_STRUCTURES_H
#define PE_STRUCTURES_H

#include <windows.h>

// [?] On rappellera que ...
// Pour déréférencer un pointeur vers un membre de structure (et donc lire ou altérer ce qui se trouve à l'adresse pointée), on utilise :
// MY_IMAGE_DOS_HEADER->membre ou (*MY_IMAGE_DOS_HEADER).membre

typedef struct MY_IMAGE_DOS_HEADER
{
    WORD e_magic;    // Magic number
    WORD e_cblp;     // Bytes on last page of file
    WORD e_cp;       // Pages in file
    WORD e_crlc;     // Relocations
    WORD e_cparhdr;  // Size of header in paragraphs
    WORD e_minalloc; // Minimum extra paragraphs needed
    WORD e_maxalloc; // Maximum extra paragraphs needed
    WORD e_ss;       // Initial (relative) SS value
    WORD e_sp;       // Initial SP value
    WORD e_csum;     // Checksum
    WORD e_ip;       // Initial IP value
    WORD e_cs;       // Initial (relative) CS value
    WORD e_lfarlc;   // File address of relocation table
    WORD e_ovno;     // Overlay number
    WORD e_res[4];   // Reserved words
    WORD e_oemid;    // OEM identifier (for e_oeminfo)
    WORD e_oeminfo;  // OEM information; e_oemid specific
    WORD e_res2[10]; // Reserved words
    LONG e_lfanew;   // Start of the NT headers
} MY_IMAGE_DOS_HEADER, *PMY_IMAGE_DOS_HEADER;

#endif
