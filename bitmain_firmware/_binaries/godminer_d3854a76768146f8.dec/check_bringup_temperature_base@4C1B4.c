int __fastcall check_bringup_temperature_base(int a1)
{
  int *all_created_runtime; // r9
  int v2; // r7
  int *v3; // r3
  int v4; // t1
  int v5; // r2
  int v6; // r3
  int v7; // r10
  char *v8; // r6
  char *v9; // r11
  int v10; // r4
  int v11; // t1
  char *v12; // r1
  int v13; // r0
  int v14; // r8
  _DWORD *v15; // r6
  int v16; // r4
  int v17; // r2
  int v18; // r7
  char *v19; // r1
  int v20; // r11
  int v21; // r2
  int v22; // r0
  int v23; // r1
  char *v25; // r9
  char *v26; // r2
  int v27; // r1
  char *v28; // r10
  int v29; // t1
  int v30; // r6
  _DWORD *v31; // r6
  int v32; // r4
  int v33; // r2
  int v34; // r3
  __int64 v35; // r0
  int v36; // r3
  bool v37; // cc
  int result; // r0
  __int64 v39; // r0
  int v40; // r0
  int v41; // r2
  int v42; // r1
  char *v43; // r3
  int v44; // r3
  int v45; // r1
  int v46; // r1
  const char *v47; // r0
  int v49; // [sp+28h] [bp-12DCh]
  char *ptr; // [sp+2Ch] [bp-12D8h]
  int v51; // [sp+30h] [bp-12D4h]
  char *v52; // [sp+34h] [bp-12D0h]
  int v53; // [sp+34h] [bp-12D0h]
  char *s; // [sp+38h] [bp-12CCh]
  char *sa; // [sp+38h] [bp-12CCh]
  int v56; // [sp+3Ch] [bp-12C8h]
  char *v57; // [sp+40h] [bp-12C4h]
  char *v58; // [sp+40h] [bp-12C4h]
  bool v59; // [sp+44h] [bp-12C0h]
  int v60; // [sp+44h] [bp-12C0h]
  int v61; // [sp+48h] [bp-12BCh]
  int v62; // [sp+48h] [bp-12BCh]
  int v63; // [sp+4Ch] [bp-12B8h]
  int v65; // [sp+54h] [bp-12B0h]
  int v66; // [sp+54h] [bp-12B0h]
  int v67; // [sp+5Ch] [bp-12A8h] BYREF
  _DWORD v68[7]; // [sp+60h] [bp-12A4h] BYREF
  int v69; // [sp+7Ch] [bp-1288h]
  _DWORD v70[7]; // [sp+80h] [bp-1284h] BYREF
  int v71; // [sp+9Ch] [bp-1268h]
  _DWORD v72[7]; // [sp+A0h] [bp-1264h] BYREF
  int v73; // [sp+BCh] [bp-1248h]
  _DWORD v74[7]; // [sp+C0h] [bp-1244h] BYREF
  int v75; // [sp+DCh] [bp-1228h]
  _DWORD v76[7]; // [sp+E0h] [bp-1224h] BYREF
  int v77; // [sp+FCh] [bp-1208h]
  char v78; // [sp+100h] [bp-1204h] BYREF
  char v79; // [sp+200h] [bp-1104h] BYREF
  char v80[4100]; // [sp+300h] [bp-1004h] BYREF

  v67 = 0;
  all_created_runtime = (int *)get_all_created_runtime(&v67);
  if ( v67 > 0 )
  {
    v3 = all_created_runtime;
    v2 = 256;
    do
    {
      v4 = *v3++;
      v5 = *(_DWORD *)(v4 + 372);
      if ( v2 >= v5 )
        v2 = v5;
    }
    while ( &all_created_runtime[v67] != v3 );
    if ( v2 == 256 )
      v2 = 2;
  }
  else
  {
    v2 = 2;
  }
  ptr = (char *)calloc(v67 * v2, 8u);
  if ( ptr )
  {
    v6 = v67;
    if ( v67 > 0 )
    {
      v8 = ptr;
      v7 = 8 * v2;
      v9 = (char *)(all_created_runtime - 1);
      v57 = (char *)(all_created_runtime - 1);
      v10 = 0;
      do
      {
        v11 = *((_DWORD *)v9 + 1);
        v9 += 4;
        ++v10;
        v8 += v7;
        (*(void (**)(void))(v11 + 212))();
        usleep((__useconds_t)&loc_7A120);
        v6 = v67;
      }
      while ( v67 > v10 );
    }
    else
    {
      v7 = 8 * v2;
      v57 = (char *)(all_created_runtime - 1);
    }
    v59 = v2 <= 5;
    if ( v2 <= 0 )
    {
      if ( v6 != 1 || v2 > 5 )
      {
        v51 = 0;
        v49 = 0;
        goto LABEL_29;
      }
      goto LABEL_57;
    }
    LOWORD(v12) = 588;
    LOWORD(v13) = 25824;
    v65 = v2;
    v14 = 0;
    v61 = 24 * v2;
    HIWORD(v12) = (unsigned int)": get test = %d" >> 16;
    HIWORD(v13) = (unsigned int)&unk_137FF8 >> 16;
    v49 = 0;
    v51 = 0;
    s = v12;
    v63 = v13;
    v52 = ptr;
    while ( v6 <= 0 )
    {
LABEL_24:
      v14 += 24;
      v52 += 8;
      if ( v61 == v14 )
      {
        v2 = v65;
        if ( v6 != 1 || !v59 )
        {
LABEL_29:
          if ( v6 > 0 )
          {
            v25 = ptr;
            LOWORD(v26) = 588;
            LOWORD(v27) = 25844;
            v66 = v7;
            v28 = v57;
            sa = 0;
            v53 = 0;
            HIWORD(v26) = (unsigned int)": get test = %d" >> 16;
            v62 = 0;
            HIWORD(v27) = (unsigned int)&unk_13800C >> 16;
            v58 = v26;
            v60 = v27;
            v56 = 255;
            while ( 1 )
            {
              v29 = *((_DWORD *)v28 + 1);
              v28 += 4;
              v30 = *(_DWORD *)(v29 + 364);
              if ( v2 > 0 )
                break;
LABEL_41:
              v37 = v67 <= ++v62;
              v25 += v66;
              if ( v37 )
              {
                free(ptr);
                v37 = v53 <= 0;
                if ( v53 > 0 )
                  v37 = (int)sa <= 0;
                result = v37;
                if ( !v37 )
                {
                  *(_DWORD *)(a1 + 92) = v56;
                  return result;
                }
LABEL_58:
                V_LOCK();
                LOWORD(v44) = 25868;
                HIWORD(v44) = (unsigned int)&unk_138024 >> 16;
                logfmt_raw(v80, 0x1000u, 0, v44);
                V_UNLOCK();
                LOWORD(v45) = 25584;
                HIWORD(v45) = (unsigned int)&unk_137E7C >> 16;
                zlog(g_zc, v45, 166, "check_bringup_temperature_base", 30, 267, 100, v80);
                while ( 1 )
                  ;
              }
            }
            v31 = (_DWORD *)(v30 + 20);
            v32 = 0;
            while ( 1 )
            {
LABEL_35:
              v33 = *(_DWORD *)&v25[8 * v32];
              if ( v33 == -64 )
              {
                V_LOCK();
                V_INT((int)v72, v58, *(int *)(*(_DWORD *)v28 + 232));
                logfmt_raw(v80, 0x1000u, 0, v73, v72[0], v72[1], v72[2], v72[3], v72[4], v72[5], v72[6], v73, v60, *v31);
                V_UNLOCK();
                v40 = g_zc;
                v41 = 240;
                goto LABEL_53;
              }
              v34 = *(v31 - 2);
              if ( v34 )
                break;
              HIDWORD(v35) = v49;
              LODWORD(v35) = &v78;
              if ( !check_value_valid_with_stdd(v35, v33) )
              {
                V_LOCK();
                V_INT((int)v74, v58, *(int *)(*(_DWORD *)v28 + 232));
                logfmt_raw(v80, 0x1000u, 0, v75, v74[0], v74[1], v74[2], v74[3], v74[4], v74[5], v74[6], v75, v60, *v31);
                V_UNLOCK();
                v40 = g_zc;
                v41 = 247;
                goto LABEL_53;
              }
              v31 += 6;
              v36 = *(_DWORD *)&v25[8 * v32++];
              ++sa;
              if ( v56 < v36 )
                v36 = v56;
              v56 = v36;
              if ( v2 == v32 )
                goto LABEL_41;
            }
            if ( v34 == 1 )
            {
              HIDWORD(v39) = v51;
              LODWORD(v39) = &v79;
              if ( check_value_valid_with_stdd(v39, v33) )
              {
                ++v53;
              }
              else
              {
                V_LOCK();
                V_INT((int)v76, v58, *(int *)(*(_DWORD *)v28 + 232));
                logfmt_raw(v80, 0x1000u, 0, v77, v76[0], v76[1], v76[2], v76[3], v76[4], v76[5], v76[6], v77, v60, *v31);
                V_UNLOCK();
                v40 = g_zc;
                v41 = 255;
LABEL_53:
                LOWORD(v42) = 25584;
                HIWORD(v42) = (unsigned int)&unk_137E7C >> 16;
                zlog(v40, v42, 166, "check_bringup_temperature_base", 30, v41, 100, v80);
              }
            }
            ++v32;
            v31 += 6;
            if ( v2 == v32 )
              goto LABEL_41;
            goto LABEL_35;
          }
        }
LABEL_57:
        free(ptr);
        goto LABEL_58;
      }
    }
    v15 = v52;
    v16 = 0;
    while ( 1 )
    {
      v17 = *v15;
      if ( *v15 != -64 )
      {
        v18 = *(_DWORD *)(*(_DWORD *)(all_created_runtime[v16] + 364) + v14 + 12);
        if ( !v18 )
        {
          v19 = &v80[4 * v49++];
          *((_DWORD *)v19 - 128) = v17;
          V_LOCK();
          V_INT((int)v68, s, *(int *)(all_created_runtime[v16] + 232));
          LOWORD(v20) = 25808;
          HIWORD(v20) = (unsigned int)&unk_137FE8 >> 16;
          logfmt_raw(v80, 0x1000u, 0, v69, v68[0], v68[1], v68[2], v68[3], v68[4], v68[5], v68[6], v69, v20, *v15);
          V_UNLOCK();
          v21 = 215;
          v22 = g_zc;
LABEL_23:
          LOWORD(v23) = 25584;
          HIWORD(v23) = (unsigned int)&unk_137E7C >> 16;
          zlog(v22, v23, 166, "check_bringup_temperature_base", 30, v21, 40, v80);
          goto LABEL_19;
        }
        if ( v18 == 1 )
        {
          v43 = &v80[4 * v51++];
          *((_DWORD *)v43 - 64) = v17;
          V_LOCK();
          V_INT((int)v70, s, *(int *)(all_created_runtime[v16] + 232));
          logfmt_raw(v80, 0x1000u, 0, v71, v70[0], v70[1], v70[2], v70[3], v70[4], v70[5], v70[6], v71, v63, *v15);
          V_UNLOCK();
          v21 = 218;
          v22 = g_zc;
          goto LABEL_23;
        }
      }
LABEL_19:
      v6 = v67;
      ++v16;
      v15 = (_DWORD *)((char *)v15 + v7);
      if ( v67 <= v16 )
        goto LABEL_24;
    }
  }
  LOWORD(v46) = 25792;
  LOWORD(v47) = 5860;
  HIWORD(v46) = (unsigned int)&unk_137FD8 >> 16;
  HIWORD(v47) = (unsigned int)"big negative integer" >> 16;
  printf(v47, v46);
  return 3;
}
