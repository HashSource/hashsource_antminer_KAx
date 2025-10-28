void *frontend_runtime_rvn()
{
  __int64 v0; // r2
  void *v1; // r0

  dword_174F68 = (int)stratum_connect;
  dword_174F6C = (int)stratum_disconnect;
  dword_174F70 = (int)stratum_recv_line;
  dword_174F74 = (int)stratum_send_line;
  dword_174F78 = (int)stratum_login_base;
  dword_174F7C = (int)stratum_handle_method_base;
  dword_174F80 = (int)pre_stratum_handle_method_base;
  dword_174F84 = (int)stratum_handle_response_rvn;
  dword_174F88 = (int)sub_46DCC;
  dword_174F8C = (int)sub_46CF4;
  dword_174F90 = (int)sub_47800;
  dword_174F94 = (int)stratum_authorize_rvn;
  dword_174F98 = (int)sub_46688;
  LODWORD(v0) = diff_to_target_rvn;
  HIDWORD(v0) = target_to_double_diff_rvn;
  dword_174F9C = (int)sub_46670;
  dword_174FA0 = (int)stratum_set_diff_or_target_base;
  *(_QWORD *)&dword_174FA8 = v0;
  dword_174FA4 = (int)target_to_diff_rvn;
  v1 = calloc(1u, 0x54u);
  return memcpy(v1, &dword_174F68, 0x54u);
}
