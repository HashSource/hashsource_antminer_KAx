void *machine_runtime_ctrl_dcr_1727()
{
  void *v0; // r0
  void *v1; // r4
  _DWORD v3[22]; // [sp+0h] [bp-58h] BYREF

  memset(&v3[3], 0, 0x44u);
  v0 = calloc(1u, 0x58u);
  v1 = v0;
  if ( v0 )
  {
    v3[0] = sub_3B080;
    v3[1] = get_working_voltage_base;
    v3[2] = start_voltage_monitor_base;
    v3[4] = set_voltage_base;
    v3[5] = set_baud_base;
    v3[6] = set_frequency_with_voltage_base;
    v3[7] = start_mining_base;
    v3[8] = stop_mining_base;
    v3[9] = reset_mining_base;
    v3[10] = check_asic_num_base;
    v3[11] = check_bringup_temperature_base;
    v3[14] = "_nonce_num_hns";
    v3[15] = 3000000;
    v3[21] = "/config/sn";
    v3[20] = 1065353216;
    v3[18] = 1143930880;
    v3[13] = 35;
    v3[16] = 20;
    memcpy(v0, v3, 0x58u);
  }
  else
  {
    printf("invalid pointer(%s)!\n", "new_machine_runtime");
  }
  return v1;
}
