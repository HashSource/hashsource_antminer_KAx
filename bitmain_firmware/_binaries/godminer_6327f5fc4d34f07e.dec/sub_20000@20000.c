// positive sp value has been detected, the output may be wrong!
void __fastcall sub_20000(
        const char *a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13)
{
  int v13; // r4
  char **v14; // r6
  int v15; // r8
  int v16; // r5
  unsigned __int8 v17; // r7
  unsigned __int16 v18; // r9
  int v19; // r11
  int v20; // r6
  int v21; // r6
  int v22; // r0
  int v23; // [sp-100Ch] [bp-100Ch]
  const char *v24; // [sp-100Ch] [bp-100Ch]
  int v25; // [sp-1004h] [bp-1004h] BYREF
  int v26; // [sp-1000h] [bp-1000h]
  int v27; // [sp-FFCh] [bp-FFCh]
  int v28; // [sp-FF8h] [bp-FF8h]

  v16 = (unsigned __int8)strtol(a1, v14, 10);
  v24 = (const char *)(v23 + 1);
  v17 = strtol(v24++, v14, 10);
  v18 = strtol(v24, v14, 16);
  v19 = strtol(v24 + 1, v14, 16);
  v20 = *(_DWORD *)(*(_DWORD *)(v15 + 4 * v16) + 300);
  V_LOCK();
  v21 = (unsigned __int8)(v20 * v17);
  logfmt_raw(
    (char *)&v25,
    0x1000u,
    v13,
    "%s: set chain_offset %d chain %d chip %d chipaddr %x reg %x to %08x",
    "set_chipreg_old",
    v16,
    *(_DWORD *)(*(_DWORD *)(v15 + 4 * v16) + 200),
    v17,
    v21,
    v18,
    v19);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/api_new.c",
    137,
    "set_chipreg_old",
    15,
    1556,
    40,
    &v25);
  v27 = v13;
  v26 = v13;
  BYTE1(v27) = v21;
  v28 = v13;
  v22 = *(_DWORD *)(v15 + 4 * v16);
  v25 = v19;
  HIWORD(v27) = v18;
  (*(void (**)(void))(v22 + 216))();
  __asm { POP             {R4-R11,PC} }
}
