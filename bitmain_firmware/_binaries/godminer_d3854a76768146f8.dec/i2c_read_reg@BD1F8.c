int __fastcall i2c_read_reg(void *a1, unsigned __int8 *a2, int a3, int a4, unsigned int a5)
{
  unsigned int v6; // r5
  _DWORD *v7; // r6
  int v8; // r1
  char *v9; // r3
  int v10; // r11
  unsigned int v11; // r0
  unsigned int v12; // r2
  unsigned int v13; // r1
  int v14; // r3
  int v15; // r2
  int v16; // r3
  int v17; // r4
  int *v18; // r12
  int v19; // r0
  int v20; // r1
  int v21; // r2
  int v22; // r3
  int v23; // r1
  int v24; // r1
  int *v26; // r12
  int v27; // r0
  int v28; // r1
  int v29; // r2
  int v30; // r3
  int v31; // r1
  int v32; // r1
  int v33; // r1
  int *v34; // r12
  int v35; // r0
  int v36; // r1
  int v37; // r2
  int v38; // r3
  int v39; // r0
  int v40; // r1
  int v41; // r2
  int v42; // r3
  int v43; // r1
  int v44; // r2
  int v45; // r3
  int v46; // r1
  int *v47; // lr
  int v48; // r0
  int v49; // r1
  int v50; // r2
  int v51; // r3
  int v52; // lr
  int v53; // r1
  char *format; // [sp+18h] [bp-808h]
  void *ptr; // [sp+1Ch] [bp-804h] BYREF
  _DWORD *v58; // [sp+24h] [bp-7FCh] BYREF
  int s; // [sp+28h] [bp-7F8h] BYREF
  int v60; // [sp+2Ch] [bp-7F4h]
  int v61; // [sp+30h] [bp-7F0h]
  int v62; // [sp+34h] [bp-7ECh]
  int v63; // [sp+38h] [bp-7E8h]
  int v64; // [sp+3Ch] [bp-7E4h]
  int v65; // [sp+40h] [bp-7E0h]
  int v66; // [sp+44h] [bp-7DCh]
  int v67; // [sp+48h] [bp-7D8h]
  int v68; // [sp+4Ch] [bp-7D4h]
  int v69; // [sp+50h] [bp-7D0h]
  int v70; // [sp+54h] [bp-7CCh]
  char _828[4120]; // [sp+828h] [bp+8h] BYREF

  ptr = a1;
  if ( (unsigned int)(a3 - 1) > 1 )
  {
    LOWORD(v34) = 31516;
    HIWORD(v34) = (unsigned int)&unk_15981C >> 16;
    v35 = *v34;
    v36 = v34[1];
    v37 = v34[2];
    v38 = v34[3];
    v34 += 4;
    s = v35;
    v60 = v36;
    v61 = v37;
    v62 = v38;
    v39 = *v34;
    v40 = v34[1];
    v41 = v34[2];
    v42 = v34[3];
    v34 += 4;
    v63 = v39;
    v64 = v40;
    v65 = v41;
    v66 = v42;
    v43 = v34[1];
    v44 = v34[2];
    v45 = v34[3];
    v67 = *v34;
    v68 = v43;
    v69 = v44;
    v70 = v45;
    V_LOCK();
    logfmt_raw(_828, 0x1000u, 0, &s);
    V_UNLOCK();
    LOWORD(v46) = 31140;
    HIWORD(v46) = (unsigned int)"rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/common/general/xxtea.c" >> 16;
    zlog(g_zc, v46, 171, "i2c_read_reg", 12, 298, 100, _828);
    return -3;
  }
  else
  {
    v6 = pthread_mutex_lock(&stru_18B198);
    if ( v6 )
    {
      LOWORD(v47) = 20660;
      HIWORD(v47) = (unsigned int)"origin_godminer-new/backend/backend_base.c" >> 16;
      v48 = *v47;
      v49 = v47[1];
      v50 = v47[2];
      v51 = v47[3];
      v52 = v47[4];
      s = v48;
      v60 = v49;
      v61 = v50;
      v62 = v51;
      LOWORD(v63) = v52;
      BYTE2(v63) = BYTE2(v52);
      V_LOCK();
      logfmt_raw(_828, 0x1000u, 0, &s);
      V_UNLOCK();
      LOWORD(v53) = 31140;
      HIWORD(v53) = (unsigned int)"rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/common/general/xxtea.c" >> 16;
      zlog(g_zc, v53, 171, "i2c_read_reg", 12, 302, 100, _828);
      return -1;
    }
    else
    {
      v58 = 0;
      if ( find_c_map((int *)dword_18B194, (int)&ptr, &v58) == 1 )
      {
        v7 = v58;
        snprintf((char *)&s, 0x800u, "i2c read master = %d, slave = %d", *v58, v58[1]);
        V_LOCK();
        logfmt_raw(_828, 0x1000u, 0, &s);
        V_UNLOCK();
        LOWORD(v8) = 31140;
        HIWORD(v8) = (unsigned int)"rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/common/general/xxtea.c" >> 16;
        zlog(g_zc, v8, 171, "i2c_read_reg", 12, 309, 20, _828);
        if ( a5 )
        {
          LOWORD(v9) = 31564;
          LOWORD(v10) = 31140;
          HIWORD(v9) = (unsigned int)&unk_15984C >> 16;
          format = v9;
          while ( 1 )
          {
            v12 = v7[1];
            v13 = v12 >> 4 << 20;
            v14 = *v7 << 26;
            v15 = (v12 << 15) & 0x70000;
            if ( a3 == 2 )
              v16 = v14 | 0x3000000;
            else
              v16 = v14 | 0x3080000;
            v17 = v16 | v13 | v15 | ((*a2 + v6) << 8);
            if ( !sub_BC5F4() )
            {
              LOWORD(v18) = 31412;
              HIWORD(v18) = (unsigned int)&unk_1597B4 >> 16;
              v19 = *v18;
              v20 = v18[1];
              v21 = v18[2];
              v22 = v18[3];
              v18 += 4;
              s = v19;
              v60 = v20;
              v61 = v21;
              v62 = v22;
              v23 = v18[1];
              v63 = *v18;
              LOWORD(v64) = v23;
              V_LOCK();
              logfmt_raw(_828, 0x1000u, 0, &s);
              V_UNLOCK();
              LOWORD(v24) = 31140;
              HIWORD(v24) = (unsigned int)"rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/common/general/xxtea.c" >> 16;
              zlog(g_zc, v24, 171, "i2c_read_reg", 12, 331, 100, _828);
              free(v58);
              pthread_mutex_unlock(&stru_18B198);
              return -2;
            }
            fpga_write(48, v17);
            snprintf((char *)&s, 0x800u, format, *v7, v7[1], v17);
            V_LOCK();
            logfmt_raw(_828, 0x1000u, 0, &s);
            V_UNLOCK();
            HIWORD(v10) = (unsigned int)"rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/common/general/xxtea.c" >> 16;
            zlog(g_zc, v10, 171, "i2c_read_reg", 12, 337, 20, _828);
            v11 = sub_BC650((_BYTE *)(a4 + v6));
            v6 += a3 + 1;
            if ( !v11 )
              break;
            if ( a5 <= v6 )
              goto LABEL_13;
          }
          LOWORD(v26) = 31612;
          HIWORD(v26) = (unsigned int)&unk_15987C >> 16;
          v27 = *v26;
          v28 = v26[1];
          v29 = v26[2];
          v30 = v26[3];
          v26 += 4;
          s = v27;
          v60 = v28;
          v61 = v29;
          v62 = v30;
          v31 = v26[1];
          v63 = *v26;
          v64 = v31;
          V_LOCK();
          logfmt_raw(_828, 0x1000u, 0, &s);
          V_UNLOCK();
          LOWORD(v32) = 31140;
          HIWORD(v32) = (unsigned int)"rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/common/general/xxtea.c" >> 16;
          zlog(g_zc, v32, 171, "i2c_read_reg", 12, 344, 100, _828);
          free(v58);
          pthread_mutex_unlock(&stru_18B198);
          return -3;
        }
        else
        {
LABEL_13:
          free(v58);
          pthread_mutex_unlock(&stru_18B198);
          return a5;
        }
      }
      else
      {
        snprintf((char *)&s, 0x800u, "7007_i2c %s ctx %d not inited", "i2c_read_reg", ptr);
        V_LOCK();
        logfmt_raw(_828, 0x1000u, 0, &s);
        V_UNLOCK();
        LOWORD(v33) = 31140;
        HIWORD(v33) = (unsigned int)"rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/common/general/xxtea.c" >> 16;
        zlog(g_zc, v33, 171, "i2c_read_reg", 12, 352, 100, _828);
        pthread_mutex_unlock(&stru_18B198);
        return -2;
      }
    }
  }
}
