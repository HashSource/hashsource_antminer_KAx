int reset_miner_6060info_status()
{
  pthread_mutex_lock(&miner_6060info_lock);
  memset(&byte_196BD0, 0, 0x1F0u);
  memset(&byte_196DD8, 0, 0x1F0u);
  return pthread_mutex_unlock(&miner_6060info_lock);
}
