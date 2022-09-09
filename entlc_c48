undefined4 entry(undefined4 param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  char *pcVar5;
  char *local_c48;
  undefined8 local_c40;
  undefined local_c38 [1024];
  char local_838 [1024];
  undefined local_438 [1024];
  long local_38;
  
  local_38 = *(long *)__got::___stack_chk_guard;
  local_c40 = 0;
  lVar4 = FUN_100001e60(0);
  uVar3 = 0xffffffff;
  if (lVar4 == 0) goto LAB_10000307b;
  cVar1 = FUN_100003310(local_438,*param_2);
  if (cVar1 == '\0') goto LAB_10000307b;
  cVar1 = FUN_100003440(local_c38,local_438);
  if (cVar1 == '\0') goto LAB_10000307b;
  cVar1 = FUN_1000033a0(local_838,local_438);
  if (cVar1 == '\0') goto LAB_10000307b;
  local_c48 = (char *)FUN_100005e90("_MEIPASS2");
  FUN_100005ec0("_MEIPASS2");
  cVar1 = FUN_100001da0(lVar4,local_438);
  if (cVar1 == '\0') {
    cVar1 = FUN_100001da0(lVar4,local_c38);
    if (cVar1 == '\0') {
      FUN_1000020d0("Cannot open self %s or archive %s\n",local_438,local_c38);
      goto LAB_10000307b;
    }
  }
  *(undefined4 *)(lVar4 + 0x107c) = param_1;
  *(undefined8 **)(lVar4 + 0x1080) = param_2;
  if (local_c48 == (char *)0x0) {
    iVar2 = FUN_1000023e0(lVar4);
    local_c48 = (char *)0x0;
    if (iVar2 == 0) {
      local_c48 = local_838;
    }
    local_c40 = FUN_100005350();
    iVar2 = FUN_100004830(local_c40,lVar4,0);
    if (iVar2 != 0) goto LAB_100002f15;
    iVar2 = FUN_100004f70(lVar4,local_c40);
    if (iVar2 != 0) {
LAB_100002f09:
      FUN_100004de0(local_c40);
      goto LAB_100002f15;
    }
    iVar2 = FUN_1000051e0(local_c40);
    if (iVar2 != 0) goto LAB_100002f09;
    FUN_100004a60(local_c40,local_438);
  }
  else {
    local_c40 = FUN_100005350();
LAB_100002f15:
    FUN_100005390(&local_c40);
  }
  if (local_c48 == (char *)0x0) {
    iVar2 = FUN_100002450(lVar4,local_c40);
    if (iVar2 == 0) {
      pcVar5 = local_838;
      if (*(char *)(lVar4 + 0x878) != '\0') {
        pcVar5 = (char *)(lVar4 + 0x878);
      }
      FUN_100005eb0("_MEIPASS2",pcVar5);
      iVar2 = FUN_100006750(lVar4);
      if (iVar2 != -1) {
        FUN_100002d80();
        uVar3 = FUN_100006840(local_438,lVar4,param_1,param_2);
        FUN_100004de0(local_c40);
        FUN_100005390(&local_c40);
        if (*(char *)(lVar4 + 0x1078) != '\0') {
          FUN_1000062a0((char *)(lVar4 + 0x878));
        }
        FUN_100001ea0(lVar4);
      }
    }
  }
  else {
    iVar2 = __stubs::_strcmp(local_838,local_c48);
    if (iVar2 != 0) {
      iVar2 = __stubs::_snprintf((char *)(lVar4 + 0x878),0x400,"%s",local_c48);
      if (0x3ff < iVar2) goto LAB_10000307b;
      *(undefined *)(lVar4 + 0x1078) = 1;
      __stubs::___strcpy_chk(lVar4 + 0xc78,(char *)(lVar4 + 0x878),0x400);
    }
    FUN_100002ca0(lVar4);
    uVar3 = FUN_100002cb0(lVar4);
    FUN_100002d70(lVar4);
    FUN_100004de0(local_c40);
    FUN_100005390(&local_c40);
  }
LAB_10000307b:
  if (*(long *)__got::___stack_chk_guard == local_38) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stubs::___stack_chk_fail();
}
