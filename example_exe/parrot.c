#include <stdio.h>
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
    printf("║             PARROT_TESTER             ║\n");
    printf("╚═══════════════════════════════════════╝\n");
    printf("-------------------------------------------\n");
}

int main()
{
    // Console en mode UTF-8
    SetConsoleOutputCP(CP_UTF8);

    // En-têtes ASCII
    CallFoxBanner();
    CallProgramBanner();

    char path[128];
    printf("Entrez une phrase (pas de caractères spéciaux) : ");
    fgets(path, sizeof(path), stdin);
    printf("Vous avez entré : %s", path);

    printf("Appuyez sur une touche pour fermer le programme ...");
    getchar();
    return 0;
}