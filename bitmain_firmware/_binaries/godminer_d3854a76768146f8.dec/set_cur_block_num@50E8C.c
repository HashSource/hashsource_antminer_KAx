int __fastcall set_cur_block_num(unsigned __int64 a1)
{
  int v1; // r3

  LOWORD(v1) = 20448;
  HIWORD(v1) = (unsigned int)aNainayuxnixoie >> 16;
  if ( *(_QWORD *)(v1 + 0x38) < a1 )
    *(_QWORD *)(v1 + 0x38) = a1;
  return a1;
}
