int __fastcall miner_monitor_init(int a1)
{
  int (**v1)(void); // r0
  int v2; // r0
  char *v3; // r4
  char *v4; // r5
  _BYTE *v5; // r0
  int v6; // r0

  v1 = (int (**)(void))dev_ctrl(a1);
  v2 = (*v1)();
  if ( v2 > 0 )
  {
    v3 = (char *)&unk_108E78;
    v4 = (char *)&unk_108E78 + 216 * v2;
    do
    {
      v5 = calloc(0x100u, 1u);
      *((_DWORD *)v3 + 17) = v5;
      *v5 = 63;
      *((_DWORD *)v3 + 24) = calloc(0x10u, 4u);
      *((_DWORD *)v3 + 25) = calloc(0x10u, 4u);
      *((_DWORD *)v3 + 1) = calloc(0x10u, 4u);
      *(_DWORD *)v3 = calloc(0x10u, 4u);
      *((_DWORD *)v3 + 3) = calloc(0x10u, 4u);
      *((_DWORD *)v3 + 2) = calloc(0x10u, 4u);
      *((_QWORD *)v3 + 26) = 0;
      v6 = (int)v3;
      *((_DWORD *)v3 + 50) = 0;
      v3 += 216;
      init_temp_senor_info(v6);
    }
    while ( v3 != v4 );
  }
  dword_109C04 = (int)new_observable_subject();
  dword_109BFC = (int)new_observable_subject();
  dword_109C00 = (int)new_observable_subject();
  dword_109BF8 = (int)new_observable_subject();
  dword_109C08 = (int)new_task_timer();
  add_new_task(dword_109C08, (int)sub_437E0, 1000);
  add_new_task(dword_109C08, (int)sub_43718, (int)"evice");
  add_new_task(dword_109C08, (int)sub_43D30, 60000);
  dword_109C0C = (int)new_task_timer();
  add_new_task(dword_109C0C, (int)sub_43650, 5000);
  add_new_task(dword_109C0C, (int)sub_43588, 1000);
  return add_new_task(dword_109C0C, (int)task_check_miner_status, 1000);
}
