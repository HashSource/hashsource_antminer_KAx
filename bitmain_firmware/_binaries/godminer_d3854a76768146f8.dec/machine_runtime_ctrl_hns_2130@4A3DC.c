void *machine_runtime_ctrl_hns_2130()
{
  void *v0; // r0
  void *v1; // r4
  int v2; // r3
  int v4; // r1
  const char *v5; // r0
  _DWORD v6[30]; // [sp+0h] [bp-7Ch] BYREF

  memset(&v6[5], 0, 0x5Cu);
  v0 = calloc(1u, 0x78u);
  v1 = v0;
  if ( v0 )
  {
    v6[0] = sub_4A1B8;
    v6[1] = sub_4A120;
    v6[2] = get_working_voltage_base;
    v6[3] = start_voltage_monitor_base;
    v6[4] = start_temp_monitor_base;
    v6[6] = 304048;
    v6[7] = set_voltage_base;
    v6[10] = set_baud_base;
    v6[11] = set_frequency_with_voltage_base;
    v6[12] = start_mining_base;
    v6[13] = stop_mining_base;
    v6[14] = reset_mining_base;
    v6[15] = check_asic_num_base;
    v6[16] = check_bringup_temperature_base;
    LOWORD(v2) = 23176;
    HIWORD(v2) = (unsigned int)"7.c" >> 16;
    v6[21] = 3000000;
    v6[20] = "t";
    v6[25] = &loc_493E0;
    v6[29] = v2;
    v6[19] = 37;
    v6[26] = 1141882880;
    v6[28] = 1065353216;
    v6[22] = 20;
    v6[24] = 1700;
    memcpy(v0, v6, 0x78u);
  }
  else
  {
    LOWORD(v4) = 22536;
    LOWORD(v5) = 5860;
    HIWORD(v4) = (unsigned int)&unk_135804 >> 16;
    HIWORD(v5) = (unsigned int)" Version = 0x%04X %s" >> 16;
    printf(v5, v4);
  }
  return v1;
}
