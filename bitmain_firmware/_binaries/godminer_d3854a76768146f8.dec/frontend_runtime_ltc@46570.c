void *frontend_runtime_ltc()
{
  __int64 v0; // r2
  void *v1; // r0

  dword_174F14 = (int)stratum_connect;
  dword_174F18 = (int)stratum_disconnect;
  dword_174F1C = (int)stratum_recv_line;
  dword_174F20 = (int)stratum_send_line;
  dword_174F24 = (int)stratum_login_base;
  dword_174F28 = (int)stratum_handle_method_base;
  dword_174F2C = (int)pre_stratum_handle_method_base;
  dword_174F30 = (int)stratum_handle_response_base;
  dword_174F34 = (int)sub_464A8;
  dword_174F38 = (int)sub_45D28;
  dword_174F3C = (int)stratum_subscribe_base;
  dword_174F40 = (int)stratum_authorize_base;
  dword_174F44 = (int)sub_45D60;
  LODWORD(v0) = diff_to_target_ltc;
  HIDWORD(v0) = target_to_double_diff_ltc;
  dword_174F48 = (int)sub_45A70;
  dword_174F4C = (int)stratum_set_diff_or_target_base;
  *(_QWORD *)&dword_174F54 = v0;
  dword_174F50 = (int)target_to_diff_ltc;
  v1 = calloc(1u, 0x54u);
  return memcpy(v1, &dword_174F14, 0x54u);
}
