int __fastcall get_theory_hashrate_rvn(int a1, __int64 *a2)
{
  __int64 v2; // r2

  if ( *(_BYTE *)(a1 + 436) )
    v2 = *(_QWORD *)(a1 + 448);
  else
    v2 = 0x41DC03A180000000LL;
  *a2 = v2;
  return 0;
}
