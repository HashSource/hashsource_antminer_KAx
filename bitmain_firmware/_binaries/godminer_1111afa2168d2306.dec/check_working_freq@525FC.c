void __fastcall __noreturn check_working_freq(int a1)
{
  float v1; // s0
  int v2; // r4
  int v3; // r5
  int v4; // r6
  int temp; // r0
  float v6; // s18
  _DWORD *v7; // r6
  int i; // r8
  int v9; // r3
  int v10; // t1
  int v11; // r4
  int v12; // r5
  int v13; // r3
  float v14; // s16
  float v15; // s17
  float v16; // s16
  char *v17; // r1
  int v18; // [sp+24h] [bp-4Ch]
  int v19; // [sp+34h] [bp-3Ch]
  int v20; // [sp+38h] [bp-38h]
  char *v22; // [sp+40h] [bp-30h]
  int v23; // [sp+44h] [bp-2Ch]
  int v24; // [sp+4Ch] [bp-24h] BYREF
  _DWORD v25[7]; // [sp+50h] [bp-20h] BYREF
  int v26; // [sp+6Ch] [bp-4h]
  char v27[4100]; // [sp+70h] [bp+0h] BYREF

  LOWORD(v2) = -11104;
  v24 = 0;
  LOWORD(v3) = -11180;
  LOWORD(v4) = -11348;
  HIWORD(v2) = (unsigned int)"ate failed" >> 16;
  HIWORD(v3) = (unsigned int)"ate_thread create failed" >> 16;
  HIWORD(v4) = (unsigned int)"ck it, and reboot system" >> 16;
  v23 = v2;
  v22 = (char *)get_all_created_runtime(&v24) - 4;
  v20 = v3;
  v19 = v4;
  while ( 1 )
  {
    temp = get_temp(1);
    if ( temp != -64 )
    {
      (*(void (__fastcall **)(int, int))(a1 + 36))(a1, temp);
      v6 = v1;
      if ( v24 > 0 )
      {
        v7 = v22;
        for ( i = 0; i < v24; ++i )
        {
          v10 = v7[1];
          ++v7;
          v9 = v10;
          if ( *(int *)(v10 + 352) > 0 )
          {
            v11 = 0;
            v12 = 0;
            do
            {
              pthread_mutex_lock((pthread_mutex_t *)(*(_DWORD *)(v9 + 544) + v11 + 20));
              v13 = *(_DWORD *)(*v7 + 544) + v11;
              v14 = *(float *)(v13 + 4);
              v15 = *(float *)(v13 + 12);
              *(float *)(v13 + 8) = v6;
              pthread_mutex_unlock((pthread_mutex_t *)(v13 + 20));
              v16 = v6 + v14;
              if ( v16 != v15 )
              {
                if ( !v12 )
                {
                  V_LOCK();
                  logfmt_raw(
                    v27,
                    0x1000u,
                    0,
                    v20,
                    *(float *)(*(_DWORD *)(*v7 + 544) + v11 + 4),
                    *(float *)(*(_DWORD *)(*v7 + 544) + v11 + 8),
                    *(float *)(*(_DWORD *)(*v7 + 544) + v11 + 12));
                  V_UNLOCK();
                  zlog(g_zc, v19, 166, "check_working_freq", 18, 400, 20, v27);
                  if ( v16 < v15 && v6 < -1.0 )
                  {
                    V_LOCK();
                    LOWORD(v17) = 27796;
                    HIWORD(v17) = (unsigned int)"%1.f" >> 16;
                    V_INT((int)v25, v17, *(int *)(*v7 + 256));
                    logfmt_raw(
                      v27,
                      0x1000u,
                      0,
                      v26,
                      v25[0],
                      v25[1],
                      v25[2],
                      v25[3],
                      v25[4],
                      v25[5],
                      v25[6],
                      v26,
                      v23,
                      v18,
                      v6);
                    V_UNLOCK();
                    zlog(g_zc, v19, 166, "check_working_freq", 18, 403, 80, v27);
                  }
                }
                v1 = v16;
                (*(void (**)(void))(*v7 + 196))();
              }
              v9 = *v7;
              ++v12;
              v11 += 44;
            }
            while ( *(_DWORD *)(*v7 + 352) > v12 );
          }
        }
      }
    }
    sleep(1u);
  }
}
