void *__fastcall get_system_capability(void *result)
{
  if ( result )
    return memcpy(result, &unk_1B4030, 0x124u);
  return result;
}
