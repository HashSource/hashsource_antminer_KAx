int sub_1F3FC()
{
  int result; // r0

  if ( !byte_107944 )
  {
    result = deregister_tm_clones();
    byte_107944 = 1;
  }
  return result;
}
