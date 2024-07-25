#include <stdio.h>
#include "pe_structures.h"

void print_dos_header(MY_IMAGE_DOS_HEADER dos_header) {
    printf("e_magic : 0x%X\n", dos_header.e_magic);
    printf("e_cblp : 0x%X\n", dos_header.e_cblp);
    printf("e_cp : 0x%X\n", dos_header.e_cp);
    printf("e_crlc : 0x%X\n", dos_header.e_crlc);
    printf("e_cparhdr : 0x%X\n", dos_header.e_cparhdr);
    printf("e_minalloc : 0x%X\n", dos_header.e_minalloc);
    printf("e_maxalloc : 0x%X\n", dos_header.e_maxalloc);
    printf("e_ss : 0x%X\n", dos_header.e_ss);
    printf("e_sp : 0x%X\n", dos_header.e_sp);
    printf("e_csum : 0x%X\n", dos_header.e_csum);
    printf("e_ip : 0x%X\n", dos_header.e_ip);
    printf("e_cs : 0x%X\n", dos_header.e_cs);
    printf("e_lfarlc : 0x%X\n", dos_header.e_lfarlc);
    printf("e_ovno : 0x%X\n", dos_header.e_ovno);
    printf("e_oemid : 0x%X\n", dos_header.e_oemid);
    printf("e_oeminfo : 0x%X\n", dos_header.e_oeminfo);
    printf("e_lfanew : 0x%lX\n", dos_header.e_lfanew);
}