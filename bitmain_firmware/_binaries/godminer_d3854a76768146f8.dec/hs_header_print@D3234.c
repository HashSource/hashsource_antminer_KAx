int __fastcall hs_header_print(_DWORD *a1, const char *a2)
{
  const char *v4; // r0
  const char *v5; // r0
  const char *v6; // r0
  const char *v7; // r0
  const char *v8; // r0
  const char *v9; // r0
  const char *v10; // r0
  const char *v11; // r0
  const char *v12; // r0
  const char *v13; // r0
  const char *v14; // r0
  const char *v15; // r0
  _BYTE v17[44]; // [sp+0h] [bp-1FCh] BYREF
  _BYTE v18[52]; // [sp+2Ch] [bp-1D0h] BYREF
  _BYTE v19[68]; // [sp+60h] [bp-19Ch] BYREF
  _BYTE v20[68]; // [sp+A4h] [bp-158h] BYREF
  _BYTE v21[68]; // [sp+E8h] [bp-114h] BYREF
  _BYTE v22[68]; // [sp+12Ch] [bp-D0h] BYREF
  _BYTE v23[68]; // [sp+170h] [bp-8Ch] BYREF
  _BYTE v24[72]; // [sp+1B4h] [bp-48h] BYREF

  hs_hex_encode((int)(a1 + 4), 20, v17);
  hs_hex_encode((int)(a1 + 9), 32, v19);
  hs_hex_encode((int)(a1 + 17), 32, v20);
  hs_hex_encode((int)(a1 + 25), 32, v21);
  hs_hex_encode((int)(a1 + 33), 24, v18);
  hs_hex_encode((int)(a1 + 39), 32, v22);
  hs_hex_encode((int)(a1 + 47), 32, v23);
  hs_hex_encode((int)(a1 + 55), 32, v24);
  LOWORD(v4) = -31352;
  HIWORD(v4) = (unsigned int)"x%02x, read_back_data[1] = 0x%02x, read_back_data[2] = 0x%02x, read_back_data[3] = 0x%02x" >> 16;
  printf(v4, a2);
  LOWORD(v5) = -31340;
  HIWORD(v5) = (unsigned int)"back_data[1] = 0x%02x, read_back_data[2] = 0x%02x, read_back_data[3] = 0x%02x" >> 16;
  printf(v5, a2, *a1);
  LOWORD(v6) = -31324;
  HIWORD(v6) = (unsigned int)"x%02x, read_back_data[2] = 0x%02x, read_back_data[3] = 0x%02x" >> 16;
  printf(v6, a2, a1[2]);
  LOWORD(v7) = -31308;
  HIWORD(v7) = (unsigned int)"_data[2] = 0x%02x, read_back_data[3] = 0x%02x" >> 16;
  printf(v7, a2, v21);
  LOWORD(v8) = -31288;
  HIWORD(v8) = (unsigned int)"ead_back_data[3] = 0x%02x" >> 16;
  printf(v8, a2, v19);
  LOWORD(v9) = -31268;
  HIWORD(v9) = (unsigned int)"x%02x" >> 16;
  printf(v9, a2, v20);
  LOWORD(v10) = -31248;
  HIWORD(v10) = (unsigned int)"n ISL: domain addr = %x vol=%u" >> 16;
  printf(v10, a2, v18);
  LOWORD(v11) = -31228;
  HIWORD(v11) = (unsigned int)" %x vol=%u" >> 16;
  printf(v11, a2, v22);
  LOWORD(v12) = -31204;
  HIWORD(v12) = (unsigned int)"age [%d, %d], set default voltage %d" >> 16;
  printf(v12, a2, v23);
  LOWORD(v13) = -31180;
  HIWORD(v13) = (unsigned int)"t voltage %d" >> 16;
  printf(v13, a2, v24);
  LOWORD(v14) = -31160;
  HIWORD(v14) = (unsigned int)"vol %d,  %d, set again!" >> 16;
  printf(v14, a2, a1[63]);
  LOWORD(v15) = -31144;
  HIWORD(v15) = (unsigned int)" again!" >> 16;
  return printf(v15, a2, a1[64]);
}
