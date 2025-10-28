void miner_monitor_deinit()
{
  int v0; // r0
  int (**v1)(void); // r0
  int v2; // r0
  char *v3; // r4
  char *v4; // r5
  void *v5; // r0

  destroy_task_timer((_DWORD *)dword_109C0C);
  destroy_task_timer((_DWORD *)dword_109C08);
  destroy_observable_subject((void *)dword_109C04);
  destroy_observable_subject((void *)dword_109BFC);
  destroy_observable_subject((void *)dword_109C00);
  destroy_observable_subject((void *)dword_109BF8);
  v1 = (int (**)(void))dev_ctrl(v0);
  v2 = (*v1)();
  if ( v2 > 0 )
  {
    v3 = (char *)&unk_108E78;
    v4 = (char *)&unk_108E78 + 216 * v2;
    do
    {
      v5 = (void *)*((_DWORD *)v3 + 17);
      v3 += 216;
      free(v5);
      free(*((void **)v3 - 30));
      free(*((void **)v3 - 53));
      free(*((void **)v3 - 54));
      free(*((void **)v3 - 51));
      free(*((void **)v3 - 52));
    }
    while ( v3 != v4 );
  }
}
