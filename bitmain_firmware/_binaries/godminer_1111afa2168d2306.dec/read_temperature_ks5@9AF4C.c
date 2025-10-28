int __fastcall read_temperature_ks5(int a1, int *a2)
{
  int v2; // r2
  _DWORD *v3; // r6
  int *i; // r8
  int v6; // r3
  int v7; // r0
  int v8; // r1
  int v9; // r2
  int v10; // r3
  void (__fastcall *v11)(int, int *, int *, _DWORD, int, int, int, int, _DWORD); // r9
  int v12; // r3
  int v13; // r2
  int v14; // r1
  int v15; // r2
  int v16; // r1
  int v17; // r9
  int v18; // r4
  int *v20; // [sp+38h] [bp-109Ch]
  int v21; // [sp+40h] [bp-1094h] BYREF
  int v22; // [sp+44h] [bp-1090h] BYREF
  int v23; // [sp+48h] [bp-108Ch] BYREF
  int v24; // [sp+4Ch] [bp-1088h] BYREF
  _DWORD v25[7]; // [sp+50h] [bp-1084h] BYREF
  int v26; // [sp+6Ch] [bp-1068h]
  _DWORD v27[7]; // [sp+70h] [bp-1064h] BYREF
  int v28; // [sp+8Ch] [bp-1048h]
  _DWORD v29[7]; // [sp+90h] [bp-1044h] BYREF
  int v30; // [sp+ACh] [bp-1028h]
  _DWORD v31[7]; // [sp+B0h] [bp-1024h] BYREF
  int v32; // [sp+CCh] [bp-1008h]
  char v33[4100]; // [sp+D0h] [bp-1004h] BYREF

  v2 = *(_DWORD *)(a1 + 412);
  v3 = *(_DWORD **)(a1 + 404);
  v21 = -64;
  v22 = -64;
  if ( v2 > 0 )
  {
    v20 = &a2[2 * v2];
    for ( i = a2; v20 != i; i += 2 )
    {
      v23 = 0;
      (*(void (__fastcall **)(int, int *, int *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(a1 + 156))(
        a1,
        &v21,
        &v23,
        *v3,
        v3[1],
        v3[2],
        v3[3],
        v3[4],
        v3[5]);
      if ( v23 )
      {
        v6 = v21;
        if ( v21 >= -63 )
          goto LABEL_4;
        LOWORD(v17) = -22864;
        v21 = -64;
        V_LOCK();
        V_INT((int)v25, "chain", *(int *)(a1 + 256));
        HIWORD(v17) = (unsigned int)"02x cnt %08x" >> 16;
        logfmt_raw(v33, 0x1000u, 0, v26, v25[0], v25[1], v25[2], v25[3], v25[4], v25[5], v25[6], v26, v17, *v3, v3[5]);
        V_UNLOCK();
        v13 = 859;
      }
      else
      {
        v21 = -64;
        V_LOCK();
        V_INT((int)v27, "chain", *(int *)(a1 + 256));
        logfmt_raw(
          v33,
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
          "read sensor failed, sensor[%d], addr:%02x",
          *v3,
          v3[5]);
        V_UNLOCK();
        v13 = 866;
      }
      LOWORD(v14) = 1808;
      HIWORD(v14) = (unsigned int)"Setting_freq_LTC_1489" >> 16;
      zlog(g_zc, v14, 171, "read_temperature_ks5", 20, v13, 100, v33);
      v6 = v21;
LABEL_4:
      *i = v6;
      v7 = v3[1];
      v8 = v3[2];
      v9 = v3[3];
      v10 = v3[4];
      v11 = *(void (__fastcall **)(int, int *, int *, _DWORD, int, int, int, int, _DWORD))(a1 + 160);
      v24 = 0;
      v11(a1, &v22, &v24, *v3, v7, v8, v9, v10, v3[5]);
      if ( !v24 )
      {
        v22 = -64;
        V_LOCK();
        V_INT((int)v31, "chain", *(int *)(a1 + 256));
        logfmt_raw(
          v33,
          0x1000u,
          0,
          v32,
          v31[0],
          v31[1],
          v31[2],
          v31[3],
          v31[4],
          v31[5],
          v31[6],
          v32,
          "read sensor failed, sensor[%d], addr:%02x",
          *v3,
          v3[5]);
        V_UNLOCK();
        v15 = 885;
LABEL_11:
        LOWORD(v16) = 1808;
        HIWORD(v16) = (unsigned int)"Setting_freq_LTC_1489" >> 16;
        zlog(g_zc, v16, 171, "read_temperature_ks5", 20, v15, 100, v33);
        v12 = v22;
        goto LABEL_6;
      }
      v12 = v22;
      if ( v22 < -63 )
      {
        LOWORD(v18) = -22864;
        v22 = -64;
        V_LOCK();
        V_INT((int)v29, "chain", *(int *)(a1 + 256));
        HIWORD(v18) = (unsigned int)"02x cnt %08x" >> 16;
        logfmt_raw(v33, 0x1000u, 0, v30, v29[0], v29[1], v29[2], v29[3], v29[4], v29[5], v29[6], v30, v18, *v3, v3[5]);
        V_UNLOCK();
        v15 = 878;
        goto LABEL_11;
      }
LABEL_6:
      i[1] = v12;
      v3 += 6;
    }
  }
  return 0;
}
