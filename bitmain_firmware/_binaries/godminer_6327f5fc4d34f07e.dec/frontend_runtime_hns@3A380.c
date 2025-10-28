void *frontend_runtime_hns()
{
  __int64 v0; // r2
  void *v1; // r0

  dword_1086C4 = (int)stratum_connect;
  dword_1086C8 = (int)stratum_disconnect;
  dword_1086CC = (int)stratum_recv_line;
  dword_1086D0 = (int)stratum_send_line;
  dword_1086D4 = (int)stratum_login_base;
  dword_1086D8 = (int)stratum_handle_method_base;
  dword_1086DC = (int)stratum_handle_response_hns;
  dword_1086E0 = (int)sub_39364;
  dword_1086E4 = (int)sub_38D74;
  dword_1086E8 = (int)stratum_subscribe_base;
  dword_1086EC = (int)stratum_authorize_base;
  dword_1086F0 = (int)sub_39468;
  LODWORD(v0) = diff_to_target_hns;
  HIDWORD(v0) = target_to_double_diff_hns;
  dword_1086F4 = (int)sub_39074;
  dword_1086F8 = (int)stratum_set_diff_or_target_base;
  *(_QWORD *)&dword_108700 = v0;
  dword_1086FC = (int)target_to_diff_word_hns;
  v1 = calloc(1u, 0x50u);
  return memcpy(v1, &dword_1086C4, 0x50u);
}
