void *frontend_runtime_dcr()
{
  __int64 v0; // r2
  void *v1; // r0

  dword_108634 = (int)stratum_connect;
  dword_108638 = (int)stratum_disconnect;
  dword_10863C = (int)stratum_recv_line;
  dword_108640 = (int)stratum_send_line;
  dword_108644 = (int)stratum_login_base;
  dword_108648 = (int)stratum_handle_method_base;
  dword_10864C = (int)stratum_handle_response_base;
  dword_108650 = (int)sub_38B84;
  dword_108654 = (int)sub_38B1C;
  dword_108658 = (int)stratum_subscribe_base;
  dword_10865C = (int)stratum_authorize_base;
  dword_108660 = (int)sub_3800C;
  LODWORD(v0) = diff_to_target_dcr;
  HIDWORD(v0) = target_to_double_diff_dcr;
  dword_108664 = (int)sub_37CD4;
  dword_108668 = (int)stratum_set_diff_or_target_base;
  *(_QWORD *)&dword_108670 = v0;
  dword_10866C = (int)target_to_diff_dcr;
  v1 = calloc(1u, 0x50u);
  return memcpy(v1, &dword_108634, 0x50u);
}
