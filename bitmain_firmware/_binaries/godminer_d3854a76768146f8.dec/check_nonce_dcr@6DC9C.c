int __fastcall check_nonce_dcr(int a1, int a2)
{
  int v2; // r5
  int v4; // r4
  unsigned int v5; // r3
  int v6; // r0
  _DWORD *v7; // r12
  int v8; // r1
  int v9; // r2
  int v10; // r1
  int v11; // r2
  int v12; // r3
  int v13; // r1
  unsigned int v14; // r0
  unsigned int v15; // r5
  unsigned int v16; // r3
  int *v17; // r9
  int v18; // r11
  int v19; // r10
  _BYTE *v20; // r5
  unsigned __int8 *v21; // r4
  int v22; // r12
  int v23; // t1
  int v24; // t1
  unsigned int v25; // r2
  unsigned int v26; // r3
  int v28; // r3
  int v29; // r1
  int v30; // r3
  int v31; // r1
  int v32; // r3
  int v33; // r1
  unsigned int v34; // [sp+14h] [bp-10E0h]
  _BYTE v35[32]; // [sp+1Ch] [bp-10D8h] BYREF
  _DWORD s[45]; // [sp+3Ch] [bp-10B8h] BYREF
  char v37[4100]; // [sp+F0h] [bp-1004h] BYREF

  v2 = *(unsigned __int8 *)(a2 + 65);
  v4 = *(_DWORD *)(a1 + 800);
  v5 = *(_DWORD *)(v4 + 4 * (v2 + 7040));
  v2 *= 180;
  v34 = v5;
  memset(s, 0, sizeof(s));
  memcpy(s, (const void *)(v4 + v2 + 5120), 0x8Cu);
  v6 = *(_DWORD *)(a2 + 52);
  v7 = (_DWORD *)(v4 + v2 + 5271);
  v8 = *(_DWORD *)(a2 + 56);
  v9 = *(_DWORD *)(a2 + 60);
  s[35] = *(_DWORD *)(a2 + 48);
  s[36] = v6;
  s[37] = v8;
  s[38] = v9;
  v10 = v7[1];
  v11 = v7[2];
  v12 = v7[3];
  s[39] = *v7;
  s[40] = v10;
  s[41] = v11;
  s[42] = v12;
  v13 = v7[5];
  s[43] = v7[4];
  s[44] = v13;
  decred_hash((int)v35, (char *)s);
  v14 = target_to_diff_dcr((int)v35);
  v15 = v14;
  if ( v14 <= 0x26 )
  {
    V_LOCK();
    LOWORD(v32) = -15556;
    HIWORD(v32) = (unsigned int)"k_sel_r, tx_recal_force_en_r, tx_recal_skip_en_r" >> 16;
    logfmt_raw(v37, 0x1000u, 0, v32, v15, *(unsigned __int8 *)(a2 + 64), 39);
    V_UNLOCK();
    LOWORD(v33) = -15728;
    HIWORD(v33) = (unsigned int)"oarse_adpt_force_en, rx_coarse_adpt_skip_en" >> 16;
    zlog(g_zc, v33, 171, "check_nonce_dcr", 15, 580, 20, v37);
    return 2;
  }
  v16 = *(unsigned __int8 *)(a2 + 64);
  if ( v16 == v14 )
  {
    if ( v34 > v16 )
    {
      v17 = &g_zc;
LABEL_12:
      V_LOCK();
      LOWORD(v28) = -19704;
      HIWORD(v28) = (unsigned int)"set_work_mode" >> 16;
      logfmt_raw(v37, 0x1000u, 0, v28, *(unsigned __int8 *)(a2 + 64), v34);
      V_UNLOCK();
      LOWORD(v29) = -15728;
      HIWORD(v29) = (unsigned int)"oarse_adpt_force_en, rx_coarse_adpt_skip_en" >> 16;
      zlog(*v17, v29, 171, "check_nonce_dcr", 15, 598, 20, v37);
      return 1;
    }
  }
  else if ( v34 > v14 )
  {
    V_LOCK();
    LOWORD(v30) = -19748;
    HIWORD(v30) = (unsigned int)"s" >> 16;
    logfmt_raw(v37, 0x1000u, 0, v30, v15, *(unsigned __int8 *)(a2 + 64), v34);
    V_UNLOCK();
    LOWORD(v31) = -15728;
    HIWORD(v31) = (unsigned int)"oarse_adpt_force_en, rx_coarse_adpt_skip_en" >> 16;
    zlog(g_zc, v31, 171, "check_nonce_dcr", 15, 585, 40, v37);
    return 3;
  }
  v17 = &g_zc;
  LOWORD(v18) = -15492;
  LOWORD(v19) = -15728;
  v20 = s;
  v21 = (unsigned __int8 *)(v4 + 32 * *(unsigned __int8 *)(a2 + 65) + 28704);
  do
  {
    V_LOCK();
    v23 = (unsigned __int8)*--v20;
    v22 = v23;
    HIWORD(v18) = (unsigned int)"g tx_invert_r, tx_clk_rdy_r" >> 16;
    v24 = *--v21;
    logfmt_raw(v37, 0x1000u, 0, v18, v22, v24);
    V_UNLOCK();
    HIWORD(v19) = (unsigned int)"oarse_adpt_force_en, rx_coarse_adpt_skip_en" >> 16;
    zlog(g_zc, v19, 171, "fulltest_dcr", 12, 495, 20, v37);
    v25 = (unsigned __int8)*v20;
    v26 = *v21;
    if ( v25 < v26 )
      break;
    if ( v25 > v26 )
      goto LABEL_12;
  }
  while ( v35 != v20 );
  return 0;
}
