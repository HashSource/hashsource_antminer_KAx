void *frontend_runtime_dash()
{
  __int64 v0; // r2
  void *v1; // r0

  dword_1085E4 = (int)stratum_connect;
  dword_1085E8 = (int)stratum_disconnect;
  dword_1085EC = (int)stratum_recv_line;
  dword_1085F0 = (int)stratum_send_line;
  dword_1085F4 = (int)stratum_login_base;
  dword_1085F8 = (int)stratum_handle_method_base;
  dword_1085FC = (int)stratum_handle_response_base;
  dword_108600 = (int)sub_37B18;
  dword_108604 = (int)sub_36ED4;
  dword_108608 = (int)stratum_subscribe_base;
  dword_10860C = (int)stratum_authorize_base;
  dword_108610 = (int)sub_36F0C;
  LODWORD(v0) = diff_to_target_dash;
  HIDWORD(v0) = le256_target_to_double_diff_base_0;
  dword_108614 = (int)sub_36BE4;
  dword_108618 = (int)stratum_set_diff_or_target_base;
  *(_QWORD *)&dword_108620 = v0;
  dword_10861C = (int)le256_target_to_diff_base_0;
  v1 = calloc(1u, 0x50u);
  return memcpy(v1, &dword_1085E4, 0x50u);
}
