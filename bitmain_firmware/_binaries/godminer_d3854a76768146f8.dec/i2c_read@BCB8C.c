int __fastcall i2c_read(int a1, _BYTE *a2, int a3)
{
  _DWORD *v5; // r9
  int v6; // r1
  int v7; // r5
  _BYTE *v8; // r10
  _BYTE *v9; // r0
  int *v10; // r12
  int v11; // r0
  int v12; // r1
  int v13; // r2
  int v14; // r3
  int v15; // r1
  int v16; // r1
  int *v18; // r12
  int v19; // r0
  int v20; // r1
  int v21; // r2
  int v22; // r3
  int v23; // r1
  int v24; // r1
  int v25; // r1
  int *v26; // lr
  int v27; // r0
  int v28; // r1
  int v29; // r2
  int v30; // r3
  int v31; // lr
  int v32; // r1
  int v33; // [sp+14h] [bp-180Ch] BYREF
  _DWORD *v34; // [sp+1Ch] [bp-1804h] BYREF
  int s; // [sp+20h] [bp-1800h] BYREF
  int v36; // [sp+24h] [bp-17FCh]
  int v37; // [sp+28h] [bp-17F8h]
  int v38; // [sp+2Ch] [bp-17F4h]
  int v39; // [sp+30h] [bp-17F0h]
  __int16 v40; // [sp+34h] [bp-17ECh]
  char v41[4096]; // [sp+820h] [bp-1000h] BYREF

  v33 = a1;
  if ( pthread_mutex_lock(&stru_18B198) )
  {
    LOWORD(v26) = 20660;
    HIWORD(v26) = (unsigned int)"origin_godminer-new/backend/backend_base.c" >> 16;
    v27 = *v26;
    v28 = v26[1];
    v29 = v26[2];
    v30 = v26[3];
    v31 = v26[4];
    s = v27;
    v36 = v28;
    v37 = v29;
    v38 = v30;
    LOWORD(v39) = v31;
    BYTE2(v39) = BYTE2(v31);
    V_LOCK();
    logfmt_raw(v41, 0x1000u, 0, &s);
    V_UNLOCK();
    LOWORD(v32) = 31140;
    HIWORD(v32) = (unsigned int)"rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/common/general/xxtea.c" >> 16;
    zlog(g_zc, v32, 171, "i2c_read", 8, 179, 100, v41);
    return -1;
  }
  else
  {
    v34 = 0;
    if ( find_c_map((int *)dword_18B194, (int)&v33, &v34) == 1 )
    {
      v5 = v34;
      snprintf((char *)&s, 0x800u, "i2c read master = %d, slave = %d", *v34, v34[1]);
      V_LOCK();
      logfmt_raw(v41, 0x1000u, 0, &s);
      V_UNLOCK();
      LOWORD(v6) = 31140;
      HIWORD(v6) = (unsigned int)"rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/common/general/xxtea.c" >> 16;
      zlog(g_zc, v6, 171, "i2c_read", 8, 186, 20, v41);
      v7 = (*v5 << 26) | 0x2000000 | (v5[1] >> 4 << 20) | (v5[1] << 15) & 0x70000;
      if ( a3 )
      {
        v8 = &a2[a3];
        while ( 1 )
        {
          if ( !sub_BC5F4() )
          {
            free(v34);
            LOWORD(v10) = 31412;
            HIWORD(v10) = (unsigned int)&unk_1597B4 >> 16;
            v11 = *v10;
            v12 = v10[1];
            v13 = v10[2];
            v14 = v10[3];
            v10 += 4;
            s = v11;
            v36 = v12;
            v37 = v13;
            v38 = v14;
            v15 = v10[1];
            v39 = *v10;
            v40 = v15;
            V_LOCK();
            logfmt_raw(v41, 0x1000u, 0, &s);
            V_UNLOCK();
            LOWORD(v16) = 31140;
            HIWORD(v16) = (unsigned int)"rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/common/general/xxtea.c" >> 16;
            zlog(g_zc, v16, 171, "i2c_read", 8, 204, 100, v41);
            pthread_mutex_unlock(&stru_18B198);
            return -2;
          }
          fpga_write(48, v7);
          v9 = a2++;
          if ( !sub_BC650(v9) )
            break;
          if ( a2 == v8 )
            goto LABEL_9;
        }
        free(v34);
        LOWORD(v18) = 31436;
        HIWORD(v18) = (unsigned int)&unk_1597CC >> 16;
        v19 = *v18;
        v20 = v18[1];
        v21 = v18[2];
        v22 = v18[3];
        v18 += 4;
        s = v19;
        v36 = v20;
        v37 = v21;
        v38 = v22;
        v23 = v18[1];
        v39 = *v18;
        v40 = v23;
        V_LOCK();
        logfmt_raw(v41, 0x1000u, 0, &s);
        V_UNLOCK();
        LOWORD(v24) = 31140;
        HIWORD(v24) = (unsigned int)"rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/common/general/xxtea.c" >> 16;
        zlog(g_zc, v24, 171, "i2c_read", 8, 216, 100, v41);
        pthread_mutex_unlock(&stru_18B198);
        return -3;
      }
      else
      {
LABEL_9:
        free(v34);
        pthread_mutex_unlock(&stru_18B198);
        return a3;
      }
    }
    else
    {
      snprintf((char *)&s, 0x800u, "7007_i2c %s ctx %d not inited", "i2c_read", v33);
      V_LOCK();
      logfmt_raw(v41, 0x1000u, 0, &s);
      V_UNLOCK();
      LOWORD(v25) = 31140;
      HIWORD(v25) = (unsigned int)"rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/common/general/xxtea.c" >> 16;
      zlog(g_zc, v25, 171, "i2c_read", 8, 223, 100, v41);
      pthread_mutex_unlock(&stru_18B198);
      return -2;
    }
  }
}
