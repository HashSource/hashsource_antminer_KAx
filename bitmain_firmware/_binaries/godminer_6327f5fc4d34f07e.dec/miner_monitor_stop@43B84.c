int miner_monitor_stop()
{
  stop_task_timer(dword_109C0C);
  return stop_task_timer(dword_109C08);
}
