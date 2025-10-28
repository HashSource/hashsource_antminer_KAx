int __fastcall update_fanspeed(int a1, _DWORD *a2, int a3)
{
  int v6; // r3
  char *v8; // r2
  char *v9; // r12
  char *v10; // lr
  int v11; // r5
  unsigned int v12; // r9
  int v13; // r1
  int v14; // r2
  int v15; // r3
  _DWORD *v16; // r11
  int v17; // r1
  int v18; // r2
  int v19; // r3
  int v20; // r0
  int v21; // r3
  int v22; // r2
  int v23; // r3
  int realtime_speed; // r6
  _DWORD *v25; // r11
  int v26; // r1
  int v27; // r2
  int v28; // r3
  _DWORD *v29; // r8
  int v30; // r1
  int v31; // r2
  int v32; // r3
  int v33; // r3
  char *v34; // r6
  int v35; // r1
  int v36; // r2
  int v37; // r3
  char *v38; // r11
  _DWORD *v39; // r8
  int v40; // r1
  int v41; // r2
  int v42; // r3
  int v43; // r3
  bool v44; // cc
  int v45; // r2
  int v46; // r5
  int v47; // r6
  int v48; // r3
  int v49; // r11
  int fan_max_speed; // r10
  int v51; // r0
  int v52; // r3
  bool v53; // nf
  int v54; // r3
  _DWORD *v55; // r0
  char *v56; // r12
  int v57; // lr
  int v58; // r5
  int v59; // r9
  __int64 v60; // kr08_8
  int v61; // r7
  _DWORD *v62; // r6
  int v63; // r1
  int v64; // r2
  int v65; // r3
  int v66; // r1
  int v67; // r2
  int v68; // r3
  _DWORD *v69; // r12
  char *v70; // lr
  int v71; // r1
  int v72; // r2
  int v73; // r3
  int v74; // r1
  int v75; // r2
  int v76; // r3
  int v78; // r5
  int v79; // r4
  int v80; // r0
  int v81; // r2
  int v82; // r3
  int v83; // r1
  _BYTE v84[32]; // [sp+20h] [bp-11CCh] BYREF
  char *v85; // [sp+40h] [bp-11ACh]
  const char *v86; // [sp+44h] [bp-11A8h]
  char *v87; // [sp+48h] [bp-11A4h]
  int v88; // [sp+54h] [bp-1198h]
  char *s; // [sp+58h] [bp-1194h]
  char *v90; // [sp+5Ch] [bp-1190h]
  char *v91; // [sp+60h] [bp-118Ch]
  const char *v92; // [sp+64h] [bp-1188h]
  __int64 v93; // [sp+68h] [bp-1184h]
  _DWORD *v94; // [sp+70h] [bp-117Ch]
  int v95; // [sp+74h] [bp-1178h]
  int fan_num; // [sp+78h] [bp-1174h]
  int *v97; // [sp+7Ch] [bp-1170h]
  int *v98; // [sp+80h] [bp-116Ch]
  int v99; // [sp+84h] [bp-1168h]
  _DWORD *v100; // [sp+88h] [bp-1164h]
  int v101; // [sp+8Ch] [bp-1160h]
  int v102; // [sp+90h] [bp-115Ch]
  char *v103; // [sp+94h] [bp-1158h]
  int v104; // [sp+9Ch] [bp-1150h] BYREF
  _DWORD v105[2]; // [sp+A0h] [bp-114Ch] BYREF
  _DWORD v106[7]; // [sp+A8h] [bp-1144h] BYREF
  int v107; // [sp+C4h] [bp-1128h]
  _DWORD v108[8]; // [sp+C8h] [bp-1124h] BYREF
  _DWORD v109[7]; // [sp+E8h] [bp-1104h] BYREF
  int v110; // [sp+104h] [bp-10E8h]
  _DWORD v111[8]; // [sp+108h] [bp-10E4h] BYREF
  _DWORD v112[7]; // [sp+128h] [bp-10C4h] BYREF
  int v113; // [sp+144h] [bp-10A8h]
  _DWORD v114[8]; // [sp+148h] [bp-10A4h] BYREF
  _DWORD v115[7]; // [sp+168h] [bp-1084h] BYREF
  int v116; // [sp+184h] [bp-1068h]
  _DWORD v117[8]; // [sp+188h] [bp-1064h] BYREF
  _DWORD v118[7]; // [sp+1A8h] [bp-1044h] BYREF
  int v119; // [sp+1C4h] [bp-1028h]
  _DWORD v120[8]; // [sp+1C8h] [bp-1024h] BYREF
  char v121[4100]; // [sp+1E8h] [bp-1004h] BYREF

  v101 = a3;
  v104 = 0;
  v6 = *(_DWORD *)get_all_created_runtime(&v104);
  v99 = a3 + 32;
  v102 = v6;
  if ( v6 == a1 )
  {
    v103 = &fan_inited;
    if ( !fan_inited )
    {
      fan_init();
      *v103 = 1;
    }
    fan_num = platform_get_fan_num();
    v105[1] = 0;
    v105[0] = 0;
    if ( fan_num <= 0 )
    {
      v81 = *(_DWORD *)(v101 + 32);
      a2[23] = 0;
      if ( (v81 & 3) == 0 )
      {
        *((_DWORD *)v103 + 1) = 0;
        return v99;
      }
    }
    else
    {
      LOWORD(v8) = -31044;
      HIWORD(v8) = (unsigned int)"il/miner_monitor/update_miner_status/update_hashrate.c" >> 16;
      v92 = v8;
      LOWORD(v9) = 27908;
      LOWORD(v8) = -27176;
      LOWORD(v10) = 27916;
      v11 = 0;
      v95 = 0;
      HIWORD(v8) = (unsigned int)"d" >> 16;
      HIWORD(v9) = (unsigned int)"wer watchdog failed!" >> 16;
      HIWORD(v10) = (unsigned int)"hdog failed!" >> 16;
      v12 = 0;
      v91 = v8;
      v97 = &g_fan_zc;
      v98 = &g_zc;
      s = v9;
      v90 = v10;
      v94 = v84;
      v100 = a2;
      v88 = 0;
      do
      {
        realtime_speed = fan_get_realtime_speed(v11);
        V_LOCK();
        V_INT((int)v106, s, __SPAIR64__(v88, v12));
        v93 = realtime_speed;
        V_INT((int)v108, v90, realtime_speed);
        v25 = v94;
        v26 = v108[1];
        v27 = v108[2];
        v28 = v108[3];
        v29 = v94;
        v86 = v92;
        v85 = v91;
        *v94 = v108[0];
        v29[1] = v26;
        v29[2] = v27;
        v29[3] = v28;
        v29 += 4;
        v30 = v108[5];
        v31 = v108[6];
        v32 = v108[7];
        *v29 = v108[4];
        v29[1] = v30;
        v29[2] = v31;
        v29[3] = v32;
        logfmt_raw(v121, 0x1000u, 0, v107, v106[0], v106[1], v106[2], v106[3], v106[4], v106[5], v106[6], v107);
        V_UNLOCK();
        LOWORD(v33) = -31044;
        HIWORD(v33) = (unsigned int)"il/miner_monitor/update_miner_status/update_hashrate.c" >> 16;
        zlog(
          *v97,
          "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/miner_util/miner_monitor/update_miner_status/update_fanspeed.c",
          190,
          v33,
          15,
          37,
          40,
          v121);
        V_LOCK();
        if ( realtime_speed == -1 )
        {
          LOWORD(v34) = 27928;
          V_INT((int)v112, s, __SPAIR64__(v88, v12));
          V_INT((int)v114, v90, 0);
          v35 = v114[1];
          v36 = v114[2];
          v37 = v114[3];
          HIWORD(v34) = (unsigned int)"" >> 16;
          v38 = (&fan_name)[v11];
          v39 = v94;
          v85 = v34;
          v86 = (const char *)v11;
          v87 = v38;
          *v94 = v114[0];
          v39[1] = v35;
          v39[2] = v36;
          v39[3] = v37;
          v39 += 4;
          v40 = v114[5];
          v41 = v114[6];
          v42 = v114[7];
          *v39 = v114[4];
          v39[1] = v40;
          v39[2] = v41;
          v39[3] = v42;
          logfmt_raw(v121, 0x1000u, 0, v113, v112[0], v112[1], v112[2], v112[3], v112[4], v112[5], v112[6], v113);
          V_UNLOCK();
          zlog(
            *v98,
            "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/miner_util/miner_monitor/update_miner_status/update_fanspeed.c",
            190,
            "update_fanspeed",
            15,
            45,
            100,
            v121);
          *((_BYTE *)v105 + v11) = 1;
        }
        else
        {
          V_INT((int)v109, s, __SPAIR64__(v88, v12));
          V_INT((int)v111, v90, v93);
          v13 = v111[1];
          v14 = v111[2];
          v15 = v111[3];
          v86 = v92;
          v85 = v91;
          *v25 = v111[0];
          v25[1] = v13;
          v25[2] = v14;
          v25[3] = v15;
          v16 = v25 + 4;
          v17 = v111[5];
          v18 = v111[6];
          v19 = v111[7];
          *v16 = v111[4];
          v16[1] = v17;
          v16[2] = v18;
          v16[3] = v19;
          logfmt_raw(v121, 0x1000u, 0, v110, v109[0], v109[1], v109[2], v109[3], v109[4], v109[5], v109[6], v110);
          V_UNLOCK();
          zlog(
            *v98,
            "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/miner_util/miner_monitor/update_miner_status/update_fanspeed.c",
            190,
            "update_fanspeed",
            15,
            39,
            20,
            v121);
          v20 = v95;
          v21 = 4 * v95;
          v22 = v100[24];
          *(_DWORD *)(v100[25] + 4 * v95) = v11;
          *(_DWORD *)(v22 + v21) = realtime_speed;
          v95 = v20 + 1;
        }
        ++v11;
        v23 = (__PAIR64__(v88, v12++) + 1) >> 32;
        v88 = v23;
      }
      while ( fan_num != v11 );
      v43 = v95;
      a2 = v100;
      v44 = v95 < fan_num;
      v100[23] = v95;
      if ( !v44 || (v45 = *(_DWORD *)(v101 + 32) | 2, *(_DWORD *)(v101 + 32) = v45, v43) )
      {
        v46 = 0;
        v47 = v101;
        v88 = 458129845;
        do
        {
          while ( 1 )
          {
            v49 = *(_DWORD *)(a2[24] + 4 * v46);
            if ( v49 )
            {
              fan_max_speed = platform_get_fan_max_speed(v46);
              v51 = fan_pwm_get();
              if ( v49 >= ((int)((unsigned __int64)(v51 * fan_max_speed * (__int64)v88) >> 32) >> 4)
                        - ((v51 * fan_max_speed) >> 31) )
                break;
            }
            v48 = *(_DWORD *)(v47 + 32);
            *((_BYTE *)v105 + v46++) = 1;
            *(_DWORD *)(v47 + 32) = v48 | 1;
            if ( a2[23] <= v46 )
              goto LABEL_19;
          }
          ++v46;
        }
        while ( a2[23] > v46 );
LABEL_19:
        v45 = *(_DWORD *)(v101 + 32);
      }
      if ( (v45 & 3) == 0 )
      {
        v78 = fan_num;
        v79 = 0;
        *((_DWORD *)v103 + 1) = 0;
        do
        {
          v80 = v79++;
          set_miner_6060info_status_fan_err(v80, 0);
        }
        while ( v78 != v79 );
        return v99;
      }
    }
    v52 = *((_DWORD *)v103 + 1) + 1;
    v53 = *((_DWORD *)v103 + 1) - 14 < 0;
    *((_DWORD *)v103 + 1) = v52;
    if ( !(v53 ^ __OFSUB__(v52, 15) | (v52 == 15)) )
    {
      V_LOCK();
      LOWORD(v54) = -30836;
      HIWORD(v54) = (unsigned int)"te_temperature" >> 16;
      logfmt_raw(v121, 0x1000u, 0, v54, *((_DWORD *)v103 + 1), a2[23]);
      V_UNLOCK();
      if ( !*(_BYTE *)(v102 + 265) )
      {
        LOWORD(v82) = -31044;
        LOWORD(v83) = -31028;
        HIWORD(v82) = (unsigned int)"il/miner_monitor/update_miner_status/update_hashrate.c" >> 16;
        HIWORD(v83) = (unsigned int)"/update_miner_status/update_hashrate.c" >> 16;
        zlog(g_zc, v83, 190, v82, 15, 65, 20, v121);
      }
      if ( *((_DWORD *)v103 + 1) == 16 )
      {
        v44 = fan_num <= 0;
        *(_DWORD *)(v101 + 32) |= 4u;
        if ( !v44 )
        {
          v92 = "update_fanspeed";
          s = (char *)&unk_194490;
          LOWORD(v55) = 27928;
          LOWORD(v56) = 27908;
          LOWORD(v57) = 27916;
          LOWORD(v58) = -31028;
          v91 = "%s";
          HIWORD(v55) = (unsigned int)"" >> 16;
          HIWORD(v56) = (unsigned int)"wer watchdog failed!" >> 16;
          HIWORD(v57) = (unsigned int)"hdog failed!" >> 16;
          HIWORD(v58) = (unsigned int)"/update_miner_status/update_hashrate.c" >> 16;
          v88 = (int)&v104 + 3;
          v97 = &g_fan_zc;
          v98 = &g_zc;
          v59 = 0;
          v100 = v55;
          v90 = v56;
          LODWORD(v93) = v57;
          v95 = v58;
          v94 = v84;
          v60 = 0;
          do
          {
            v61 = fan_get_realtime_speed(v59);
            V_LOCK();
            V_INT((int)v115, v90, v60);
            v62 = v94;
            V_INT((int)v117, (char *)v93, v61);
            v86 = v92;
            v63 = v117[1];
            v64 = v117[2];
            v65 = v117[3];
            v85 = v91;
            *v62 = v117[0];
            v62[1] = v63;
            v62[2] = v64;
            v62[3] = v65;
            v62 += 4;
            v66 = v117[5];
            v67 = v117[6];
            v68 = v117[7];
            *v62 = v117[4];
            v62[1] = v66;
            v62[2] = v67;
            v62[3] = v68;
            logfmt_raw(v121, 0x1000u, 0, v116, v115[0], v115[1], v115[2], v115[3], v115[4], v115[5], v115[6], v116);
            V_UNLOCK();
            zlog(*v97, v95, 190, "update_fanspeed", 15, 72, 40, v121);
            V_LOCK();
            V_INT((int)v118, v90, v60);
            V_INT((int)v120, (char *)v93, v61 & ~(v61 >> 31));
            v69 = v94;
            v70 = (char *)*((_DWORD *)s + 1);
            s += 4;
            v71 = v120[1];
            v72 = v120[2];
            v73 = v120[3];
            v87 = v70;
            v86 = (const char *)v59;
            v85 = (char *)v100;
            *v94 = v120[0];
            v69[1] = v71;
            v69[2] = v72;
            v69[3] = v73;
            v74 = v120[5];
            v75 = v120[6];
            v76 = v120[7];
            *v62 = v120[4];
            v62[1] = v74;
            v62[2] = v75;
            v62[3] = v76;
            logfmt_raw(v121, 0x1000u, 0, v119, v118[0], v118[1], v118[2], v118[3], v118[4], v118[5], v118[6], v119);
            V_UNLOCK();
            zlog(*v98, v95, 190, "update_fanspeed", 15, 73, 100, v121);
            if ( *(unsigned __int8 *)++v88 )
              set_miner_6060info_status_fan_err(v59, 1);
            ++v59;
            ++v60;
          }
          while ( fan_num != v59 );
        }
      }
    }
  }
  return v99;
}
