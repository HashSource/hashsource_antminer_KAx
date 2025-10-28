int __fastcall check_nonce_zec_1746(int a1, int a2)
{
  int v2; // r7
  int v4; // r4
  unsigned int v6; // r8
  int v7; // r2
  int v8; // r0
  unsigned int v9; // r9
  unsigned int v10; // r7
  unsigned __int8 *v11; // r3
  int v12; // r4
  int v13; // r2
  int v14; // r4
  unsigned int v15; // r0
  unsigned int v16; // t1
  unsigned int v17; // t1
  bool v18; // cc
  char *v19; // r1
  int v20; // r4
  int v21; // r1
  char *v23; // r1
  int v24; // r4
  int v25; // r5
  int v26; // lr
  int v27; // r1
  char *v28; // r1
  int v29; // r1
  char *v30; // r1
  int v31; // r5
  char *v32; // r1
  int v33; // r5
  _DWORD v34[7]; // [sp+38h] [bp-1818h] BYREF
  int v35; // [sp+54h] [bp-17FCh]
  _DWORD v36[7]; // [sp+58h] [bp-17F8h] BYREF
  int v37; // [sp+74h] [bp-17DCh]
  _DWORD v38[7]; // [sp+78h] [bp-17D8h] BYREF
  int v39; // [sp+94h] [bp-17BCh]
  _DWORD v40[7]; // [sp+98h] [bp-17B8h] BYREF
  int v41; // [sp+B4h] [bp-179Ch]
  _DWORD v42[7]; // [sp+B8h] [bp-1798h] BYREF
  int v43; // [sp+D4h] [bp-177Ch]
  _BYTE v44[32]; // [sp+D8h] [bp-1778h] BYREF
  char v45[32]; // [sp+F8h] [bp-1758h] BYREF
  char v46[360]; // [sp+118h] [bp-1738h] BYREF
  _DWORD s[372]; // [sp+280h] [bp-15D0h] BYREF
  char v48[4096]; // [sp+850h] [bp-1000h] BYREF

  v2 = *(unsigned __int8 *)(a2 + 53);
  v4 = *(_DWORD *)(a1 + 840);
  v6 = *(_DWORD *)(v4 + 4 * (v2 + 5760));
  memset(s, 0, 0x5CFu);
  memcpy(s, (const void *)(v4 + 140 * v2 + 5120), 0x88u);
  v7 = *(_DWORD *)(a2 + 48);
  LOBYTE(s[35]) = -3;
  s[34] = v7;
  *(_WORD *)((char *)&s[35] + 1) = 1344;
  memcpy((char *)&s[35] + 3, (const void *)(a2 + 54), 0x540u);
  digestInit(v46, 0xC8u, 9);
  equihash_blake2b_update((int)v46, (char *)s, 140);
  Sha256_Onestep((char *)s, 1487, (int)v45);
  Sha256_Onestep(v45, 32, (int)v44);
  reverse_hex((int)v44, 0x20u);
  v8 = target_to_diff_zec((int)v44);
  v9 = *(unsigned __int8 *)(a2 + 52);
  v10 = v8;
  if ( v9 != v8 )
  {
    V_LOCK();
    LOWORD(v28) = 27796;
    HIWORD(v28) = (unsigned int)"%1.f" >> 16;
    V_INT((int)v34, v28, *(int *)(a1 + 256));
    logfmt_raw(
      v48,
      0x1000u,
      0,
      v35,
      v34[0],
      v34[1],
      v34[2],
      v34[3],
      v34[4],
      v34[5],
      v34[6],
      v35,
      "hw error, type %d, calculate diff %d, chip return diff %d,",
      3,
      v10,
      *(unsigned __int8 *)(a2 + 52));
    V_UNLOCK();
    LOWORD(v29) = 19016;
    HIWORD(v29) = (unsigned int)", type %d, diff %d, ticket mask %d" >> 16;
    zlog(g_zc, v29, 171, "check_nonce_zec_1746", 20, 886, 20, v48);
    return 3;
  }
  if ( v9 <= 0x11 )
  {
    V_LOCK();
    LOWORD(v23) = 27796;
    HIWORD(v23) = (unsigned int)"%1.f" >> 16;
    v24 = 2;
    V_INT((int)v36, v23, *(int *)(a1 + 256));
    LOWORD(v25) = 19464;
    HIWORD(v25) = (unsigned int)"s_voltage" >> 16;
    logfmt_raw(v48, 0x1000u, 0, v37, v36[0], v36[1], v36[2], v36[3], v36[4], v36[5], v36[6], v37, v25, 2, v9, 18);
    V_UNLOCK();
    v26 = 892;
LABEL_11:
    LOWORD(v27) = 19016;
    HIWORD(v27) = (unsigned int)", type %d, diff %d, ticket mask %d" >> 16;
    zlog(g_zc, v27, 171, "check_nonce_zec_1746", 20, v26, 20, v48);
    return v24;
  }
  if ( IsValidSolution(v46, a2 + 54) )
  {
    V_LOCK();
    LOWORD(v32) = 27796;
    HIWORD(v32) = (unsigned int)"%1.f" >> 16;
    v24 = 2;
    V_INT((int)v38, v32, *(int *)(a1 + 256));
    LOWORD(v33) = 19508;
    HIWORD(v33) = (unsigned int)"enkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/backend/device/hal/drv_pic/mps2973.c" >> 16;
    logfmt_raw(v48, 0x1000u, 0, v39, v38[0], v38[1], v38[2], v38[3], v38[4], v38[5], v38[6], v39, v33, 2);
    V_UNLOCK();
    v26 = 899;
    goto LABEL_11;
  }
  if ( v10 < v6 )
  {
LABEL_13:
    V_LOCK();
    LOWORD(v30) = 27796;
    HIWORD(v30) = (unsigned int)"%1.f" >> 16;
    v24 = 1;
    V_INT((int)v40, v30, *(int *)(a1 + 256));
    LOWORD(v31) = 19552;
    HIWORD(v31) = (unsigned int)"rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/backend/device/hal/drv_pic/mps2973.c" >> 16;
    logfmt_raw(v48, 0x1000u, 0, v41, v40[0], v40[1], v40[2], v40[3], v40[4], v40[5], v40[6], v41, v31, 1, v10, v6);
    V_UNLOCK();
    v26 = 927;
    goto LABEL_11;
  }
  v11 = v44;
  v12 = v4 + 32 * (*(unsigned __int8 *)(a2 + 53) + 736);
  v13 = v12 - 1;
  v14 = v12 + 31;
  do
  {
    v16 = *v11++;
    v15 = v16;
    v17 = *(unsigned __int8 *)++v13;
    v18 = v15 > v17;
    if ( v15 < v17 )
      break;
    if ( v18 )
      goto LABEL_13;
  }
  while ( v13 != v14 );
  memcpy((void *)(a2 + 1398), s, 0x5CFu);
  V_LOCK();
  LOWORD(v19) = 27796;
  HIWORD(v19) = (unsigned int)"%1.f" >> 16;
  V_INT((int)v42, v19, *(int *)(a1 + 256));
  LOWORD(v20) = 19604;
  HIWORD(v20) = (unsigned int)"odminer-new/backend/device/hal/drv_pic/mps2973.c" >> 16;
  logfmt_raw(v48, 0x1000u, 0, v43, v42[0], v42[1], v42[2], v42[3], v42[4], v42[5], v42[6], v43, v20);
  V_UNLOCK();
  LOWORD(v21) = 19016;
  HIWORD(v21) = (unsigned int)", type %d, diff %d, ticket mask %d" >> 16;
  zlog(g_zc, v21, 171, "check_nonce_zec_1746", 20, 932, 20, v48);
  return 0;
}
