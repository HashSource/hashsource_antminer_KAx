_BYTE *__fastcall hs_hex_encode32(int a1)
{
  _BYTE *v1; // r2

  if ( a1 )
  {
    LOWORD(v1) = -19952;
    HIWORD(v1) = (unsigned int)&unk_186118 >> 16;
    sub_D4060(a1, 32, v1);
  }
  return &unk_18B210;
}
