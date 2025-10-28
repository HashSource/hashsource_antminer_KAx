int __fastcall stratum_authorize_rvn(int a1, int *a2, void *a3)
{
  int v3; // r5
  double *v6; // r11
  int v8; // r7
  unsigned int *v9; // r3
  unsigned int v10; // r2
  unsigned int v11; // r2
  const char *v12; // r7
  const char *v13; // r8
  size_t v14; // r6
  size_t v15; // r0
  char *v16; // r6
  void *v17; // r0
  char *v18; // r1
  int v19; // r0
  char *v20; // r1
  int v21; // r0
  char *v22; // r1
  int v23; // r0
  _BOOL4 v24; // r8
  char *v25; // r1
  _DWORD *v26; // r0
  _DWORD *v27; // r0
  int v28; // r12
  int v29; // r1
  int v30; // r3
  int v31; // r1
  unsigned int *v32; // r3
  unsigned int v33; // r2
  unsigned int v34; // r2
  char *v36; // r1
  _DWORD *v37; // r0
  _DWORD *v38; // r0
  int v39; // r12
  int v40; // r1
  int v41; // r3
  int v42; // r1
  char *v43; // r0
  char *v44; // r12
  int *v45; // lr
  int v46; // r0
  int v47; // r1
  int v48; // r2
  int v49; // r3
  int v50; // lr
  int v51; // r3
  int v52; // r1
  int v53; // r3
  int v54; // r1
  int v55; // r3
  int v56; // r1
  _DWORD *v57; // [sp+2Ch] [bp-1138h]
  _DWORD *v58; // [sp+34h] [bp-1130h]
  int v59; // [sp+38h] [bp-112Ch]
  int v60; // [sp+40h] [bp-1124h] BYREF
  int v61; // [sp+44h] [bp-1120h]
  int v62; // [sp+48h] [bp-111Ch]
  int v63; // [sp+4Ch] [bp-1118h]
  int v64; // [sp+50h] [bp-1114h]
  int v65; // [sp+54h] [bp-1110h]
  int v66; // [sp+58h] [bp-110Ch]
  int v67; // [sp+5Ch] [bp-1108h]
  char v68[92]; // [sp+64h] [bp-1100h] BYREF
  _BYTE v69[160]; // [sp+C0h] [bp-10A4h] BYREF
  char v70[4100]; // [sp+160h] [bp-1004h] BYREF

  v3 = 0;
  v6 = 0;
  while ( 1 )
  {
    v12 = (const char *)a2[4];
    v13 = (const char *)a2[5];
    v14 = strlen(v12);
    v15 = strlen(v13);
    v16 = (char *)malloc(v14 + v15 + 128);
    sprintf(v16, "{\"id\":%d,\"method\":\"mining.authorize\",\"params\":[\"%s\",\"%s\"]}", 2, v12, v13);
    if ( !(*(int (__fastcall **)(int *, char *))(a1 + 12))(a2, v16) )
      goto LABEL_2;
    v8 = socket_full(a2[9], 30);
    if ( !v8 )
    {
      V_LOCK();
      LOWORD(v53) = 14928;
      HIWORD(v53) = (unsigned int)": [\"%s\"]}" >> 16;
      logfmt_raw(v70, 0x1000u, 0, v53);
      V_UNLOCK();
      LOWORD(v54) = 21076;
      HIWORD(v54) = (unsigned int)" to start asic" >> 16;
      zlog(g_zc, v54, 164, "stratum_authorize_rvn", 21, 191, 100, v70);
LABEL_2:
      free(v16);
      if ( !v6 )
        goto LABEL_10;
LABEL_3:
      if ( *((_DWORD *)v6 + 1) != -1 )
      {
        v8 = 0;
        goto LABEL_5;
      }
      goto LABEL_10;
    }
    v17 = (void *)(*(int (__fastcall **)(int *))(a1 + 8))(a2);
    a3 = v17;
    if ( !v17 )
      break;
    v6 = json_loads((int)v17, 0, v68);
    free(a3);
    if ( v6 )
    {
      LOWORD(v18) = 14556;
      HIWORD(v18) = (unsigned int)"ailed" >> 16;
      v19 = json_object_get(v6, v18);
      LOWORD(v20) = 4724;
      v58 = (_DWORD *)v19;
      HIWORD(v20) = (unsigned int)&unk_132B34 >> 16;
      v21 = json_object_get(v6, v20);
      LOWORD(v22) = 5212;
      v57 = (_DWORD *)v21;
      HIWORD(v22) = (unsigned int)"Null string passed to valid_hex" >> 16;
      v23 = json_object_get(v6, v22);
      v59 = json_integer_value(v23);
      v24 = v58 == 0;
      if ( v59 != 2 )
        v24 = 1;
      if ( v24 || *v58 == 6 )
      {
        V_LOCK();
        LOWORD(v36) = 5040;
        HIWORD(v36) = (unsigned int)"ot a valid byte!" >> 16;
        V_INT((int)&v60, v36, *a2);
        v37 = json_array_get(v57, 1u);
        v38 = json_string_value(v37);
        LOWORD(v39) = 18804;
        HIWORD(v39) = (unsigned int)off_1363A0 >> 16;
        logfmt_raw(v70, 0x1000u, 0, v67, v60, v61, v62, v63, v64, v65, v66, v67, v39, v38);
        V_UNLOCK();
        LOWORD(v40) = 21076;
        HIWORD(v40) = (unsigned int)" to start asic" >> 16;
        zlog(g_zc, v40, 164, "stratum_authorize_rvn", 21, 215, 80, v70);
        if ( !v3 )
        {
LABEL_36:
          v8 = 0;
          goto LABEL_37;
        }
        if ( !v57 )
        {
          v43 = (char *)malloc(0x11u);
          v44 = v43;
          if ( v43 )
          {
            LOWORD(v45) = 14956;
            v16 = v43;
            HIWORD(v45) = (unsigned int)"tranonce_zec" >> 16;
            v8 = 0;
            v46 = *v45;
            v47 = v45[1];
            v48 = v45[2];
            v49 = v45[3];
            v50 = v45[4];
            *(_DWORD *)v44 = v46;
            *((_DWORD *)v44 + 1) = v47;
            *((_DWORD *)v44 + 2) = v48;
            *((_DWORD *)v44 + 3) = v49;
            v44[16] = v50;
            V_LOCK();
            LOWORD(v51) = 14976;
            HIWORD(v51) = (unsigned int)"tum_notify_zec" >> 16;
            logfmt_raw(v70, 0x1000u, 0, v51, v16, v59);
            V_UNLOCK();
            LOWORD(v52) = 21076;
            HIWORD(v52) = (unsigned int)" to start asic" >> 16;
            zlog(g_zc, v52, 164, "stratum_authorize_rvn", 21, 222, 100, v70);
LABEL_37:
            free(v16);
            if ( *((_DWORD *)v6 + 1) != -1 )
            {
LABEL_5:
              v9 = (unsigned int *)v6 + 1;
              __dmb(0xBu);
              do
              {
                v10 = __ldrex(v9);
                v11 = v10 - 1;
              }
              while ( __strex(v11, v9) );
              if ( !v11 )
                json_delete(v6);
            }
            if ( v8 )
              return v8;
            goto LABEL_10;
          }
          V_LOCK();
          LOWORD(v55) = 14976;
          v8 = 0;
          HIWORD(v55) = (unsigned int)"tum_notify_zec" >> 16;
          logfmt_raw(v70, 0x1000u, 0, v55, 0, v59);
          V_UNLOCK();
          LOWORD(v56) = 21076;
          HIWORD(v56) = (unsigned int)" to start asic" >> 16;
          zlog(g_zc, v56, 164, "stratum_authorize_rvn", 21, 222, 100, v70);
          if ( *((_DWORD *)v6 + 1) == -1 )
            return v8;
LABEL_27:
          v32 = (unsigned int *)v6 + 1;
          __dmb(0xBu);
          do
          {
            v33 = __ldrex(v32);
            v34 = v33 - 1;
          }
          while ( __strex(v34, v32) );
          if ( !v34 )
            json_delete(v6);
          goto LABEL_10;
        }
      }
      else
      {
        if ( !v57 || *v57 == 7 )
          goto LABEL_37;
        V_LOCK();
        LOWORD(v25) = 5040;
        HIWORD(v25) = (unsigned int)"ot a valid byte!" >> 16;
        V_INT((int)&v60, v25, *a2);
        v26 = json_array_get(v57, 1u);
        v27 = json_string_value(v26);
        LOWORD(v28) = 18804;
        HIWORD(v28) = (unsigned int)off_1363A0 >> 16;
        logfmt_raw(v70, 0x1000u, 0, v67, v60, v61, v62, v63, v64, v65, v66, v67, v28, v27);
        V_UNLOCK();
        LOWORD(v29) = 21076;
        HIWORD(v29) = (unsigned int)" to start asic" >> 16;
        zlog(g_zc, v29, 164, "stratum_authorize_rvn", 21, 215, 80, v70);
        if ( !v3 )
          goto LABEL_36;
      }
      v16 = json_dumps(v57, 3);
      V_LOCK();
      LOWORD(v30) = 14976;
      HIWORD(v30) = (unsigned int)"tum_notify_zec" >> 16;
      logfmt_raw(v70, 0x1000u, 0, v30, v16, v59);
      V_UNLOCK();
      LOWORD(v31) = 21076;
      HIWORD(v31) = (unsigned int)" to start asic" >> 16;
      zlog(g_zc, v31, 164, "stratum_authorize_rvn", 21, 222, 100, v70);
      if ( v16 )
        goto LABEL_36;
      if ( *((_DWORD *)v6 + 1) != -1 )
        goto LABEL_27;
    }
    else
    {
      V_LOCK();
      LOWORD(v41) = 14512;
      HIWORD(v41) = (unsigned int)"/frontend_rvn/frontend_rvn.c" >> 16;
      logfmt_raw(v70, 0x1000u, 0, v41, *(_DWORD *)v68, v69);
      V_UNLOCK();
      LOWORD(v42) = 21076;
      HIWORD(v42) = (unsigned int)" to start asic" >> 16;
      zlog(g_zc, v42, 164, "stratum_authorize_rvn", 21, 205, 100, v70);
      free(v16);
    }
LABEL_10:
    if ( a3 )
      v3 ^= 1u;
    else
      v3 = 0;
    if ( !v3 )
      return 0;
  }
  free(v16);
  if ( v6 )
    goto LABEL_3;
  return 0;
}
