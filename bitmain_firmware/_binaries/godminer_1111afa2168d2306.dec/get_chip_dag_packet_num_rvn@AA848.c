int __fastcall get_chip_dag_packet_num_rvn(int a1)
{
  int v2; // r8
  int v3; // r3
  char *v4; // r2
  int v5; // r1
  int v6; // r0
  signed int v7; // r9
  unsigned __int64 v8; // kr00_8
  int v9; // lr
  int v10; // r6
  int v11; // r12
  int v12; // r1
  char *v14; // r1
  int v15; // r4
  int v16; // r1
  char *v17; // r1
  int v18; // r1
  char *v19; // [sp+40h] [bp-1084h]
  char *ptr; // [sp+44h] [bp-1080h]
  signed int v21; // [sp+48h] [bp-107Ch]
  int v22; // [sp+4Ch] [bp-1078h]
  int v23; // [sp+50h] [bp-1074h]
  int v24; // [sp+54h] [bp-1070h]
  char *s; // [sp+58h] [bp-106Ch]
  int v26; // [sp+5Ch] [bp-1068h]
  _DWORD v27[7]; // [sp+60h] [bp-1064h] BYREF
  int v28; // [sp+7Ch] [bp-1048h]
  _DWORD v29[7]; // [sp+80h] [bp-1044h] BYREF
  int v30; // [sp+9Ch] [bp-1028h]
  _DWORD v31[7]; // [sp+A0h] [bp-1024h] BYREF
  int v32; // [sp+BCh] [bp-1008h]
  char v33[4100]; // [sp+C0h] [bp-1004h] BYREF

  ptr = (char *)malloc(0x60u);
  v19 = (char *)malloc(0x60u);
  if ( sub_A4DA8(a1, 115, ptr) == 8 )
  {
    v26 = 0;
  }
  else
  {
    V_LOCK();
    LOWORD(v14) = 27796;
    HIWORD(v14) = (unsigned int)"%1.f" >> 16;
    V_INT((int)v27, v14, *(int *)(a1 + 256));
    LOWORD(v15) = 10172;
    HIWORD(v15) = (unsigned int)"ork_mode[%d], chip-%d..." >> 16;
    v26 = 12;
    logfmt_raw(v33, 0x1000u, 0, v28, v27[0], v27[1], v27[2], v27[3], v27[4], v27[5], v27[6], v28, v15);
    V_UNLOCK();
    LOWORD(v16) = 9580;
    HIWORD(v16) = (unsigned int)"get membist lost cnt failed!" >> 16;
    zlog(g_zc, v16, 171, "get_chip_dag_packet_num_rvn", 27, 2091, 100, v33);
  }
  v21 = sub_A4DA8(a1, 116, v19);
  if ( v21 == 8 )
    goto LABEL_4;
  V_LOCK();
  LOWORD(v17) = 27796;
  HIWORD(v17) = (unsigned int)"%1.f" >> 16;
  V_INT((int)v29, v17, *(int *)(a1 + 256));
  logfmt_raw(
    v33,
    0x1000u,
    0,
    v30,
    v29[0],
    v29[1],
    v29[2],
    v29[3],
    v29[4],
    v29[5],
    v29[6],
    v30,
    "get chip dag crc status failed");
  V_UNLOCK();
  LOWORD(v18) = 9580;
  HIWORD(v18) = (unsigned int)"get membist lost cnt failed!" >> 16;
  zlog(g_zc, v18, 171, "get_chip_dag_packet_num_rvn", 27, 2098, 100, v33);
  v26 = 12;
  if ( v21 > 0 )
  {
LABEL_4:
    v2 = 0;
    LOWORD(v3) = 10236;
    LOWORD(v4) = 27796;
    LOWORD(v5) = -21852;
    LOWORD(v6) = -31336;
    v7 = 0;
    HIWORD(v3) = (unsigned int)"ate %08x" >> 16;
    HIWORD(v4) = (unsigned int)"%1.f" >> 16;
    HIWORD(v5) = (unsigned int)"Failed to convert cb1 to cb1_bin in parse_notify" >> 16;
    HIWORD(v6) = (unsigned int)"come" >> 16;
    v22 = v3;
    s = v4;
    v23 = v5;
    v24 = v6;
    do
    {
      ++v7;
      v8 = (unsigned __int64)(bswap32(*(_DWORD *)&ptr[v2]) & 0x7FFFFFFF) << 6;
      V_LOCK();
      V_INT((int)v31, s, *(int *)(a1 + 256));
      v9 = (unsigned __int8)ptr[v2 + 4];
      v10 = v23;
      v11 = *(_DWORD *)&v19[v2];
      v2 += 12;
      if ( !v11 )
        v10 = v24;
      logfmt_raw(v33, 0x1000u, 0, v32, v31[0], v31[1], v31[2], v31[3], v31[4], v31[5], v31[6], v32, v22, v9, v8, v10);
      V_UNLOCK();
      LOWORD(v12) = 9580;
      HIWORD(v12) = (unsigned int)"get membist lost cnt failed!" >> 16;
      zlog(g_zc, v12, 171, "get_chip_dag_packet_num_rvn", 27, 2107, 60, v33);
    }
    while ( v21 > v7 );
  }
  free(ptr);
  free(v19);
  return v26;
}
