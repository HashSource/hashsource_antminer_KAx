void *frontend_runtime_ks5()
{
  __int64 v0; // r2
  void *v1; // r0

  dword_196740 = (int)stratum_connect;
  dword_196744 = (int)stratum_disconnect;
  dword_196748 = (int)stratum_recv_line;
  dword_19674C = (int)stratum_send_line;
  dword_196750 = (int)stratum_login_base;
  dword_196754 = (int)stratum_handle_method_base;
  dword_196758 = (int)pre_stratum_handle_method_base;
  dword_19675C = (int)stratum_handle_response_ks5;
  dword_196760 = (int)sub_4A55C;
  dword_196764 = (int)sub_49860;
  dword_196768 = (int)sub_4B00C;
  dword_19676C = (int)stratum_authorize_ks5;
  dword_196770 = (int)sub_49CE0;
  LODWORD(v0) = diff_to_target_ks5;
  HIDWORD(v0) = target_to_double_diff_ks5;
  dword_196774 = (int)sub_499EC;
  dword_196778 = (int)stratum_set_diff_or_target_base;
  *(_QWORD *)&dword_196780 = v0;
  dword_19677C = (int)target_to_diff_ks5;
  v1 = calloc(1u, 0x54u);
  return memcpy(v1, &dword_196740, 0x54u);
}
