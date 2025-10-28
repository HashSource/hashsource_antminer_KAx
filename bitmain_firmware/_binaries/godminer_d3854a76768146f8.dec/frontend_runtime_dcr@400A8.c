void *frontend_runtime_dcr()
{
  __int64 v0; // r2
  void *v1; // r0

  dword_174D2C = (int)stratum_connect;
  dword_174D30 = (int)stratum_disconnect;
  dword_174D34 = (int)stratum_recv_line;
  dword_174D38 = (int)stratum_send_line;
  dword_174D3C = (int)stratum_login_base;
  dword_174D40 = (int)stratum_handle_method_base;
  dword_174D44 = (int)pre_stratum_handle_method_base;
  dword_174D48 = (int)stratum_handle_response_base;
  dword_174D4C = (int)sub_3FFA8;
  dword_174D50 = (int)sub_3FF40;
  dword_174D54 = (int)stratum_subscribe_base;
  dword_174D58 = (int)stratum_authorize_base;
  dword_174D5C = (int)sub_3F454;
  LODWORD(v0) = diff_to_target_dcr;
  HIDWORD(v0) = target_to_double_diff_dcr;
  dword_174D60 = (int)sub_3F118;
  dword_174D64 = (int)stratum_set_diff_or_target_base;
  *(_QWORD *)&dword_174D6C = v0;
  dword_174D68 = (int)target_to_diff_dcr;
  v1 = calloc(1u, 0x54u);
  return memcpy(v1, &dword_174D2C, 0x54u);
}
