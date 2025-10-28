int __fastcall i2c_write(int a1, int a2, int a3)
{
  _DWORD *v5; // r6
  int v6; // r1
  int v7; // r7
  int v8; // r5
  int v9; // r7
  int v10; // t1
  int v11; // r4
  int *v12; // r12
  int v13; // r0
  int v14; // r1
  int v15; // r2
  int v16; // r3
  int v17; // r1
  int v18; // r1
  int v20; // r1
  int *v21; // lr
  int v22; // r0
  int v23; // r1
  int v24; // r2
  int v25; // r3
  int v26; // lr
  int v27; // r1
  int v28; // [sp+14h] [bp-1810h] BYREF
  void *ptr; // [sp+1Ch] [bp-1808h] BYREF
  int s; // [sp+20h] [bp-1804h] BYREF
  int v31; // [sp+24h] [bp-1800h]
  int v32; // [sp+28h] [bp-17FCh]
  int v33; // [sp+2Ch] [bp-17F8h]
  int v34; // [sp+30h] [bp-17F4h]
  __int16 v35; // [sp+34h] [bp-17F0h]
  char v36[4100]; // [sp+820h] [bp-1004h] BYREF

  v28 = a1;
  if ( pthread_mutex_lock(&stru_18B198) )
  {
    LOWORD(v21) = 20660;
    HIWORD(v21) = (unsigned int)"origin_godminer-new/backend/backend_base.c" >> 16;
    v22 = *v21;
    v23 = v21[1];
    v24 = v21[2];
    v25 = v21[3];
    v26 = v21[4];
    s = v22;
    v31 = v23;
    v32 = v24;
    v33 = v25;
    LOWORD(v34) = v26;
    BYTE2(v34) = BYTE2(v26);
    V_LOCK();
    logfmt_raw(v36, 0x1000u, 0, &s);
    V_UNLOCK();
    LOWORD(v27) = 31140;
    HIWORD(v27) = (unsigned int)"rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/common/general/xxtea.c" >> 16;
    zlog(g_zc, v27, 171, "i2c_write", 9, 244, 100, v36);
    return -1;
  }
  else
  {
    ptr = 0;
    if ( find_c_map((int *)dword_18B194, (int)&v28, &ptr) == 1 )
    {
      v5 = ptr;
      snprintf((char *)&s, 0x800u, "i2c read master = %d, slave = %d", *(_DWORD *)ptr, *((_DWORD *)ptr + 1));
      V_LOCK();
      logfmt_raw(v36, 0x1000u, 0, &s);
      V_UNLOCK();
      LOWORD(v6) = 31140;
      HIWORD(v6) = (unsigned int)"rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/common/general/xxtea.c" >> 16;
      zlog(g_zc, v6, 171, "i2c_write", 9, 251, 20, v36);
      if ( a3 )
      {
        v7 = a2 + a3;
        v8 = a2 - 1;
        v9 = v7 - 1;
        while ( 1 )
        {
          v10 = *(unsigned __int8 *)++v8;
          v11 = v10 | (v5[1] >> 4 << 20) | (*v5 << 26) | (v5[1] << 15) & 0x70000;
          if ( !sub_BC5F4() )
            break;
          fpga_write(48, v11);
          if ( v9 == v8 )
            goto LABEL_8;
        }
        free(ptr);
        LOWORD(v12) = 31492;
        HIWORD(v12) = (unsigned int)&unk_159804 >> 16;
        v13 = *v12;
        v14 = v12[1];
        v15 = v12[2];
        v16 = v12[3];
        v12 += 4;
        s = v13;
        v31 = v14;
        v32 = v15;
        v33 = v16;
        v17 = v12[1];
        v34 = *v12;
        v35 = v17;
        V_LOCK();
        logfmt_raw(v36, 0x1000u, 0, &s);
        V_UNLOCK();
        LOWORD(v18) = 31140;
        HIWORD(v18) = (unsigned int)"rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/common/general/xxtea.c" >> 16;
        zlog(g_zc, v18, 171, "i2c_write", 9, 266, 100, v36);
        pthread_mutex_unlock(&stru_18B198);
        return -2;
      }
      else
      {
LABEL_8:
        free(ptr);
        pthread_mutex_unlock(&stru_18B198);
        return a3;
      }
    }
    else
    {
      snprintf((char *)&s, 0x800u, "7007_i2c %s ctx %d not inited", "i2c_write", v28);
      V_LOCK();
      logfmt_raw(v36, 0x1000u, 0, &s);
      V_UNLOCK();
      LOWORD(v20) = 31140;
      HIWORD(v20) = (unsigned int)"rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/common/general/xxtea.c" >> 16;
      zlog(g_zc, v20, 171, "i2c_write", 9, 276, 100, v36);
      pthread_mutex_unlock(&stru_18B198);
      return -2;
    }
  }
}
