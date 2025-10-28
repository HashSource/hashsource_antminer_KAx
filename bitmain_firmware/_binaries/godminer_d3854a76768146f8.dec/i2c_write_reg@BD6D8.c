int __fastcall i2c_write_reg(int a1, unsigned __int8 *a2, int a3, int a4, int a5)
{
  int v7; // r10
  _DWORD *v8; // r5
  int v9; // r1
  int v10; // r6
  int v11; // t1
  int v12; // r2
  int v13; // r4
  int *v14; // r12
  int v15; // r0
  int v16; // r1
  int v17; // r2
  int v18; // r3
  int v19; // r1
  int v20; // r1
  int *v22; // r12
  int v23; // r0
  int v24; // r1
  int v25; // r2
  int v26; // r3
  int v27; // r0
  int v28; // r1
  int v29; // r2
  int v30; // r3
  int v31; // r1
  int v32; // r2
  int v33; // r3
  int v34; // r1
  int v35; // r1
  int *v36; // lr
  int v37; // r0
  int v38; // r1
  int v39; // r2
  int v40; // r3
  int v41; // lr
  int v42; // r1
  int v43; // [sp+14h] [bp-180Ch] BYREF
  void *ptr; // [sp+1Ch] [bp-1804h] BYREF
  int s; // [sp+20h] [bp-1800h] BYREF
  int v46; // [sp+24h] [bp-17FCh]
  int v47; // [sp+28h] [bp-17F8h]
  int v48; // [sp+2Ch] [bp-17F4h]
  int v49; // [sp+30h] [bp-17F0h]
  int v50; // [sp+34h] [bp-17ECh]
  int v51; // [sp+38h] [bp-17E8h]
  int v52; // [sp+3Ch] [bp-17E4h]
  int v53; // [sp+40h] [bp-17E0h]
  int v54; // [sp+44h] [bp-17DCh]
  int v55; // [sp+48h] [bp-17D8h]
  int v56; // [sp+4Ch] [bp-17D4h]
  char v57[4096]; // [sp+820h] [bp-1000h] BYREF

  v43 = a1;
  if ( a3 == 1 )
  {
    v7 = pthread_mutex_lock(&stru_18B198);
    if ( v7 )
    {
      LOWORD(v36) = 20660;
      HIWORD(v36) = (unsigned int)"origin_godminer-new/backend/backend_base.c" >> 16;
      v37 = *v36;
      v38 = v36[1];
      v39 = v36[2];
      v40 = v36[3];
      v41 = v36[4];
      s = v37;
      v46 = v38;
      v47 = v39;
      v48 = v40;
      LOWORD(v49) = v41;
      BYTE2(v49) = BYTE2(v41);
      V_LOCK();
      logfmt_raw(v57, 0x1000u, 0, &s);
      V_UNLOCK();
      LOWORD(v42) = 31140;
      HIWORD(v42) = (unsigned int)"rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/common/general/xxtea.c" >> 16;
      zlog(g_zc, v42, 171, "i2c_write_reg", 13, 378, 100, v57);
      return -1;
    }
    else
    {
      ptr = 0;
      if ( find_c_map((int *)dword_18B194, (int)&v43, &ptr) == 1 )
      {
        v8 = ptr;
        snprintf((char *)&s, 0x800u, "i2c read master = %d, slave = %d", *(_DWORD *)ptr, *((_DWORD *)ptr + 1));
        V_LOCK();
        logfmt_raw(v57, 0x1000u, 0, &s);
        V_UNLOCK();
        LOWORD(v9) = 31140;
        HIWORD(v9) = (unsigned int)"rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/common/general/xxtea.c" >> 16;
        zlog(g_zc, v9, 171, "i2c_write_reg", 13, 385, 20, v57);
        if ( a5 )
        {
          v10 = a4 - 1;
          while ( 1 )
          {
            v11 = *(unsigned __int8 *)++v10;
            v12 = *a2 + v7++;
            v13 = (*v8 << 26) | 0x1000000 | (v8[1] >> 4 << 20) | v11 | (v8[1] << 15) & 0x70000 | (v12 << 8);
            if ( !sub_BC5F4() )
              break;
            fpga_write(48, v13);
            if ( a5 == v7 )
              goto LABEL_9;
          }
          LOWORD(v14) = 31492;
          HIWORD(v14) = (unsigned int)&unk_159804 >> 16;
          v15 = *v14;
          v16 = v14[1];
          v17 = v14[2];
          v18 = v14[3];
          v14 += 4;
          s = v15;
          v46 = v16;
          v47 = v17;
          v48 = v18;
          v19 = v14[1];
          v49 = *v14;
          LOWORD(v50) = v19;
          V_LOCK();
          logfmt_raw(v57, 0x1000u, 0, &s);
          V_UNLOCK();
          LOWORD(v20) = 31140;
          HIWORD(v20) = (unsigned int)"rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/common/general/xxtea.c" >> 16;
          zlog(g_zc, v20, 171, "i2c_write_reg", 13, 401, 100, v57);
          free(ptr);
          pthread_mutex_unlock(&stru_18B198);
          return -2;
        }
        else
        {
LABEL_9:
          free(ptr);
          pthread_mutex_unlock(&stru_18B198);
          return a5;
        }
      }
      else
      {
        snprintf((char *)&s, 0x800u, "7007_i2c %s ctx %d not inited", "i2c_write_reg", v43);
        V_LOCK();
        logfmt_raw(v57, 0x1000u, 0, &s);
        V_UNLOCK();
        LOWORD(v35) = 31140;
        HIWORD(v35) = (unsigned int)"rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/common/general/xxtea.c" >> 16;
        zlog(g_zc, v35, 171, "i2c_write_reg", 13, 412, 100, v57);
        pthread_mutex_unlock(&stru_18B198);
        return -2;
      }
    }
  }
  else
  {
    LOWORD(v22) = 31516;
    HIWORD(v22) = (unsigned int)&unk_15981C >> 16;
    v23 = *v22;
    v24 = v22[1];
    v25 = v22[2];
    v26 = v22[3];
    v22 += 4;
    s = v23;
    v46 = v24;
    v47 = v25;
    v48 = v26;
    v27 = *v22;
    v28 = v22[1];
    v29 = v22[2];
    v30 = v22[3];
    v22 += 4;
    v49 = v27;
    v50 = v28;
    v51 = v29;
    v52 = v30;
    v31 = v22[1];
    v32 = v22[2];
    v33 = v22[3];
    v53 = *v22;
    v54 = v31;
    v55 = v32;
    v56 = v33;
    V_LOCK();
    logfmt_raw(v57, 0x1000u, 0, &s);
    V_UNLOCK();
    LOWORD(v34) = 31140;
    HIWORD(v34) = (unsigned int)"rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/common/general/xxtea.c" >> 16;
    zlog(g_zc, v34, 171, "i2c_write_reg", 13, 374, 100, v57);
    return -3;
  }
}
