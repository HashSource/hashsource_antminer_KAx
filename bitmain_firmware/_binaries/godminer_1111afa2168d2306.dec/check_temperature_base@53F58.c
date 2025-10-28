int __fastcall check_temperature_base(int a1, int *a2, int *a3)
{
  int *all_created_runtime; // r9
  int v4; // r11
  int *v5; // r3
  int v6; // t1
  int v7; // r2
  int v8; // r3
  char *v9; // r5
  char *v10; // r8
  int v11; // r4
  int v12; // t1
  char *v13; // r1
  int v14; // r0
  int v15; // r8
  _DWORD *v16; // r5
  int v17; // r4
  int v18; // r2
  int v19; // r7
  char *v20; // r1
  int v21; // r11
  int v22; // r2
  int v23; // r0
  int v24; // r1
  char *v25; // r7
  char *v26; // r3
  int *v27; // r0
  int v28; // r2
  int v29; // r9
  int v30; // r8
  int v31; // r3
  _DWORD *v32; // r5
  int v33; // r4
  int v34; // r2
  int v35; // r3
  __int64 v36; // r0
  int v37; // r3
  bool v38; // cc
  int result; // r0
  __int64 v40; // r0
  int v41; // r2
  int v42; // r0
  int v43; // r1
  char *v44; // r3
  int v45; // r1
  const char *v46; // r0
  int v47; // [sp+28h] [bp-12DCh]
  char *v48; // [sp+2Ch] [bp-12D8h]
  int *v49; // [sp+2Ch] [bp-12D8h]
  char *s; // [sp+30h] [bp-12D4h]
  char *sa; // [sp+30h] [bp-12D4h]
  char *v52; // [sp+34h] [bp-12D0h]
  int v53; // [sp+38h] [bp-12CCh]
  int v54; // [sp+3Ch] [bp-12C8h]
  int v55; // [sp+3Ch] [bp-12C8h]
  int v56; // [sp+40h] [bp-12C4h]
  int v57; // [sp+44h] [bp-12C0h]
  int v58; // [sp+48h] [bp-12BCh]
  char *ptr; // [sp+4Ch] [bp-12B8h]
  int v62; // [sp+5Ch] [bp-12A8h] BYREF
  _DWORD v63[7]; // [sp+60h] [bp-12A4h] BYREF
  int v64; // [sp+7Ch] [bp-1288h]
  _DWORD v65[7]; // [sp+80h] [bp-1284h] BYREF
  int v66; // [sp+9Ch] [bp-1268h]
  _DWORD v67[7]; // [sp+A0h] [bp-1264h] BYREF
  int v68; // [sp+BCh] [bp-1248h]
  _DWORD v69[7]; // [sp+C0h] [bp-1244h] BYREF
  int v70; // [sp+DCh] [bp-1228h]
  _DWORD v71[7]; // [sp+E0h] [bp-1224h] BYREF
  int v72; // [sp+FCh] [bp-1208h]
  char v73; // [sp+100h] [bp-1204h] BYREF
  char v74; // [sp+200h] [bp-1104h] BYREF
  char v75[4100]; // [sp+300h] [bp-1004h] BYREF

  v62 = 0;
  all_created_runtime = (int *)get_all_created_runtime(&v62);
  if ( v62 > 0 )
  {
    v5 = all_created_runtime;
    v4 = 256;
    do
    {
      v6 = *v5++;
      v7 = *(_DWORD *)(v6 + 412);
      if ( v4 >= v7 )
        v4 = v7;
    }
    while ( &all_created_runtime[v62] != v5 );
    if ( v4 == 256 )
      v4 = 2;
  }
  else
  {
    v4 = 2;
  }
  ptr = (char *)calloc(v62 * v4, 8u);
  if ( ptr )
  {
    v8 = v62;
    if ( v62 <= 0 )
    {
      if ( v4 > 0 )
      {
        v57 = 8 * v4;
        goto LABEL_14;
      }
    }
    else
    {
      v9 = ptr;
      v10 = (char *)(all_created_runtime - 1);
      v11 = 0;
      v57 = 8 * v4;
      do
      {
        v12 = *((_DWORD *)v10 + 1);
        v10 += 4;
        ++v11;
        v9 += 8 * v4;
        (*(void (**)(void))(v12 + 216))();
        usleep((__useconds_t)&loc_7A120);
        v8 = v62;
      }
      while ( v62 > v11 );
      if ( v4 > 0 )
      {
LABEL_14:
        LOWORD(v13) = 27796;
        v58 = v4;
        LOWORD(v14) = -10968;
        v54 = 24 * v4;
        v15 = 0;
        HIWORD(v13) = (unsigned int)"%1.f" >> 16;
        HIWORD(v14) = (unsigned int)", sweep_level_freq: %d  sweep_matrix:\n%s" >> 16;
        v47 = 0;
        v53 = 0;
        s = v13;
        v56 = v14;
        v48 = ptr;
        while ( v8 <= 0 )
        {
LABEL_23:
          v15 += 24;
          v48 += 8;
          if ( v54 == v15 )
          {
            v4 = v58;
            goto LABEL_25;
          }
        }
        v16 = v48;
        v17 = 0;
        while ( 1 )
        {
          v18 = *v16;
          if ( *v16 != -64 )
          {
            v19 = *(_DWORD *)(*(_DWORD *)(all_created_runtime[v17] + 404) + v15 + 12);
            if ( !v19 )
            {
              v20 = &v75[4 * v47++];
              *((_DWORD *)v20 - 128) = v18;
              V_LOCK();
              V_INT((int)v63, s, *(int *)(all_created_runtime[v17] + 256));
              LOWORD(v21) = -10984;
              HIWORD(v21) = (unsigned int)"erage_freq: %.2f, sweep_level_freq: %d  sweep_matrix:\n%s" >> 16;
              logfmt_raw(v75, 0x1000u, 0, v64, v63[0], v63[1], v63[2], v63[3], v63[4], v63[5], v63[6], v64, v21, *v16);
              V_UNLOCK();
              v22 = 704;
              v23 = g_zc;
LABEL_22:
              LOWORD(v24) = -11348;
              HIWORD(v24) = (unsigned int)"ck it, and reboot system" >> 16;
              zlog(v23, v24, 166, "check_temperature_base", 22, v22, 20, v75);
              goto LABEL_18;
            }
            if ( v19 == 1 )
            {
              v44 = &v75[4 * v53++];
              *((_DWORD *)v44 - 64) = v18;
              V_LOCK();
              V_INT((int)v65, s, *(int *)(all_created_runtime[v17] + 256));
              logfmt_raw(v75, 0x1000u, 0, v66, v65[0], v65[1], v65[2], v65[3], v65[4], v65[5], v65[6], v66, v56, *v16);
              V_UNLOCK();
              v22 = 707;
              v23 = g_zc;
              goto LABEL_22;
            }
          }
LABEL_18:
          v8 = v62;
          ++v17;
          v16 = (_DWORD *)((char *)v16 + v57);
          if ( v62 <= v17 )
            goto LABEL_23;
        }
      }
      v47 = 0;
      v53 = 0;
LABEL_25:
      if ( v8 > 0 )
      {
        v25 = ptr;
        LOWORD(v26) = 27796;
        v27 = all_created_runtime - 1;
        HIWORD(v26) = (unsigned int)"%1.f" >> 16;
        LOWORD(v28) = -10948;
        v29 = 255;
        v30 = -64;
        v52 = v26;
        HIWORD(v28) = (unsigned int)"%d  sweep_matrix:\n%s" >> 16;
        v49 = v27;
        v55 = v28;
        sa = 0;
        while ( 1 )
        {
          v31 = v49[1];
          ++v49;
          if ( v4 > 0 )
            break;
LABEL_39:
          v38 = v62 <= (int)++sa;
          v25 += v57;
          if ( v38 )
            goto LABEL_41;
        }
        v32 = (_DWORD *)(*(_DWORD *)(v31 + 404) + 20);
        v33 = 0;
        while ( 1 )
        {
          v34 = *(_DWORD *)&v25[8 * v33];
          if ( v34 == -64 )
            break;
          v35 = *(v32 - 2);
          if ( !v35 )
          {
            HIDWORD(v36) = v47;
            LODWORD(v36) = &v73;
            if ( !check_value_valid_with_stdd(v36, v34) )
            {
              V_LOCK();
              V_INT((int)v69, v52, *(int *)(*v49 + 256));
              logfmt_raw(v75, 0x1000u, 0, v70, v69[0], v69[1], v69[2], v69[3], v69[4], v69[5], v69[6], v70, v55, *v32);
              V_UNLOCK();
              v41 = 725;
              v42 = g_zc;
              goto LABEL_45;
            }
            goto LABEL_34;
          }
          if ( v35 == 1 )
          {
            HIDWORD(v40) = v53;
            LODWORD(v40) = &v74;
            if ( !check_value_valid_with_stdd(v40, v34) )
            {
              V_LOCK();
              V_INT((int)v71, v52, *(int *)(*v49 + 256));
              logfmt_raw(v75, 0x1000u, 0, v72, v71[0], v71[1], v71[2], v71[3], v71[4], v71[5], v71[6], v72, v55, *v32);
              V_UNLOCK();
              v41 = 734;
              v42 = g_zc;
LABEL_45:
              LOWORD(v43) = -11348;
              HIWORD(v43) = (unsigned int)"ck it, and reboot system" >> 16;
              zlog(v42, v43, 166, "check_temperature_base", 22, v41, 100, v75);
            }
LABEL_34:
            v37 = *(_DWORD *)&v25[8 * v33++];
            v32 += 6;
            if ( v29 >= v37 )
              v29 = v37;
            if ( v30 < v37 )
              v30 = v37;
            if ( v4 == v33 )
              goto LABEL_39;
          }
          else
          {
LABEL_30:
            ++v33;
            v32 += 6;
            if ( v4 == v33 )
              goto LABEL_39;
          }
        }
        V_LOCK();
        V_INT((int)v67, v52, *(int *)(*v49 + 256));
        logfmt_raw(v75, 0x1000u, 0, v68, v67[0], v67[1], v67[2], v67[3], v67[4], v67[5], v67[6], v68, v55, *v32);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/machine_runtime/machine_runtime_base.c",
          166,
          "check_temperature_base",
          22,
          718,
          100,
          v75);
        goto LABEL_30;
      }
    }
    v29 = 255;
    v30 = -64;
LABEL_41:
    free(ptr);
    result = 0;
    *a2 = v29;
    *a3 = v30;
  }
  else
  {
    LOWORD(v45) = -11000;
    LOWORD(v46) = 32664;
    HIWORD(v45) = (unsigned int)"eq: %d, sweep_average_freq: %.2f, sweep_level_freq: %d  sweep_matrix:\n%s" >> 16;
    HIWORD(v46) = (unsigned int)" DOAROA LOG" >> 16;
    printf(v46, v45);
    return 3;
  }
  return result;
}
