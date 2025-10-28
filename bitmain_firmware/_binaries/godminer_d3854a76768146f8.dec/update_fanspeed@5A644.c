int __fastcall update_fanspeed(int a1, _DWORD *a2, int a3)
{
  int v6; // r3
  int v8; // r5
  unsigned int v9; // r9
  int v10; // r1
  int v11; // r2
  int v12; // r3
  _DWORD *v13; // r11
  int v14; // r1
  int v15; // r2
  int v16; // r3
  const char *v17; // r0
  int v18; // r3
  int v19; // r2
  _DWORD *v20; // r3
  int realtime_speed; // r6
  _DWORD *v22; // r11
  int v23; // r1
  int v24; // r2
  int v25; // r3
  _DWORD *v26; // r8
  int v27; // r1
  int v28; // r2
  int v29; // r3
  int v30; // r1
  int v31; // r2
  int v32; // r3
  char *v33; // r11
  _DWORD *v34; // r8
  int v35; // r1
  int v36; // r2
  int v37; // r3
  const char *v38; // r2
  bool v39; // cc
  int v40; // r3
  int v41; // r5
  int v42; // r9
  int v43; // r10
  int fan_max_speed; // r6
  int v45; // r3
  bool v46; // nf
  __int64 v47; // r10
  int v48; // r9
  int v49; // r7
  _DWORD *v50; // r6
  int v51; // r1
  int v52; // r2
  int v53; // r3
  int v54; // r1
  int v55; // r2
  int v56; // r3
  _DWORD *v57; // r12
  char *v58; // lr
  int v59; // r1
  int v60; // r2
  int v61; // r3
  int v62; // r1
  int v63; // r2
  int v64; // r3
  _BYTE v65[32]; // [sp+20h] [bp-11C4h] BYREF
  const char *v66; // [sp+40h] [bp-11A4h]
  const char *v67; // [sp+44h] [bp-11A0h]
  char *v68; // [sp+48h] [bp-119Ch]
  _DWORD *v69; // [sp+54h] [bp-1190h]
  char *s; // [sp+58h] [bp-118Ch]
  char *v71; // [sp+5Ch] [bp-1188h]
  const char *v72; // [sp+60h] [bp-1184h]
  char *v73; // [sp+64h] [bp-1180h]
  __int64 v74; // [sp+68h] [bp-117Ch]
  const char *v75; // [sp+70h] [bp-1174h]
  _DWORD *v76; // [sp+74h] [bp-1170h]
  int fan_num; // [sp+78h] [bp-116Ch]
  int *v78; // [sp+7Ch] [bp-1168h]
  int *v79; // [sp+80h] [bp-1164h]
  int v80; // [sp+84h] [bp-1160h]
  _DWORD *v81; // [sp+88h] [bp-115Ch]
  int v82; // [sp+8Ch] [bp-1158h]
  int v83; // [sp+90h] [bp-1154h]
  char *v84; // [sp+94h] [bp-1150h]
  int v85; // [sp+9Ch] [bp-1148h] BYREF
  _DWORD v86[7]; // [sp+A0h] [bp-1144h] BYREF
  int v87; // [sp+BCh] [bp-1128h]
  _DWORD v88[8]; // [sp+C0h] [bp-1124h] BYREF
  _DWORD v89[7]; // [sp+E0h] [bp-1104h] BYREF
  int v90; // [sp+FCh] [bp-10E8h]
  _DWORD v91[8]; // [sp+100h] [bp-10E4h] BYREF
  _DWORD v92[7]; // [sp+120h] [bp-10C4h] BYREF
  int v93; // [sp+13Ch] [bp-10A8h]
  _DWORD v94[8]; // [sp+140h] [bp-10A4h] BYREF
  _DWORD v95[7]; // [sp+160h] [bp-1084h] BYREF
  int v96; // [sp+17Ch] [bp-1068h]
  _DWORD v97[8]; // [sp+180h] [bp-1064h] BYREF
  _DWORD v98[7]; // [sp+1A0h] [bp-1044h] BYREF
  int v99; // [sp+1BCh] [bp-1028h]
  _DWORD v100[8]; // [sp+1C0h] [bp-1024h] BYREF
  char v101[4100]; // [sp+1E0h] [bp-1004h] BYREF

  v82 = a3;
  v85 = 0;
  v6 = *(_DWORD *)get_all_created_runtime(&v85);
  v80 = a3 + 32;
  v83 = v6;
  if ( v6 == a1 )
  {
    v84 = &fan_inited;
    if ( !fan_inited )
    {
      fan_init();
      *v84 = 1;
    }
    fan_num = platform_get_fan_num();
    if ( fan_num <= 0 )
    {
      v40 = *(_DWORD *)(v82 + 32);
      a2[23] = 0;
    }
    else
    {
      v72 = "update_fanspeed";
      v8 = 0;
      v73 = "%s";
      v75 = 0;
      v9 = 0;
      v79 = &g_fan_zc;
      v78 = &g_zc;
      s = "fanid";
      v71 = "fanspeed";
      v76 = v65;
      v81 = a2;
      v69 = 0;
      do
      {
        realtime_speed = fan_get_realtime_speed(v8);
        V_LOCK();
        V_INT((int)v86, s, __SPAIR64__((unsigned int)v69, v9));
        v74 = realtime_speed;
        V_INT((int)v88, v71, realtime_speed);
        v22 = v76;
        v23 = v88[1];
        v24 = v88[2];
        v25 = v88[3];
        v26 = v76;
        v67 = v72;
        v66 = v73;
        *v76 = v88[0];
        v26[1] = v23;
        v26[2] = v24;
        v26[3] = v25;
        v26 += 4;
        v27 = v88[5];
        v28 = v88[6];
        v29 = v88[7];
        *v26 = v88[4];
        v26[1] = v27;
        v26[2] = v28;
        v26[3] = v29;
        logfmt_raw(v101, 0x1000u, 0, v87, v86[0], v86[1], v86[2], v86[3], v86[4], v86[5], v86[6], v87);
        V_UNLOCK();
        zlog(
          *v79,
          "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/miner_util/miner_monitor/update_miner_status/update_fanspeed.c",
          190,
          "update_fanspeed",
          15,
          37,
          40,
          v101);
        V_LOCK();
        if ( realtime_speed == -1 )
        {
          V_INT((int)v92, s, __SPAIR64__((unsigned int)v69, v9));
          V_INT((int)v94, v71, 0);
          v30 = v94[1];
          v31 = v94[2];
          v32 = v94[3];
          v33 = (&fan_name)[v8];
          v34 = v76;
          v66 = "%2d(corresponding to FAN%s on control board PCB";
          v67 = (const char *)v8;
          v68 = v33;
          *v76 = v94[0];
          v34[1] = v30;
          v34[2] = v31;
          v34[3] = v32;
          v34 += 4;
          v35 = v94[5];
          v36 = v94[6];
          v37 = v94[7];
          *v34 = v94[4];
          v34[1] = v35;
          v34[2] = v36;
          v34[3] = v37;
          logfmt_raw(v101, 0x1000u, 0, v93, v92[0], v92[1], v92[2], v92[3], v92[4], v92[5], v92[6], v93);
          V_UNLOCK();
          zlog(
            *v78,
            "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/miner_util/miner_monitor/update_miner_status/update_fanspeed.c",
            190,
            "update_fanspeed",
            15,
            45,
            100,
            v101);
        }
        else
        {
          V_INT((int)v89, s, __SPAIR64__((unsigned int)v69, v9));
          V_INT((int)v91, v71, v74);
          v10 = v91[1];
          v11 = v91[2];
          v12 = v91[3];
          v67 = v72;
          v66 = v73;
          *v22 = v91[0];
          v22[1] = v10;
          v22[2] = v11;
          v22[3] = v12;
          v13 = v22 + 4;
          v14 = v91[5];
          v15 = v91[6];
          v16 = v91[7];
          *v13 = v91[4];
          v13[1] = v14;
          v13[2] = v15;
          v13[3] = v16;
          logfmt_raw(v101, 0x1000u, 0, v90, v89[0], v89[1], v89[2], v89[3], v89[4], v89[5], v89[6], v90);
          V_UNLOCK();
          zlog(
            *v78,
            "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/miner_util/miner_monitor/update_miner_status/update_fanspeed.c",
            190,
            "update_fanspeed",
            15,
            39,
            20,
            v101);
          v17 = v75;
          v18 = 4 * (_DWORD)v75;
          v19 = v81[24];
          *(_DWORD *)(v81[25] + 4 * (_DWORD)v75) = v8;
          *(_DWORD *)(v19 + v18) = realtime_speed;
          v75 = v17 + 1;
        }
        ++v8;
        v20 = (_DWORD *)((__PAIR64__((unsigned int)v69, v9++) + 1) >> 32);
        v69 = v20;
      }
      while ( fan_num != v8 );
      v38 = v75;
      a2 = v81;
      v39 = (int)v75 < fan_num;
      v81[23] = v75;
      if ( !v39 || (v40 = *(_DWORD *)(v82 + 32) | 2, *(_DWORD *)(v82 + 32) = v40, v38) )
      {
        v41 = 0;
        v42 = v82;
        do
        {
          while ( 1 )
          {
            v43 = *(_DWORD *)(a2[24] + 4 * v41);
            if ( v43 )
            {
              fan_max_speed = platform_get_fan_max_speed(v41);
              if ( v43 >= fan_pwm_get() * fan_max_speed / 150 )
                break;
            }
            ++v41;
            *(_DWORD *)(v42 + 32) |= 1u;
            if ( a2[23] <= v41 )
              goto LABEL_19;
          }
          ++v41;
        }
        while ( a2[23] > v41 );
LABEL_19:
        v40 = *(_DWORD *)(v82 + 32);
      }
    }
    if ( (v40 & 3) != 0 )
    {
      v45 = *((_DWORD *)v84 + 1) + 1;
      v46 = *((_DWORD *)v84 + 1) - 14 < 0;
      *((_DWORD *)v84 + 1) = v45;
      if ( !(v46 ^ __OFSUB__(v45, 15) | (v45 == 15)) )
      {
        V_LOCK();
        logfmt_raw(v101, 0x1000u, 0, "fan_error_num: %d fan_num %d", *((_DWORD *)v84 + 1), a2[23]);
        V_UNLOCK();
        if ( !*(_BYTE *)(v83 + 238) )
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/miner_util/miner_monitor/update_miner_status/update_fanspeed.c",
            190,
            "update_fanspeed",
            15,
            63,
            20,
            v101);
        if ( *((_DWORD *)v84 + 1) == 16 )
        {
          V_LOCK();
          v78 = &g_zc;
          logfmt_raw(v101, 0x1000u, 0, "Sweep error string = %s.", "F:1");
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/miner_util/miner_monitor/update_miner_status/update_fanspeed.c",
            190,
            "update_fanspeed",
            15,
            67,
            100,
            v101);
          v39 = fan_num <= 0;
          *(_DWORD *)(v82 + 32) |= 4u;
          if ( !v39 )
          {
            v47 = 0;
            v72 = "update_fanspeed";
            v69 = &unk_172CCC;
            v48 = 0;
            v73 = "%s";
            v79 = &g_fan_zc;
            v75 = "%2d(corresponding to FAN%s on control board PCB";
            s = "fanid";
            v71 = "fanspeed";
            LODWORD(v74) = "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/"
                           "build/godminer-origin_godminer-new/miner_util/miner_monitor/update_miner_status/update_fanspeed.c";
            v76 = v65;
            do
            {
              v49 = fan_get_realtime_speed(v48);
              V_LOCK();
              V_INT((int)v95, s, v47);
              v50 = v76;
              V_INT((int)v97, v71, v49);
              v67 = v72;
              v51 = v97[1];
              v52 = v97[2];
              v53 = v97[3];
              v66 = v73;
              *v50 = v97[0];
              v50[1] = v51;
              v50[2] = v52;
              v50[3] = v53;
              v50 += 4;
              v54 = v97[5];
              v55 = v97[6];
              v56 = v97[7];
              *v50 = v97[4];
              v50[1] = v54;
              v50[2] = v55;
              v50[3] = v56;
              logfmt_raw(v101, 0x1000u, 0, v96, v95[0], v95[1], v95[2], v95[3], v95[4], v95[5], v95[6], v96);
              V_UNLOCK();
              zlog(*v79, v74, 190, "update_fanspeed", 15, 71, 40, v101);
              V_LOCK();
              V_INT((int)v98, s, v47);
              V_INT((int)v100, v71, v49 & ~(v49 >> 31));
              v57 = v76;
              v58 = (char *)v69[1];
              ++v69;
              v59 = v100[1];
              v60 = v100[2];
              v61 = v100[3];
              v67 = (const char *)v48++;
              v68 = v58;
              v66 = v75;
              *v76 = v100[0];
              v57[1] = v59;
              v57[2] = v60;
              v57[3] = v61;
              v62 = v100[5];
              v63 = v100[6];
              v64 = v100[7];
              *v50 = v100[4];
              v50[1] = v62;
              v50[2] = v63;
              v50[3] = v64;
              logfmt_raw(v101, 0x1000u, 0, v99, v98[0], v98[1], v98[2], v98[3], v98[4], v98[5], v98[6], v99);
              V_UNLOCK();
              zlog(*v78, v74, 190, "update_fanspeed", 15, 72, 100, v101);
              ++v47;
            }
            while ( fan_num != v48 );
          }
        }
      }
    }
    else
    {
      *((_DWORD *)v84 + 1) = 0;
    }
  }
  return v80;
}
