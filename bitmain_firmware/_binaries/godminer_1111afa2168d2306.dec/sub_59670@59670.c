int __fastcall sub_59670(int a1, int *a2)
{
  int *v2; // r10
  int v3; // r7
  int v4; // r6
  __int64 v5; // kr00_8
  int v7; // r0
  int *v8; // r11
  int *v9; // r3
  int v10; // r1
  int v11; // r2
  int v12; // r3
  int v13; // r1
  int v14; // r2
  int v15; // r3
  int v16; // r1
  int v17; // r2
  int v18; // r3
  int v19; // r3
  int v20; // r1
  int v21; // r2
  int v22; // r11
  char v23; // r10
  int *v25; // [sp+10h] [bp-1074h]
  unsigned __int8 v26; // [sp+10h] [bp-1074h]
  int v27; // [sp+24h] [bp-1060h] BYREF
  int v28; // [sp+28h] [bp-105Ch]
  int v29; // [sp+34h] [bp-1050h] BYREF
  int v30; // [sp+38h] [bp-104Ch]
  int v31; // [sp+3Ch] [bp-1048h]
  int v32; // [sp+40h] [bp-1044h]
  int v33; // [sp+44h] [bp-1040h]
  int v34; // [sp+48h] [bp-103Ch]
  int v35; // [sp+4Ch] [bp-1038h]
  int v36; // [sp+50h] [bp-1034h]
  int v37; // [sp+54h] [bp-1030h] BYREF
  int v38; // [sp+58h] [bp-102Ch]
  int v39; // [sp+5Ch] [bp-1028h]
  int v40; // [sp+60h] [bp-1024h]
  int v41; // [sp+64h] [bp-1020h]
  int v42; // [sp+68h] [bp-101Ch]
  int v43; // [sp+6Ch] [bp-1018h]
  int v44; // [sp+70h] [bp-1014h]
  __int64 v45; // [sp+74h] [bp-1010h]
  char v46; // [sp+7Ch] [bp-1008h]
  char v47[4100]; // [sp+80h] [bp-1004h] BYREF

  v2 = (int *)a2[283];
  v3 = *a2;
  v4 = a2[1];
  v5 = qword_196A20;
  *(_DWORD *)(a1 + 508) = 1;
  v45 = v5;
  v27 = v3;
  v28 = v4;
  if ( v2 )
  {
    v8 = a2 + 2;
    v7 = a2[2];
    v9 = a2 + 268;
    v10 = a2[3];
    v11 = v8[2];
    v25 = v9;
    v12 = v8[3];
    v29 = v7;
    v30 = v10;
    v31 = v11;
    v32 = v12;
    v13 = v8[5];
    v14 = v8[6];
    v15 = v8[7];
    v33 = v8[4];
    v34 = v13;
    v35 = v14;
    v36 = v15;
    v16 = v2[1];
    v17 = v2[2];
    v18 = v2[3];
    v37 = *v2;
    v38 = v16;
    v39 = v17;
    v40 = v18;
    v19 = v2[7];
    v20 = v2[5];
    v21 = v2[6];
    v41 = v2[4];
    v42 = v20;
    v43 = v21;
    v44 = v19;
    v22 = *(unsigned __int8 *)(a1 + 266);
    v23 = (unsigned int)*((double *)v25 - 1);
    v46 = v23;
    if ( v22 )
    {
      V_LOCK();
      logfmt_raw(v47, 0x1000u, 0, "kiss99 param is ready...");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/dhash_content/rvn/rvn_2044/rvn_2044_content.c",
        173,
        "push_work_rvn_2044",
        18,
        82,
        40,
        v47);
      *(_BYTE *)(a1 + 266) = 0;
      (*(void (__fastcall **)(int, int *))(a1 + 36))(a1, &v27);
    }
    else
    {
      v26 = memcmp(dword_196A38, &v29, 0x20u);
      if ( !((unsigned __int8)memcmp(dword_196A58, &v37, 0x20u) | v26) )
      {
LABEL_4:
        qword_196A78 = v5;
        dword_196A38[0] = v29;
        dword_196A38[1] = v30;
        dword_196A38[2] = v31;
        dword_196A38[3] = v32;
        dword_196A28 = v3;
        dword_196A2C = v4;
        unk_196A48 = v33;
        unk_196A4C = v34;
        unk_196A50 = v35;
        unk_196A54 = v36;
        dword_196A58[0] = v37;
        dword_196A58[1] = v38;
        dword_196A58[2] = v39;
        dword_196A58[3] = v40;
        unk_196A68 = v41;
        unk_196A6C = v42;
        unk_196A70 = v43;
        unk_196A74 = v44;
        byte_196A80 = v23;
        return 0;
      }
      V_LOCK();
      logfmt_raw(v47, 0x1000u, 0, "push work begin for new job comming...");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KA3_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/dhash_content/rvn/rvn_2044/rvn_2044_content.c",
        173,
        "push_work_rvn_2044",
        18,
        91,
        40,
        v47);
      (*(void (__fastcall **)(int, int *))(a1 + 36))(a1, &v27);
    }
    v3 = v27;
    v4 = v28;
    v23 = v46;
    v5 = v45;
    goto LABEL_4;
  }
  printf(aInvalidPointer, "work->private");
  return 0;
}
