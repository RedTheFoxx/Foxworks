#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "pe_structures.h"

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Usage: %s <chemin_du_fichier>\n", argv[0]);
        return 1;
    }

#pragma region "MZ magic number check"

    FILE *fichier = fopen(argv[1], "rb");
    if (fichier == NULL)
    {
        printf("Erreur d'ouverture du fichier\n");
        return 1;
    }

    unsigned short magic_number;
    fread(&magic_number, sizeof(unsigned short), 1, fichier); // buffer de destination, taille du buffer, nombre d'éléments à lire (1 unsigned short), fichier source

    if (magic_number != 0x5A4D)
    {
        printf("Erreur : le fichier n'est pas un fichier PE valide\n");
        fclose(fichier);
        return 1;
    }

    printf("PE valide : 0x%X\n", magic_number);

    fclose(fichier);

#pragma endregion

    printf("Appuyez sur une touche pour continuer...");
    getchar();
    return 0;
}