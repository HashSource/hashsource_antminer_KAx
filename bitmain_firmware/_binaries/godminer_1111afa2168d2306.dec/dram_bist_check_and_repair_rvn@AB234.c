void __fastcall __noreturn dram_bist_check_and_repair_rvn(int a1, int a2, char *a3)
{
  char *v3; // r4
  int v4; // r5
  int v6; // r3
  int v7; // r1
  int v8; // r7
  int v9; // r4
  _WORD *v10; // r7
  int v11; // r10
  _WORD *v12; // r5
  int v13; // r2
  int v14; // r3
  int v15; // r1
  int v16; // [sp+4h] [bp-1088h]
  int v18; // [sp+3Ch] [bp-1050h]
  char *s; // [sp+40h] [bp-104Ch]
  int v20; // [sp+44h] [bp-1048h]
  void *dest; // [sp+48h] [bp-1044h]
  int v23; // [sp+54h] [bp-1038h] BYREF
  _DWORD v24[2]; // [sp+58h] [bp-1034h] BYREF
  int v25; // [sp+60h] [bp-102Ch]
  int v26; // [sp+64h] [bp-1028h]
  _DWORD v27[7]; // [sp+68h] [bp-1024h] BYREF
  int v28; // [sp+84h] [bp-1008h]
  char v29[4100]; // [sp+88h] [bp-1004h] BYREF

  v3 = a3;
  v4 = a2;
  V_LOCK();
  LOWORD(v6) = 10624;
  HIWORD(v6) = (unsigned int)"ld %08x" >> 16;
  logfmt_raw(v29, 0x1000u, 0, v6, "dram_bist_check_and_repair_rvn", v4, v3);
  V_UNLOCK();
  LOWORD(v7) = 9580;
  HIWORD(v7) = (unsigned int)"get membist lost cnt failed!" >> 16;
  LOWORD(v4) = 10656;
  LOWORD(v3) = 27796;
  LOWORD(v8) = -23376;
  zlog(g_zc, v7, 171, "dram_bist_check_and_repair_rvn", 30, 2590, 40, v29);
  HIWORD(v4) = (unsigned int)"Setting_get_core_status_RVN" >> 16;
  v18 = v4;
  dest = malloc(0xCu);
  HIWORD(v3) = (unsigned int)"%1.f" >> 16;
  s = v3;
  HIWORD(v8) = (unsigned int)"k: %s" >> 16;
  v20 = v8;
  while ( 1 )
  {
    v9 = 0;
    sleep(0xAu);
    v25 = 6356992;
    v24[0] = 0;
    v24[1] = 0;
    v23 = 0;
    BYTE1(v25) = (_BYTE)a3;
    v26 = 0;
    v10 = calloc(0x60u, 1u);
    (*(void (__fastcall **)(int, _DWORD *, int, _WORD *, int *, int, int, _DWORD))(a1 + 296))(
      a1,
      v24,
      8,
      v10,
      &v23,
      v16,
      2000,
      0);
    v11 = v23;
    if ( v23 > 0 )
    {
      v12 = v10;
      do
      {
        while ( 1 )
        {
          ++v9;
          if ( v12[3] == 97 )
            break;
          v11 = v23;
          v12 += 6;
          if ( v9 >= v23 )
            goto LABEL_7;
        }
        V_LOCK();
        v12 += 6;
        V_INT((int)v27, s, *(int *)(a1 + 256));
        logfmt_raw(
          v29,
          0x1000u,
          0,
          v28,
          v27[0],
          v27[1],
          v27[2],
          v27[3],
          v27[4],
          v27[5],
          v27[6],
          v28,
          v18,
          *((unsigned __int8 *)v12 - 8),
          (unsigned __int16)*(v12 - 3),
          *((_DWORD *)v12 - 3));
        V_UNLOCK();
        zlog(g_zc, v20, 150, "ChipSetting_get_chip_status_rvn_RVN", 35, 1671, 40, v29);
        v11 = v23;
      }
      while ( v9 < v23 );
    }
LABEL_7:
    if ( dest )
    {
      if ( v11 >= 8 )
        v13 = 8;
      else
        v13 = v11;
      memcpy(dest, v10, 12 * v13);
    }
    free(v10);
    if ( !v11 )
    {
      V_LOCK();
      LOWORD(v14) = 10704;
      HIWORD(v14) = (unsigned int)"_status_RVN" >> 16;
      logfmt_raw(v29, 0x1000u, 0, v14, "dram_bist_check_and_repair_rvn", a2, a3);
      V_UNLOCK();
      LOWORD(v15) = 9580;
      HIWORD(v15) = (unsigned int)"get membist lost cnt failed!" >> 16;
      zlog(g_zc, v15, 171, "dram_bist_check_and_repair_rvn", 30, 2646, 40, v29);
    }
  }
}
