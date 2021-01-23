
//Ordinal_4 is the export of a fanny module
//Ref later.
LSTATUS __cdecl Ordinal_4(HKEY param_1)

{
  uint H_STRVARIABLE_; // does not nec. Need to be strvariable. Can be something else. As w. Others too.
  DWORD DVar2;
  /* asm coming soon */
  char *pcVar3;
  HMODULE hModule;
  LPTHREAD_START_ROUTINE lpStartAddress;
  LSTATUS LVar4;
  int iVar5;
  char local_218;
  undefined4 *puVar6; // most likely a parameter
  undefined4 local_217;
  CHAR local_114;
  undefined4 local_113;
  DWORD local_10;
  uint local_c;
  LPVOID local_8;
  local_8 = (LPVOID)0x0; /* 0x1c9c  4   */
  local_10 = 1;
  H_STRVARIABLE_ = FUN_10001f0c();
  local_c = local_c & 0xffffff00 |/*|*/ H_STRVARIABLE_ & 0xff;
  
  
  // < comment this >
  DVar2 = FUN_100015f7(&local_8);
  
  //was commented out
  if (DVar2 == 0) {
  
  
    iVar5 = 0x40;
    local_114 = '\0';
    puVar6 = &local_113;
    while (iVar5 != 0) {
      iVar5 = iVar5 + -1;
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    *(undefined2 *)puVar6 = 0;
    *(undefined *)((int)puVar6 + 2) = 0;
                    /* DWORD nSize for GetModuleFileNameA */
                    /* LPSTR lpFilename for GetModuleFileNameA */
                    /* HMODULE hModule for GetModuleFileNameA */
    DVar2 = GetModuleFileNameA(hModule_10010750,&local_114,0x104);
