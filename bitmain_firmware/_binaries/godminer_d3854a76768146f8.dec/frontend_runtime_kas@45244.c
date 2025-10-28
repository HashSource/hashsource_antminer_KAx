void *frontend_runtime_kas()
{
  __int64 v0; // r2
  void *v1; // r0

  dword_174E6C = (int)stratum_connect;
  dword_174E70 = (int)stratum_disconnect;
  dword_174E74 = (int)stratum_recv_line;
  dword_174E78 = (int)stratum_send_line;
  dword_174E7C = (int)stratum_login_base;
  dword_174E80 = (int)stratum_handle_method_base;
  dword_174E84 = (int)pre_stratum_handle_method_base;
  dword_174E88 = (int)stratum_handle_response_kas;
  dword_174E8C = (int)sub_4477C;
  dword_174E90 = (int)sub_43A80;
  dword_174E94 = (int)sub_4522C;
  dword_174E98 = (int)stratum_authorize_kas;
  dword_174E9C = (int)sub_43F00;
  LODWORD(v0) = diff_to_target_kas;
  HIDWORD(v0) = target_to_double_diff_kas;
  dword_174EA0 = (int)sub_43C0C;
  dword_174EA4 = (int)stratum_set_diff_or_target_base;
  *(_QWORD *)&dword_174EAC = v0;
  dword_174EA8 = (int)target_to_diff_kas;
  v1 = calloc(1u, 0x54u);
  return memcpy(v1, &dword_174E6C, 0x54u);
}
