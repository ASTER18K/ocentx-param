void FUN_1000062a0(char *param_1)

{
  int iVar1;
  size_t sVar2;
  long lVar3;
  long lVar4;
  char *pcVar5;
  int iVar6;
  undefined local_4e0 [4];
  ushort local_4dc;
  char *local_450;
  char local_448 [1040];
  long local_38;
  
  local_38 = *(long *)__got::___stack_chk_guard;
  __stubs::_strncpy(local_448,param_1,0x400);
  sVar2 = __stubs::_strlen(local_448);
  iVar6 = (int)sVar2;
  if (local_448[iVar6 + -1] != '/') {
    __stubs::___strcat_chk(local_448,"/",0x401);
    iVar6 = iVar6 + 1;
  }
  lVar3 = __stubs::_opendir$INODE64(param_1);
  if (lVar3 != 0) {
    local_450 = param_1;
    lVar4 = __stubs::_readdir$INODE64(lVar3);
    if (lVar4 != 0) {
      do {
        pcVar5 = (char *)(lVar4 + 0x15);
        iVar1 = __stubs::_strcmp(pcVar5,".");
        if (iVar1 != 0) {
          iVar1 = __stubs::_strcmp(pcVar5,"..");
          if (iVar1 != 0) {
            local_448[iVar6] = '\0';
            __stubs::___strcat_chk(local_448,pcVar5,0x401);
            iVar1 = __stubs::_stat$INODE64(local_448,local_4e0);
            if (iVar1 == 0) {
              if ((local_4dc & 0xf000) == 0x4000) {
                FUN_1000062a0();
              }
              else {
                __stubs::_unlink(local_448);
              }
            }
          }
        }
        lVar4 = __stubs::_readdir$INODE64(lVar3);
      } while (lVar4 != 0);
    }
    __stubs::_closedir(lVar3);
    __stubs::_rmdir(local_450);
  }
  if (*(long *)__got::___stack_chk_guard == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stubs::___stack_chk_fail();
}
