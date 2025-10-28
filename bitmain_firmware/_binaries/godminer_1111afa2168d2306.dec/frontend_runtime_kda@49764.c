void *frontend_runtime_kda()
{
  __int64 v0; // r2
  void *v1; // r0

  dword_1966EC = (int)stratum_connect;
  dword_1966F0 = (int)stratum_disconnect;
  dword_1966F4 = (int)stratum_recv_line;
  dword_1966F8 = (int)stratum_send_line;
  dword_1966FC = (int)stratum_login_base;
  dword_196700 = (int)stratum_handle_method_base;
  dword_196704 = (int)pre_stratum_handle_method_base;
  dword_196708 = (int)stratum_handle_response_base;
  dword_19670C = (int)sub_496CC;
  dword_196710 = (int)sub_49130;
  dword_196714 = (int)stratum_subscribe_base;
  dword_196718 = (int)stratum_authorize_base;
  dword_19671C = (int)sub_493F8;
  LODWORD(v0) = diff_to_target_kda;
  HIDWORD(v0) = target_to_double_diff_kda;
  dword_196720 = (int)sub_49164;
  dword_196724 = (int)stratum_set_diff_or_target_base;
  *(_QWORD *)&dword_19672C = v0;
  dword_196728 = (int)target_to_diff_kda;
  v1 = calloc(1u, 0x54u);
  return memcpy(v1, &dword_1966EC, 0x54u);
}
