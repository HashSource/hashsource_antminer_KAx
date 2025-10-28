void *frontend_runtime_eth()
{
  __int64 v0; // r2
  void *v1; // r0

  dword_174D80 = (int)stratum_connect;
  dword_174D84 = (int)stratum_disconnect;
  dword_174D88 = (int)stratum_recv_line;
  dword_174D8C = (int)stratum_send_line;
  dword_174D90 = (int)stratum_login_base;
  dword_174D94 = (int)stratum_handle_method_eth;
  dword_174D98 = (int)pre_stratum_handle_method_eth;
  dword_174D9C = (int)stratum_handle_response_eth;
  dword_174DA0 = (int)sub_410C8;
  dword_174DA4 = (int)sub_40FF0;
  dword_174DA8 = (int)sub_401A4;
  dword_174DAC = (int)stratum_authorize_eth;
  dword_174DB0 = (int)sub_40B28;
  LODWORD(v0) = diff_to_target_eth;
  HIDWORD(v0) = target_to_double_diff_eth;
  dword_174DB4 = (int)sub_40940;
  dword_174DB8 = (int)sub_40760;
  *(_QWORD *)&dword_174DC0 = v0;
  dword_174DBC = (int)target_to_diff_eth;
  v1 = calloc(1u, 0x54u);
  return memcpy(v1, &dword_174D80, 0x54u);
}
