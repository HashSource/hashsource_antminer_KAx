void *frontend_runtime_kda()
{
  __int64 v0; // r2
  void *v1; // r0

  dword_108718 = (int)stratum_connect;
  dword_10871C = (int)stratum_disconnect;
  dword_108720 = (int)stratum_recv_line;
  dword_108724 = (int)stratum_send_line;
  dword_108728 = (int)stratum_login_base;
  dword_10872C = (int)stratum_handle_method_base;
  dword_108730 = (int)stratum_handle_response_base;
  dword_108734 = (int)sub_3AB38;
  dword_108738 = (int)sub_3A5A4;
  dword_10873C = (int)stratum_subscribe_base;
  dword_108740 = (int)stratum_authorize_base;
  dword_108744 = (int)sub_3A868;
  LODWORD(v0) = diff_to_target_kda;
  HIDWORD(v0) = target_to_double_diff_kda;
  dword_108748 = (int)sub_3A5D8;
  dword_10874C = (int)stratum_set_diff_or_target_base;
  *(_QWORD *)&dword_108754 = v0;
  dword_108750 = (int)target_to_diff_kda;
  v1 = calloc(1u, 0x50u);
  return memcpy(v1, &dword_108718, 0x50u);
}
