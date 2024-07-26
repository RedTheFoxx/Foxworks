#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void CallFoxBanner()
{
    printf("    ______                               __       \n");
    printf("   / ____/___  _  ___      ______  _____/ /_______\n");
    printf("  / /_  / __ \\| |/_/ | /| / / __ \\/ ___/ //_/ ___/\n");
    printf(" / __/ / /_/ />  < | |/ |/ / /_/ / /  / ,< (__  ) \n");
    printf("/_/    \\____/_/|_| |__/|__/\\____/_/  /_/|_/____/  \n");
    printf("\n");
}

void CallProgramBanner()
{
    printf("╔═══════════════════════════════════════╗\n");
    printf("║               PE_CHECKER              ║\n");
    printf("╚═══════════════════════════════════════╝\n");
    printf("-------------------------------------------\n");
}

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Utilisation : %s <chemin_vers_exe>\n", argv[0]);
        return 1;
    }

    // Bannières d'intro
    CallFoxBanner();
    CallProgramBanner();

    // TODO : Core

    printf("Appuyez sur une touche pour fermer le programme ...");
    getchar();
    return 0;
}