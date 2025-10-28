void *runtime_ctrl_kas_2380()
{
  void *v0; // r0
  unsigned int v1; // r3
  unsigned int v2; // r12
  int v3; // lr
  void *v4; // r6
  _QWORD v6[123]; // [sp+0h] [bp-3DCh] BYREF

  memset(v6, 0, sizeof(v6));
  LODWORD(v6[35]) = 3363659;
  LODWORD(v6[37]) = 7561579;
  HIDWORD(v6[43]) = 500;
  LODWORD(v6[44]) = 500;
  v0 = calloc(1u, 0x3D8u);
  LOWORD(v1) = 31104;
  LOWORD(v2) = 30540;
  HIWORD(v1) = (unsigned int)&loc_B79B0 >> 16;
  HIWORD(v2) = (unsigned int)&loc_B777C >> 16;
  v6[0] = __PAIR64__(v1, v2);
  LOWORD(v2) = 31208;
  HIWORD(v2) = (unsigned int)&locret_B7A18 >> 16;
  v6[2] = __PAIR64__(dhash_mining_stop_base, v2);
  LOWORD(v2) = 31260;
  LODWORD(v6[8]) = work_2_packet_kas;
  HIWORD(v2) = (unsigned int)&loc_B7A4C >> 16;
  LODWORD(v6[9]) = check_nonce_kas;
  v6[3] = __PAIR64__(backend_exit_base, v2);
  LODWORD(v6[10]) = global_idx_free_kas;
  LOWORD(v2) = 29840;
  LODWORD(v6[15]) = 541872;
  HIWORD(v2) = (unsigned int)&loc_B74C0 >> 16;
  HIDWORD(v6[16]) = get_theory_hashrate_kas;
  v6[4] = __PAIR64__(async_push_work_base, v2);
  HIDWORD(v6[17]) = get_qualify_hashrate_kas;
  LOWORD(v2) = 30496;
  LODWORD(v6[18]) = get_qualify_nonce_num_kas;
  HIWORD(v2) = (unsigned int)&loc_B7750 >> 16;
  v6[5] = __PAIR64__(try_pop_ans_base, v2);
  LODWORD(v6[19]) = read_sensor_temp_local_kas;
  LODWORD(v6[7]) = softreset_all_chip_kas;
  LOWORD(v2) = 30964;
  HIDWORD(v6[19]) = read_sensor_temp_remote_kas;
  HIWORD(v2) = (unsigned int)&loc_878F8 >> 16;
  HIDWORD(v6[8]) = v2;
  LODWORD(v6[20]) = parameter_update_kas;
  HIDWORD(v6[9]) = global_idx_init_kas;
  HIDWORD(v6[20]) = overclock_update_kas;
  HIDWORD(v6[10]) = set_baud_kas;
  LODWORD(v6[21]) = get_pcba_test_level_kas;
  LODWORD(v6[16]) = get_chip_status_kas;
  HIDWORD(v6[21]) = get_packet_remain_len_kas;
  LODWORD(v6[17]) = get_sale_hashrate_kas;
  HIDWORD(v6[23]) = set_frequency_kas;
  HIDWORD(v6[18]) = set_sensor_extern_mode_kas;
  LODWORD(v6[24]) = set_frequency_by_temp_single_kas;
  HIDWORD(v6[24]) = set_frequency_single_kas;
  HIDWORD(v6[25]) = sub_85CBC;
  LODWORD(v6[27]) = top_init_kas;
  HIDWORD(v6[26]) = read_temperature_kas;
  LODWORD(v6[30]) = set_chipaddr_base;
  LODWORD(v6[31]) = set_chip_reg_base;
  LODWORD(v6[33]) = sync_get_status_base2;
  LODWORD(v6[28]) = dhash_start_kas;
  HIDWORD(v6[34]) = sync_get_core_reg_base3;
  v6[38] = 0x100002380LL;
  v6[39] = 0x2D0000005CLL;
  LOWORD(v1) = 31776;
  v6[47] = 0x500000005CLL;
  HIDWORD(v6[41]) = 2;
  HIWORD(v1) = (unsigned int)&loc_B7C50 >> 16;
  HIDWORD(v6[46]) = 2;
  HIDWORD(v6[30]) = v1;
  LOWORD(v1) = -30620;
  HIWORD(v1) = (unsigned int)&loc_B8894 >> 16;
  v6[48] = 0x1FFFFFFECLL;
  HIDWORD(v6[31]) = v1;
  LODWORD(v6[32]) = v1;
  LOWORD(v1) = -29472;
  LODWORD(v6[51]) = 36;
  HIDWORD(v6[100]) = 200;
  HIWORD(v1) = (unsigned int)&loc_B8D10 >> 16;
  HIDWORD(v6[33]) = v1;
  v6[101] = 0x800000022LL;
  v6[117] = 0x43C8000042480000LL;
  LOWORD(v3) = -28392;
  HIWORD(v3) = (unsigned int)&loc_B9148 >> 16;
  HIDWORD(v6[45]) = &sensor_kas_2380;
  v6[102] = 0xE00000036LL;
  HIDWORD(v6[32]) = v3;
  v4 = v0;
  HIDWORD(v6[58]) = 1;
  LODWORD(v6[121]) = 1;
  v6[120] = 142606;
  LODWORD(v6[118]) = 1420;
  LOBYTE(v6[119]) = 15;
  memcpy(v0, v6, 0x3D8u);
  return v4;
}
