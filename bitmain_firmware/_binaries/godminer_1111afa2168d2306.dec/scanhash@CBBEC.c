int __fastcall scanhash(int a1)
{
  char *v2; // r5
  int v3; // r0
  int v4; // r3
  int v5; // r1
  int v6; // r5
  void *v7; // r10
  int v9; // r3
  unsigned int v10; // r0
  int v11; // r9
  int v12; // r11
  int v13; // r0
  unsigned int v14; // r0
  int v15; // r1
  _QWORD *v16; // r9
  __int64 v17; // kr08_8
  int v18; // r1
  bool v19; // cc
  int v20; // r1
  int v21; // r0
  int v22; // r3
  int v23; // r3
  int v24; // r1
  int v25; // r0
  int v26; // r3
  int v27; // r1
  int v28; // r3
  char v29; // [sp+0h] [bp-123Ch]
  char *ptr; // [sp+14h] [bp-1228h]
  int v31; // [sp+18h] [bp-1224h]
  unsigned int v32; // [sp+1Ch] [bp-1220h]
  int v33; // [sp+20h] [bp-121Ch]
  unsigned int v34; // [sp+24h] [bp-1218h]
  char v35; // [sp+2Fh] [bp-120Dh] BYREF
  int v36; // [sp+30h] [bp-120Ch] BYREF
  int v37; // [sp+34h] [bp-1208h] BYREF
  char s[512]; // [sp+38h] [bp-1204h] BYREF
  char v39[4100]; // [sp+238h] [bp-1004h] BYREF

  v2 = (char *)calloc(1u, 0x40u);
  snprintf(v2, 0x40u, "%.10s_%d", "scanhash", *(_DWORD *)(a1 + 248));
  V_LOCK();
  v32 = 1;
  v3 = syscall(224);
  LOWORD(v4) = -31096;
  HIWORD(v4) = (unsigned int)"tum_threads" >> 16;
  v31 = 0;
  logfmt_raw(v39, 0x1000u, 0, v4, v2, v3);
  V_UNLOCK();
  LOWORD(v5) = 32276;
  HIWORD(v5) = (unsigned int)"esp_packet_queue is false" >> 16;
  zlog(g_zc, v5, 150, "scanhash", 8, 199, 40, v39);
  prctl(15, v2);
  v6 = *(_DWORD *)(a1 + 872);
  v34 = 1;
  v7 = calloc(1u, *(_DWORD *)(a1 + 848));
  v33 = 0;
  ptr = (char *)calloc(1u, *(_DWORD *)(a1 + 852));
LABEL_2:
  memset(s, 0, sizeof(s));
  queue_dequeue(v6, s, 1u);
  if ( !*(_BYTE *)(a1 + 912) )
  {
    while ( 1 )
    {
      while ( (unsigned __int8)s[0] != 170 )
      {
        queue_dequeue(v6, s, 1u);
        check_and_print_uart_debug_log(a1 + 1040, 1, (unsigned __int8 *)s, *(_DWORD *)(a1 + 256), 0);
        if ( *(_BYTE *)(a1 + 912) )
          goto LABEL_5;
      }
      queue_dequeue(v6, &s[1], 1u);
      if ( *(_BYTE *)(a1 + 912) )
        break;
      if ( s[1] == 85 )
      {
        queue_dequeue(v6, &s[2], 1u);
        v10 = (*(int (__fastcall **)(_DWORD))(a1 + 176))((unsigned __int8)s[2]);
        v11 = v10 + 3;
        queue_dequeue(v6, &s[3], v10);
        check_and_print_uart_debug_log(a1 + 1040, v11, (unsigned __int8 *)s, *(_DWORD *)(a1 + 256), 0);
        v12 = *(unsigned __int8 *)(a1 + 912);
        if ( *(_BYTE *)(a1 + 912) )
          break;
        memset(v7, *(unsigned __int8 *)(a1 + 912), *(_DWORD *)(a1 + 848));
        v36 = v12;
        v37 = v12;
        v35 = v12;
        v13 = (*(int (__fastcall **)(int, char *, void *, char *, char *, int *, int *))(a1 + 72))(
                a1,
                s,
                v7,
                &v35,
                ptr,
                &v36,
                &v37);
        if ( v13 == 10 )
        {
          if ( !queue_enqueue(*(_DWORD *)(a1 + 884), s, v11) )
          {
            v19 = v34 > ++v33;
            if ( !v19 )
            {
              V_LOCK();
              logfmt_raw(
                v39,
                0x1000u,
                0,
                "chain[%d], queue_enqueue of __low_priority_resp_packet_queue is false",
                *(_DWORD *)(a1 + 256));
              V_UNLOCK();
              LOWORD(v24) = 32276;
              HIWORD(v24) = (unsigned int)"esp_packet_queue is false" >> 16;
              zlog(g_zc, v24, 150, "scanhash", 8, 320, 40, v39);
              V_LOCK();
              v25 = v33;
              LOWORD(v26) = 32760;
              HIWORD(v26) = (unsigned int)"se5" >> 16;
              v33 = 0;
              logfmt_raw(v39, 0x1000u, 0, v26, v25, v34);
              V_UNLOCK();
              LOWORD(v27) = 32276;
              HIWORD(v27) = (unsigned int)"esp_packet_queue is false" >> 16;
              zlog(g_zc, v27, 150, "scanhash", 8, 321, 40, v39);
              v28 = 10 * v34;
              if ( 10 * v34 >= 0x989680 )
                v28 = 10000000;
              v34 = v28;
            }
          }
        }
        else if ( v13 == 11 )
        {
          ++*(_QWORD *)(*(_DWORD *)(a1 + 472) + 40);
        }
        else if ( !v13 && *(_BYTE *)(a1 + 265) )
        {
          if ( !*(_BYTE *)(a1 + v37 + 552) && v35 && platform_check_repeat_nonce((int *)a1, v36, ptr) )
          {
            ++*(_QWORD *)(*(_DWORD *)(a1 + 472) + 48 * v36 + 32);
          }
          else
          {
            v14 = (*(int (__fastcall **)(int, void *))(a1 + 76))(a1, v7);
            if ( v14 <= 5 )
            {
              v15 = v36;
              v16 = (_QWORD *)(*(_DWORD *)(a1 + 472) + 8 * v14 + 48 * v36);
              ++*v16;
              if ( v14 <= 1 )
              {
                v17 = *(_QWORD *)(a1 + 464) + 1LL;
                ++*(_DWORD *)(*(_DWORD *)(a1 + 496) + 4 * v15);
                v18 = v37;
                *(_QWORD *)(a1 + 464) = v17;
                ++*(_QWORD *)(a1 + 8 * v18 + 584);
                if ( !v14
                  && !*(_BYTE *)(a1 + v18 + 552)
                  && !queue_enqueue(*(_DWORD *)(*(_DWORD *)(a1 + 888) + 880), (char *)v7, 1) )
                {
                  v19 = v32 > ++v31;
                  if ( !v19 )
                  {
                    V_LOCK();
                    logfmt_raw(
                      v39,
                      0x1000u,
                      0,
                      "chain[%d], queue_enqueue of __nonce_retrieve_queue is false",
                      *(_DWORD *)(a1 + 256));
                    V_UNLOCK();
                    LOWORD(v20) = 32276;
                    HIWORD(v20) = (unsigned int)"esp_packet_queue is false" >> 16;
                    zlog(g_zc, v20, 150, "scanhash", 8, 291, 40, v39);
                    V_LOCK();
                    v21 = v31;
                    LOWORD(v22) = 32628;
                    HIWORD(v22) = (unsigned int)"e_reg_base_3" >> 16;
                    v31 = 0;
                    logfmt_raw(v39, 0x1000u, 0, v22, v21, v32);
                    V_UNLOCK();
                    zlog(
                      g_zc,
                      "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build"
                      "/godminer-origin_godminer-new/backend/backend_base.c",
                      150,
                      "scanhash",
                      8,
                      292,
                      40,
                      v39);
                    v23 = 10 * v32;
                    if ( 10 * v32 >= 0x989680 )
                      v23 = 10000000;
                    v32 = v23;
                  }
                }
              }
            }
          }
        }
        goto LABEL_2;
      }
      v9 = *(_DWORD *)(a1 + 256);
      v29 = *(_BYTE *)(a1 + 912);
      s[0] = s[1];
      check_and_print_uart_debug_log(a1 + 1040, 2, (unsigned __int8 *)s, v9, v29);
    }
  }
LABEL_5:
  *(_BYTE *)(a1 + 912) = 0;
  free(v7);
  free(ptr);
  return 0;
}
