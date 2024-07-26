#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: %s <path_to_exe>\n", argv[0]);
        return 1;
    }
}