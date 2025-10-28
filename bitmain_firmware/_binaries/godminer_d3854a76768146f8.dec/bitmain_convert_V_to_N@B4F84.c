int bitmain_convert_V_to_N()
{
  double v0; // d0
  int v1; // r3
  int result; // r0
  int v3; // [sp+4h] [bp-4h]

  LOWORD(v1) = -22440;
  HIWORD(v1) = (unsigned int)&unk_185760 >> 16;
  switch ( *(_DWORD *)(v1 + 8) )
  {
    case 'A':
    case 'B':
      result = (int)(765.411764 - v0 * 35.833333);
      break;
    case 'C':
      result = (int)(933.240365 - v0 * 59.806034);
      break;
    case 'a':
      result = (int)(1144.50226 - v0 * 52.243589);
      break;
    case 'q':
    case 'r':
    case 'u':
      v3 = (int)(1190.93534 - v0 * 78.742588);
      goto LABEL_3;
    case 's':
    case 'x':
      result = (int)(1280.57782 - v0 * 73.979365);
      break;
    case 't':
    case 'v':
      result = (int)(1156.10758 - v0 * 76.090494);
      break;
    default:
      v3 = -1;
LABEL_3:
      result = v3;
      break;
  }
  return result;
}
