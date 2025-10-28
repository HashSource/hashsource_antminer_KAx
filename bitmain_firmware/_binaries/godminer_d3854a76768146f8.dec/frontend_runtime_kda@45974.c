void *frontend_runtime_kda()
{
  __int64 v0; // r2
  void *v1; // r0

  dword_174EC0 = (int)stratum_connect;
  dword_174EC4 = (int)stratum_disconnect;
  dword_174EC8 = (int)stratum_recv_line;
  dword_174ECC = (int)stratum_send_line;
  dword_174ED0 = (int)stratum_login_base;
  dword_174ED4 = (int)stratum_handle_method_base;
  dword_174ED8 = (int)pre_stratum_handle_method_base;
  dword_174EDC = (int)stratum_handle_response_base;
  dword_174EE0 = (int)sub_458DC;
  dword_174EE4 = (int)sub_45340;
  dword_174EE8 = (int)stratum_subscribe_base;
  dword_174EEC = (int)stratum_authorize_base;
  dword_174EF0 = (int)sub_45608;
  LODWORD(v0) = diff_to_target_kda;
  HIDWORD(v0) = target_to_double_diff_kda;
  dword_174EF4 = (int)sub_45374;
  dword_174EF8 = (int)stratum_set_diff_or_target_base;
  *(_QWORD *)&dword_174F00 = v0;
  dword_174EFC = (int)target_to_diff_kda;
  v1 = calloc(1u, 0x54u);
  return memcpy(v1, &dword_174EC0, 0x54u);
}
