int __fastcall sub_3AB38(int a1, int a2, char *a3)
{
  _DWORD *v3; // r3
  int v7; // r3
  const char *v8; // r12
  const char *v10; // [sp+4h] [bp-28h]
  char s[24]; // [sp+14h] [bp-18h] BYREF

  v3 = *(_DWORD **)(a1 + 1132);
  if ( v3 )
  {
    bin2hex((int)s, a1 + 1072, *v3 + 5);
    v7 = *(_DWORD *)(a2 + 1912);
    v8 = *(const char **)(a2 + 12);
    v10 = *(const char **)(a1 + 1124);
    *(_DWORD *)(a2 + 1912) = v7 + 1;
    snprintf(a3, 0x400u, "{\"id\":%d,\"method\":\"mining.submit\",\"params\":[\"%s\",\"%s\",\"%s\"]}", v7, v8, v10, s);
    return 0;
  }
  else
  {
    printf("invalid pointer(%s)!\n", "private");
    return 3;
  }
}
