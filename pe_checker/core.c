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

    return 0;
}