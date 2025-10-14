// Decompiled: cgminer-api_738a9a01b276907a

int _init(EVP_PKEY_CTX *ctx)

{
    int iVar1;

    iVar1 = FUN_00010b7c();
    return iVar1;
}

undefined4 main(int param_1, undefined4 *param_2)

{
    char cVar1;
    int iVar2;
    char *pcVar3;
    undefined4 uVar4;
    long lVar5;
    char *pcVar6;
    char *pcVar7;

    if (param_1 < 2) {
    LAB_00010acc:
        pcVar6 = "127.0.0.1";
        pcVar7 = "summary";
        iVar2 = 0xfbc;
        goto LAB_00010ae0;
    }
    pcVar6 = (char *)param_2[1];
    if (*pcVar6 == '-') {
        cVar1 = pcVar6[1];
        if (cVar1 == '?') {
            if (pcVar6[2] == '\0')
                goto LAB_00010b04;
        } else if (cVar1 == 'h') {
            if (pcVar6[2] == '\0')
                goto LAB_00010b04;
            goto LAB_000109dc;
        }
        iVar2 = strcmp(pcVar6, "--help");
        if (iVar2 == 0)
            goto LAB_00010b04;
        if ((cVar1 != 'o') || (pcVar6[2] != '\0'))
            goto LAB_000109f4;
        DAT_00022078 = 1;
        if (param_1 == 2)
            goto LAB_00010acc;
        iVar2 = 2;
    } else {
    LAB_000109dc:
        iVar2 = strcmp(pcVar6, "--help");
        if (iVar2 == 0) {
        LAB_00010b04:
            fprintf(stderr, "usAge: %s [command [ip/host [port]]]\n", *param_2);
            return 1;
        }
    LAB_000109f4:
        iVar2 = 1;
    }
    pcVar6 = (char *)FUN_00010c0c(param_2[iVar2]);
    pcVar7 = "summary";
    if (*pcVar6 != '\0') {
        pcVar7 = pcVar6;
    }
    if (iVar2 + 1 < param_1) {
        pcVar3 = (char *)FUN_00010c0c(param_2[iVar2 + 1]);
        pcVar6 = "127.0.0.1";
        if (*pcVar3 != '\0') {
            pcVar6 = pcVar3;
        }
        if ((iVar2 + 2 < param_1) &&
            (pcVar3 = (char *)FUN_00010c0c(param_2[iVar2 + 2]),
             *pcVar3 != '\0')) {
            lVar5 = strtol(pcVar3, (char **)0x0, 10);
            iVar2 = (int)(short)lVar5;
        } else {
            iVar2 = 0xfbc;
        }
    } else {
        iVar2 = 0xfbc;
        pcVar6 = "127.0.0.1";
    }
LAB_00010ae0:
    uVar4 = callapi(pcVar7, pcVar6, iVar2);
    return uVar4;
}

void _start(undefined4 param_1)

{
    undefined4 in_stack_00000000;

    __libc_start_main(main, in_stack_00000000, &stack0x00000004, 0x11061,
                      0x1109d, param_1);
    /* WARNING: Subroutine does not return */
    abort();
}

/* WARNING: Removing unreachable block (ram,0x00010b90) */

void FUN_00010b7c(void)

{
    __gmon_start__();
    return;
}

/* WARNING: Removing unreachable block (ram,0x00010bb4) */
/* WARNING: Removing unreachable block (ram,0x00010bbe) */

void FUN_00010ba0(void)

{
    return;
}

/* WARNING: Removing unreachable block (ram,0x00010be0) */
/* WARNING: Removing unreachable block (ram,0x00010bea) */

void FUN_00010bc4(void)

{
    return;
}

void _FINI_0(void)

{
    if (DAT_00022074 == '\0') {
        FUN_00010ba0();
        DAT_00022074 = '\x01';
    }
    return;
}

byte *FUN_00010c0c(byte *param_1)

{
    ushort **ppuVar1;
    byte *pbVar2;
    byte *pbVar3;

    ppuVar1 = __ctype_b_loc();
    do {
        pbVar2 = param_1;
        param_1 = pbVar2 + 1;
    } while (((*ppuVar1)[*pbVar2] & 0x2000) != 0);
    pbVar3 = (byte *)__rawmemchr(pbVar2, (*ppuVar1)[*pbVar2] & 0x2000);
    while (pbVar2 < pbVar3) {
        pbVar3 = pbVar3 + -1;
        if (((*ppuVar1)[*pbVar3] & 0x2000) != 0) {
            *pbVar3 = 0;
        }
    }
    return pbVar2;
}

void display(char *param_1)

{
    char *pcVar1;
    ushort **ppuVar2;
    char *pcVar3;
    char *pcVar4;
    int iVar5;
    char *pcVar6;
    char *pcVar7;

    if (param_1 != (char *)0x0) {
        do {
            pcVar1 = strchr(param_1, 0x7c);
            if (pcVar1 == (char *)0x0) {
                if (*param_1 == '\0') {
                    return;
                }
                pcVar6 = (char *)0x0;
            LAB_00010cf8:
                iVar5 = 0;
                do {
                    pcVar1 = strchr(param_1, 0x2c);
                    if (pcVar1 == (char *)0x0) {
                        if (*param_1 == '\0')
                            break;
                        pcVar4 = (char *)0x0;
                    LAB_00010d1c:
                        pcVar1 = strchr(param_1, 0x3d);
                        if (pcVar1 == (char *)0x0) {
                            if (iVar5 == 0) {
                            LAB_00010dfc:
                                printf("[%s%s] =>\n(\n", param_1, "");
                            }
                        LAB_00010ddc:
                            printf("   [%d] => %s\n", iVar5, param_1);
                        } else {
                            *pcVar1 = '\0';
                            pcVar7 = pcVar1 + 1;
                            if (iVar5 == 0) {
                                if (pcVar7 == (char *)0x0)
                                    goto LAB_00010dfc;
                                ppuVar2 = __ctype_b_loc();
                                pcVar3 = pcVar7;
                                if (((*ppuVar2)[(byte)pcVar1[1]] & 0x800) ==
                                    0) {
                                    pcVar3 = "";
                                }
                                printf("[%s%s] =>\n(\n", param_1, pcVar3);
                            } else if (pcVar7 == (char *)0x0)
                                goto LAB_00010ddc;
                            printf("   [%s] => %s\n", param_1, pcVar7);
                        }
                    } else {
                        pcVar4 = pcVar1 + 1;
                        *pcVar1 = '\0';
                        if (*param_1 != '\0')
                            goto LAB_00010d1c;
                    }
                    param_1 = pcVar4;
                    iVar5 = iVar5 + 1;
                } while (param_1 != (char *)0x0);
                puts(")");
            } else {
                pcVar6 = pcVar1 + 1;
                *pcVar1 = '\0';
                if (*param_1 != '\0')
                    goto LAB_00010cf8;
            }
            param_1 = pcVar6;
        } while (param_1 != (char *)0x0);
    }
    return;
}

ssize_t callapi(char *param_1, char *param_2, uint param_3)

{
    hostent *phVar1;
    int __fd;
    int iVar2;
    size_t sVar3;
    ssize_t sVar4;
    char *pcVar5;
    int *piVar6;
    char *pcVar7;
    int iVar8;
    char *__buf;
    sockaddr local_30;

    phVar1 = gethostbyname(param_2);
    if (phVar1 == (hostent *)0x0) {
        printf("Couldn\'t get hostname: \'%s\'\n", param_2);
    } else {
        __fd = socket(2, 1, 0);
        if (__fd == -1) {
            piVar6 = __errno_location();
            pcVar5 = strerror(*piVar6);
            printf("Socket initialisation failed: %s\n", pcVar5);
            return 1;
        }
        iVar8 = 0;
        local_30.sa_data[6] = '\0';
        local_30.sa_data[7] = '\0';
        local_30.sa_data._0_2_ =
            (ushort)((param_3 & 0xff) << 8) | (ushort)(param_3 >> 8) & 0xff;
        local_30.sa_data[8] = '\0';
        local_30.sa_data[9] = '\0';
        local_30.sa_data[10] = '\0';
        local_30.sa_data[0xb] = '\0';
        local_30.sa_data[0xc] = '\0';
        local_30.sa_data[0xd] = '\0';
        local_30.sa_family = 2;
        local_30.sa_data._2_2_ = SUB42(*(undefined4 *)*phVar1->h_addr_list, 0);
        local_30.sa_data._4_2_ =
            SUB42((uint) * (undefined4 *)*phVar1->h_addr_list >> 0x10, 0);
        iVar2 = connect(__fd, &local_30, 0x10);
        if (iVar2 < 0) {
            piVar6 = __errno_location();
            pcVar5 = strerror(*piVar6);
            printf("Socket connect failed: %s\n", pcVar5);
            return 1;
        }
        sVar3 = strlen(param_1);
        sVar4 = send(__fd, param_1, sVar3, 0);
        if (sVar4 < 0) {
            piVar6 = __errno_location();
            sVar4 = 1;
            pcVar5 = strerror(*piVar6);
            printf("Send failed: %s\n", pcVar5);
        LAB_00010ff4:
            close(__fd);
            return sVar4;
        }
        pcVar5 = (char *)malloc(0x10000);
        if (pcVar5 == (char *)0x0) {
            printf("Err: OOM (%d)\n", 0x10000);
        } else {
            iVar2 = 0xffff;
            do {
                do {
                    __buf = pcVar5 + iVar8;
                    sVar4 = recv(__fd, __buf, iVar2 - iVar8, 0);
                    iVar8 = iVar8 + sVar4;
                    if (sVar4 < 0) {
                        piVar6 = __errno_location();
                        sVar4 = 1;
                        pcVar7 = strerror(*piVar6);
                        printf("Recv failed: %s\n", pcVar7);
                    LAB_00010fd0:
                        *__buf = '\0';
                        if (DAT_00022078 == 0) {
                            printf("Reply was \'%s\'\n", pcVar5);
                            display(pcVar5);
                        } else {
                            puts(pcVar5);
                        }
                        goto LAB_00010ff4;
                    }
                    if (sVar4 == 0)
                        goto LAB_00010fd0;
                } while (iVar2 != iVar8);
                sVar3 = iVar2 + 0x10000;
                iVar2 = iVar2 + 0xffff;
                pcVar5 = (char *)realloc(pcVar5, sVar3);
            } while (pcVar5 != (char *)0x0);
            printf("Err: OOM (%d)\n", sVar3);
        }
    }
    return 1;
}

void __libc_csu_init(EVP_PKEY_CTX *param_1, undefined4 param_2,
                     undefined4 param_3, undefined4 param_4)

{
    int iVar1;
    undefined **ppuVar2;

    _init(param_1);
    iVar1 = 0;
    ppuVar2 = &__DT_INIT_ARRAY;
    do {
        iVar1 = iVar1 + 1;
        (*(code *)*ppuVar2)(param_1, param_2, param_3, *ppuVar2, param_4);
        ppuVar2 = ppuVar2 + 1;
    } while (iVar1 != 1);
    return;
}

void __libc_csu_fini(void)

{
    return;
}

void _fini(void)

{
    return;
}
