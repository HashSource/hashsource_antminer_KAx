int __fastcall sub_2393C(_DWORD *a1, const char **a2)
{
  int v2; // r5
  char *all_created_runtime; // r11
  int v4; // r0
  int v5; // r10
  double v6; // d0
  int v7; // r4
  double v8; // d12
  unsigned int v9; // r10
  double v10; // d11
  double v11; // d9
  _DWORD *v12; // r0
  double *v13; // r0
  double *v14; // r0
  double *v15; // r0
  double *v16; // r0
  char *v17; // r0
  _DWORD *v18; // r0
  _DWORD *v19; // r0
  _DWORD *v20; // r5
  int *v21; // r11
  int *v22; // r4
  int v23; // t1
  _DWORD *v24; // r0
  __int64 v25; // r0
  __int64 v26; // r6
  double *v27; // r0
  char *v28; // r6
  _DWORD *v29; // r8
  int v30; // r0
  _DWORD *v31; // r0
  _DWORD *v32; // r0
  double v33; // d8
  double v34; // d6
  double *v35; // r0
  double *v36; // r0
  _DWORD *v37; // r0
  int v38; // r1
  _DWORD *v39; // r0
  __int64 v40; // r4
  _DWORD *v41; // r7
  int v42; // r10
  _DWORD *v43; // r0
  int v44; // r10
  _DWORD *v45; // r0
  _DWORD *v46; // r7
  int v47; // r10
  int v48; // r11
  int v49; // t1
  _DWORD *v50; // r0
  int *v51; // r11
  int *v52; // r10
  int v53; // t1
  _DWORD *v54; // r0
  _DWORD *v55; // r7
  int v56; // r10
  int v57; // r11
  int v58; // t1
  _DWORD *v59; // r0
  int v60; // r10
  int v61; // t1
  _DWORD *v62; // r0
  _DWORD *v63; // r0
  _DWORD *v64; // r2
  char *eeprom_chip_sn; // r0
  char *v66; // r0
  int v69; // r1
  double v70; // d8
  double v71; // r0
  _DWORD *v72; // r2
  char *v73; // r7
  size_t v74; // r5
  size_t v75; // r2
  bool v76; // cf
  int v77; // r3
  int v78; // t1
  bool v79; // zf
  char *v80; // r0
  char *v81; // r8
  char *v82; // r0
  char *v83; // r11
  unsigned int v84; // r7
  int v85; // r10
  char *v86; // r4
  int v87; // t1
  int v88; // r3
  unsigned int v90; // [sp+14h] [bp-1078h]
  int v91; // [sp+14h] [bp-1078h]
  char *v92; // [sp+18h] [bp-1074h]
  _DWORD *v93; // [sp+20h] [bp-106Ch]
  _DWORD *v94; // [sp+2Ch] [bp-1060h]
  char *v96; // [sp+34h] [bp-1058h]
  char *ptr; // [sp+38h] [bp-1054h]
  _DWORD *v98; // [sp+3Ch] [bp-1050h]
  int v99; // [sp+44h] [bp-1048h] BYREF
  double v100; // [sp+48h] [bp-1044h] BYREF
  _DWORD v101[2]; // [sp+50h] [bp-103Ch] BYREF
  _DWORD v102[2]; // [sp+58h] [bp-1034h] BYREF
  int *v103; // [sp+60h] [bp-102Ch]
  float v104; // [sp+64h] [bp-1028h]
  float v105; // [sp+68h] [bp-1024h]
  float v106; // [sp+6Ch] [bp-1020h]
  double v107; // [sp+70h] [bp-101Ch]
  unsigned int v108; // [sp+80h] [bp-100Ch]
  unsigned int v109; // [sp+84h] [bp-1008h]
  char v110[4100]; // [sp+88h] [bp-1004h] BYREF

  v101[1] = 0;
  v2 = a1 == 0;
  v101[0] = 0;
  v99 = 0;
  all_created_runtime = (char *)get_all_created_runtime(&v99);
  v4 = frontend_runtime_instance();
  if ( !a2 )
    v2 = 1;
  if ( v2 )
  {
    V_LOCK();
    logfmt_raw(v110, 0x1000u, 0, "%s: input bad api param\n", "get_stats");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/api_new.c",
      137,
      "get_stats",
      9,
      600,
      100,
      v110);
    return -2147483646;
  }
  else
  {
    v5 = v4;
    sub_1F418(a1, a2);
    sub_1F534(a1);
    v98 = json_array();
    read_system_status_from_monitor((int)v102);
    v6 = v107;
    v7 = v102[1];
    format_hashrate_double(*(_DWORD *)(*(_DWORD *)(v5 + 68) + 12), &v100, (char *)v101);
    v8 = v104 * v6;
    v90 = v108;
    v9 = v109;
    v10 = v105 * v6;
    v11 = v106 * v6;
    if ( v99 > 0 )
    {
      v96 = (char *)malloc(216 * v99);
      v81 = v96;
      v82 = (char *)malloc(4 * v99);
      ptr = v82;
      if ( v99 > 0 )
      {
        v83 = all_created_runtime - 4;
        v84 = v9;
        v85 = v7;
        v86 = v82;
        do
        {
          v87 = *((_DWORD *)v83 + 1);
          v83 += 4;
          read_status_from_monitor(v81, v87);
          v88 = v99;
          v81 += 216;
          *(_DWORD *)&v86[4 * v2++] = *(_DWORD *)(*(_DWORD *)v83 + 200);
        }
        while ( v88 > v2 );
        v7 = v85;
        v9 = v84;
      }
    }
    else
    {
      ptr = 0;
      v96 = 0;
    }
    v94 = json_object();
    get_miner_elapsed_time();
    v12 = json_integer((__int64)v6);
    json_object_set_new(v94, "elapsed", v12);
    sub_DD47C((__int64)(v8 * 100.0));
    v13 = json_real();
    json_object_set_new(v94, "rate_5s", v13);
    sub_DD47C((__int64)(v10 * 100.0));
    v14 = json_real();
    json_object_set_new(v94, "rate_30m", v14);
    sub_DD47C((__int64)(v11 * 100.0));
    v15 = json_real();
    json_object_set_new(v94, "rate_avg", v15);
    sub_DD47C((__int64)(v100 * 100.0));
    v16 = json_real();
    json_object_set_new(v94, "rate_ideal", v16);
    v17 = BUFX_strdup((char *)v101);
    json_object_set_new(v94, "rate_unit", v17);
    v18 = json_integer(v99);
    json_object_set_new(v94, "chain_num", v18);
    v19 = json_integer(v7);
    json_object_set_new(v94, "fan_num", v19);
    v20 = json_array();
    if ( v7 > 0 )
    {
      v21 = v103;
      v22 = &v103[v7];
      do
      {
        v23 = *v21++;
        v24 = json_integer(v23);
        json_array_append_new(v20, v24);
      }
      while ( v22 != v21 );
    }
    json_object_set_new(v94, "fan", v20);
    LODWORD(v25) = v90;
    v26 = __PAIR64__(v9, v90) + total_diff1;
    if ( __PAIR64__(v9, v90) + total_diff1 )
    {
      HIDWORD(v25) = v9;
      LODWORD(v70) = sub_DD46C(v25);
      HIDWORD(v70) = v69;
      LODWORD(v71) = sub_DD46C(v26);
      sub_DD47C((__int64)(v70 / v71 * 100.0 * 10000.0));
    }
    v27 = json_real();
    json_object_set_new(v94, "hwp_total", v27);
    v93 = json_array();
    if ( v99 > 0 )
    {
      v28 = v96;
      v92 = ptr - 4;
      v91 = 0;
      while ( 1 )
      {
        v29 = json_object();
        v30 = *((_DWORD *)v92 + 1);
        v92 += 4;
        v31 = json_integer(v30);
        json_object_set_new(v29, "index", v31);
        v32 = json_integer(*((int *)v28 + 18));
        json_object_set_new(v29, "freq_avg", v32);
        v33 = *((float *)v28 + 9);
        v34 = v6 * *((double *)v28 + 6) * 100.0;
        v100 = v6 * *((double *)v28 + 6);
        sub_DD47C((__int64)v34);
        v35 = json_real();
        json_object_set_new(v29, "rate_ideal", v35);
        sub_DD47C((__int64)(v33 * v6 * 100.0));
        v36 = json_real();
        json_object_set_new(v29, "rate_real", v36);
        v37 = json_integer(*((int *)v28 + 16));
        json_object_set_new(v29, "asic_num", v37);
        v38 = *((_DWORD *)v28 + 17);
        if ( v38 )
        {
          v73 = v110;
          v74 = 0;
          v75 = stpcpy(v110, v38) - (_DWORD)v110;
          while ( 1 )
          {
            v76 = v74++ >= v75;
            if ( v76 )
              break;
            while ( 1 )
            {
              v78 = (unsigned __int8)*v73++;
              v77 = v78;
              v79 = v78 == 111;
              if ( v78 != 111 )
                v79 = v77 == 32;
              if ( v79 )
                break;
              *(v73 - 1) = 120;
              v75 = strlen(v110);
              v76 = v74++ >= v75;
              if ( v76 )
                goto LABEL_52;
            }
          }
LABEL_52:
          v80 = BUFX_strdup(v110);
          json_object_set_new(v29, "asic", v80);
        }
        v39 = json_array();
        v40 = *((_QWORD *)v28 + 3);
        v41 = v39;
        if ( (int)v40 <= 0 )
          break;
        v42 = 0;
        do
        {
          v43 = json_integer(0);
          ++v42;
          json_array_append_new(v41, v43);
        }
        while ( v42 != (_DWORD)v40 );
        if ( v40 > 0 )
          goto LABEL_18;
        json_object_set_new(v29, "temp_pic", v41);
        v46 = json_array();
LABEL_21:
        v47 = 0;
        v48 = *(_DWORD *)v28 - 4;
        do
        {
          v49 = *(_DWORD *)(v48 + 4);
          v48 += 4;
          ++v47;
          v50 = json_integer(v49);
          json_array_append_new(v46, v50);
        }
        while ( v47 < (int)v40 );
        if ( v40 > 0 )
          goto LABEL_24;
LABEL_57:
        json_object_set_new(v29, "temp_pcb", v46);
        v55 = json_array();
        if ( (int)v40 > 0 )
          goto LABEL_27;
LABEL_32:
        json_object_set_new(v29, "temp_chip", v55);
        v63 = json_integer(*((_QWORD *)v28 + 10));
        json_object_set_new(v29, "hw", v63);
        if ( is_eeprom_loaded() )
        {
          if ( is_eeprom_loaded() )
            v64 = json_true();
          else
            v64 = json_false();
          json_object_set_new(v29, "eeprom_loaded", v64);
          if ( api_get_eeprom_chip_sn(v91) )
          {
            eeprom_chip_sn = (char *)api_get_eeprom_chip_sn(v91);
            v66 = BUFX_strdup(eeprom_chip_sn);
            json_object_set_new(v29, "sn", v66);
          }
        }
        else
        {
          if ( is_eeprom_loaded() )
            v72 = json_true();
          else
            v72 = json_false();
          json_object_set_new(v29, "eeprom_loaded", v72);
        }
        json_array_append_new(v93, v29);
        v28 += 216;
        if ( v99 <= ++v91 )
          goto LABEL_39;
      }
      if ( SHIDWORD(v40) <= 0 )
      {
        json_object_set_new(v29, "temp_pic", v39);
        v46 = json_array();
        goto LABEL_57;
      }
LABEL_18:
      v44 = 0;
      do
      {
        v45 = json_integer(0);
        ++v44;
        json_array_append_new(v41, v45);
      }
      while ( v44 < SHIDWORD(v40) );
      json_object_set_new(v29, "temp_pic", v41);
      v46 = json_array();
      if ( (int)v40 <= 0 )
      {
LABEL_24:
        v51 = (int *)*((_DWORD *)v28 + 2);
        v52 = &v51[HIDWORD(v40)];
        do
        {
          v53 = *v51++;
          v54 = json_integer(v53);
          json_array_append_new(v46, v54);
        }
        while ( v52 != v51 );
        json_object_set_new(v29, "temp_pcb", v46);
        v55 = json_array();
        if ( (int)v40 > 0 )
        {
LABEL_27:
          v56 = 0;
          v57 = *((_DWORD *)v28 + 1) - 4;
          do
          {
            v58 = *(_DWORD *)(v57 + 4);
            v57 += 4;
            ++v56;
            v59 = json_integer(v58);
            json_array_append_new(v55, v59);
          }
          while ( v56 < (int)v40 );
          if ( v40 <= 0 )
            goto LABEL_32;
        }
        LODWORD(v40) = 0;
        v60 = *((_DWORD *)v28 + 3) - 4;
        do
        {
          v61 = *(_DWORD *)(v60 + 4);
          v60 += 4;
          LODWORD(v40) = v40 + 1;
          v62 = json_integer(v61);
          json_array_append_new(v55, v62);
        }
        while ( (int)v40 < SHIDWORD(v40) );
        goto LABEL_32;
      }
      goto LABEL_21;
    }
LABEL_39:
    json_object_set_new(v94, "chain", v93);
    json_array_append_new(v98, v94);
    json_object_set_new(a1, "STATS", v98);
    if ( v99 > 0 )
    {
      free(ptr);
      free(v96);
    }
    return 0;
  }
}
