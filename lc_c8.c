undefined8 FUN_1000015e0(FILE **param_1,long param_2,FILE *param_3,void *param_4)

{
  FILE **ppFVar1;
  void *pvVar2;
  Bytef *pBVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  Bytef *pBVar7;
  size_t sVar8;
  size_t sVar9;
  char *pcVar10;
  undefined8 uVar11;
  int iVar12;
  z_stream local_c8;
  FILE **local_58;
  long local_50;
  ulong local_48;
  void *local_40;
  Bytef *local_38;
  
  local_c8.avail_in = 0;
  local_c8.next_in = (Bytef *)0x0;
  local_c8.zalloc = (alloc_func)0x0;
  local_c8.zfree = (free_func)0x0;
  local_c8.opaque = (voidpf)0x0;
  iVar4 = __stubs::_inflateInit_(&local_c8,"1.2.11",0x70);
  if (iVar4 != 0) {
    FUN_1000020d0("Failed to extract %s: inflateInit() failed with return code %d!\n",param_2 + 0x12
                  ,iVar4);
    return 0xffffffff;
  }
  local_38 = (Bytef *)__stubs::_malloc(0x2000);
  if (local_38 == (Bytef *)0x0) {
    pcVar10 = "Failed to extract %s: failed to allocate temporary input buffer!\n";
LAB_100001812:
    pBVar7 = (Bytef *)0x0;
    FUN_1000021c0("malloc",pcVar10,param_2 + 0x12);
  }
  else {
    local_40 = param_4;
    pBVar7 = (Bytef *)__stubs::_malloc(0x2000);
    if (pBVar7 == (Bytef *)0x0) {
      pcVar10 = "Failed to extract %s: failed to allocate temporary output buffer!\n";
      goto LAB_100001812;
    }
    local_48 = (ulong)*(uint *)(param_2 + 8);
    local_58 = param_1;
    local_50 = param_2;
    do {
      ppFVar1 = local_58;
      sVar9 = 0x2000;
      if (local_48 < 0x2000) {
        sVar9 = local_48;
      }
      sVar8 = __stubs::_fread(local_38,1,sVar9,*local_58);
      uVar11 = 0xffffffff;
      if ((sVar8 != sVar9) || (iVar4 = __stubs::_ferror(*ppFVar1), iVar4 != 0)) goto LAB_100001858;
      local_48 = local_48 - sVar9;
      local_c8.avail_in = (uInt)sVar9;
      local_c8.next_in = local_38;
      do {
        while( true ) {
          local_c8.avail_out = 0x2000;
          local_c8.next_out = pBVar7;
          iVar4 = __stubs::_inflate(&local_c8,0);
          pvVar2 = local_40;
          uVar5 = iVar4 + 4;
          if ((uVar5 < 7) && ((0x47U >> (uVar5 & 0x1f) & 1) != 0)) {
            iVar12 = *(int *)(&DAT_10000706c + (long)(int)uVar5 * 4);
            goto LAB_100001835;
          }
          sVar9 = 0x2000 - (ulong)local_c8.avail_out;
          if (param_3 == (FILE *)0x0) break;
          sVar8 = __stubs::_fwrite(pBVar7,1,sVar9,param_3);
          iVar12 = -1;
          if ((sVar8 != sVar9) || (iVar6 = __stubs::_ferror(param_3), iVar6 != 0))
          goto LAB_100001835;
LAB_100001732:
          if (local_c8.avail_out != 0) goto LAB_1000017ce;
        }
        if (local_40 != (void *)0x0) {
          __stubs::_memcpy(local_40,pBVar7,sVar9);
          local_40 = (void *)((long)pvVar2 + sVar9);
          goto LAB_100001732;
        }
        local_40 = (void *)0x0;
      } while (local_c8.avail_out == 0);
LAB_1000017ce:
    } while ((local_48 != 0) && (iVar4 != 1));
    iVar12 = iVar4;
    if (iVar4 != 1) {
LAB_100001835:
      FUN_1000020d0("Failed to extract %s: decompression resulted in return code %d!\n",
                    local_50 + 0x12,iVar12);
      uVar11 = 0xffffffff;
      goto LAB_100001858;
    }
  }
  uVar11 = 0;
LAB_100001858:
  pBVar3 = local_38;
  __stubs::_inflateEnd(&local_c8);
  __stubs::_free(pBVar3);
  __stubs::_free(pBVar7);
  return uVar11;
}
