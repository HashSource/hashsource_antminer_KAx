int __fastcall i2c_uninit(int a1)
{
  int v1; // r4
  const char *v2; // r2
  int v3; // r1
  int (**v4)(void); // r5
  const char *v5; // r2
  int v6; // r1
  int result; // r0
  int *v8; // lr
  int v9; // r0
  int v10; // r1
  int v11; // r2
  int v12; // r3
  int v13; // lr
  int v14; // r1
  int *v15; // r12
  int v16; // r0
  int v17; // r1
  int v18; // r2
  int v19; // r3
  int v20; // r12
  int v21; // r1
  const char *v22; // r2
  int v23; // r1
  int v24; // [sp+14h] [bp-7FCh] BYREF
  int s; // [sp+18h] [bp-7F8h] BYREF
  int v26; // [sp+1Ch] [bp-7F4h]
  int v27; // [sp+20h] [bp-7F0h]
  int v28; // [sp+24h] [bp-7ECh]
  __int16 v29; // [sp+28h] [bp-7E8h]
  char v30; // [sp+2Ah] [bp-7E6h]
  char v31[4100]; // [sp+818h] [bp+8h] BYREF

  v24 = a1;
  v1 = pthread_mutex_lock(&stru_18B198);
  if ( v1 )
  {
    LOWORD(v8) = 20660;
    HIWORD(v8) = (unsigned int)"origin_godminer-new/backend/backend_base.c" >> 16;
    v9 = *v8;
    v10 = v8[1];
    v11 = v8[2];
    v12 = v8[3];
    v13 = v8[4];
    s = v9;
    v26 = v10;
    v27 = v11;
    v28 = v12;
    v29 = v13;
    v30 = BYTE2(v13);
    V_LOCK();
    logfmt_raw(v31, 0x1000u, 0, &s);
    V_UNLOCK();
    LOWORD(v14) = 31140;
    HIWORD(v14) = (unsigned int)"rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/common/general/xxtea.c" >> 16;
    return zlog(g_zc, v14, 171, "i2c_uninit", 10, 61, 100, v31);
  }
  else
  {
    if ( exists_c_map((int *)dword_18B194, (int)&v24) == (int *)1 )
    {
      LOWORD(v22) = 19440;
      HIWORD(v22) = (unsigned int)"rsion failed" >> 16;
      snprintf((char *)&s, 0x800u, v22, v24);
      V_LOCK();
      logfmt_raw(v31, 0x1000u, 0, &s);
      V_UNLOCK();
      LOWORD(v23) = 31140;
      HIWORD(v23) = (unsigned int)"rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/common/general/xxtea.c" >> 16;
      zlog(g_zc, v23, 171, "i2c_uninit", 10, 65, 20, v31);
      remove_c_map((int *)dword_18B194, (int)&v24);
    }
    else
    {
      LOWORD(v2) = 31312;
      HIWORD(v2) = (unsigned int)" now is %d" >> 16;
      snprintf((char *)&s, 0x800u, v2, v24);
      V_LOCK();
      logfmt_raw(v31, 0x1000u, 0, &s);
      V_UNLOCK();
      LOWORD(v3) = 31140;
      HIWORD(v3) = (unsigned int)"rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/common/general/xxtea.c" >> 16;
      zlog(g_zc, v3, 171, "i2c_uninit", 10, 68, 80, v31);
    }
    v4 = (int (**)(void))new_iterator_c_map(dword_18B194);
    if ( (*v4)() )
    {
      do
        ++v1;
      while ( ((int (__fastcall *)(int (**)(void)))*v4)(v4) );
      delete_iterator_c_map(v4);
      pthread_mutex_unlock(&stru_18B198);
      LOWORD(v5) = 31356;
      HIWORD(v5) = (unsigned int)"pport it" >> 16;
      snprintf((char *)&s, 0x800u, v5, v1);
      V_LOCK();
      logfmt_raw(v31, 0x1000u, 0, &s);
      V_UNLOCK();
      LOWORD(v6) = 31140;
      HIWORD(v6) = (unsigned int)"rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/common/general/xxtea.c" >> 16;
      return zlog(g_zc, v6, 171, "i2c_uninit", 10, 84, 20, v31);
    }
    else
    {
      delete_iterator_c_map(v4);
      pthread_mutex_unlock(&stru_18B198);
      LOWORD(v15) = 31336;
      HIWORD(v15) = (unsigned int)"pe is %d, but not support it" >> 16;
      v16 = *v15;
      v17 = v15[1];
      v18 = v15[2];
      v19 = v15[3];
      v20 = v15[4];
      s = v16;
      v26 = v17;
      v27 = v18;
      v28 = v19;
      LOBYTE(v29) = v20;
      V_LOCK();
      logfmt_raw(v31, 0x1000u, 0, &s);
      V_UNLOCK();
      LOWORD(v21) = 31140;
      HIWORD(v21) = (unsigned int)"rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/common/general/xxtea.c" >> 16;
      zlog(g_zc, v21, 171, "i2c_uninit", 10, 79, 20, v31);
      dword_18B190 = 0;
      result = delete_c_map((void (__fastcall ***)(_DWORD))dword_18B194);
      dword_18B194 = 0;
    }
  }
  return result;
}
