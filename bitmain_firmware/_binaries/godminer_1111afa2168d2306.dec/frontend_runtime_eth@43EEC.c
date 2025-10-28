void *frontend_runtime_eth()
{
  __int64 v0; // r2
  void *v1; // r0

  dword_196558 = (int)stratum_connect;
  dword_19655C = (int)stratum_disconnect;
  dword_196560 = (int)stratum_recv_line;
  dword_196564 = (int)stratum_send_line;
  dword_196568 = (int)stratum_login_base;
  dword_19656C = (int)stratum_handle_method_eth;
  dword_196570 = (int)pre_stratum_handle_method_eth;
  dword_196574 = (int)stratum_handle_response_eth;
  dword_196578 = (int)sub_42EA0;
  dword_19657C = (int)sub_42DC8;
  dword_196580 = (int)sub_41F7C;
  dword_196584 = (int)stratum_authorize_eth;
  dword_196588 = (int)sub_42900;
  LODWORD(v0) = diff_to_target_eth;
  HIDWORD(v0) = target_to_double_diff_eth;
  dword_19658C = (int)sub_42718;
  dword_196590 = (int)sub_42538;
  *(_QWORD *)&dword_196598 = v0;
  dword_196594 = (int)target_to_diff_eth;
  v1 = calloc(1u, 0x54u);
  return memcpy(v1, &dword_196558, 0x54u);
}
