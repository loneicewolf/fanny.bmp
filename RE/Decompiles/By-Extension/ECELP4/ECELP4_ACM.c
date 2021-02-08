
BOOL __cdecl
FUN_10003bc7(DWORD param_1,LPCSTR param_2,int param_3,LPWORD param_4,UINT param_5,LCID param_6,
            int param_7)

{
  size_t _Size;
  undefined *puVar1;
  BOOL BVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined *local_28;
  int local_24;
  WORD local_20 [2];
  undefined *local_1c;
  undefined4 local_14;
  undefined *puStack16;
  undefined *puStack12;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack12 = &DAT_10005420;
  puStack16 = &LAB_10003e08;
  local_14 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_14;
  local_1c = &stack0xffffffc8;
  iVar3 = DAT_10006b04;
  puVar1 = &stack0xffffffc8;
  if (DAT_10006b04 == 0) {
                    /* LPWORD lpCharType for GetStringTypeW */
                    /* int cchSrc for GetStringTypeW */
                    /* LPCWSTR lpSrcStr for GetStringTypeW */
                    /* DWORD dwInfoType for GetStringTypeW */
    BVar2 = GetStringTypeW(1,(LPCWSTR)&lpSrcStr_10005400,1,local_20);
    iVar3 = 1;
    puVar1 = local_1c;
    if (BVar2 != 0) goto LAB_10003c36;
                    /* LPWORD lpCharType for GetStringTypeA */
                    /* int cchSrc for GetStringTypeA */
                    /* LPCSTR lpSrcStr for GetStringTypeA */
                    /* DWORD dwInfoType for GetStringTypeA */
                    /* LCID Locale for GetStringTypeA */
    BVar2 = GetStringTypeA(0,1,(LPCSTR)&lpSrcStr_100053fc,1,local_20);
    if (BVar2 != 0) {
      iVar3 = 2;
      puVar1 = local_1c;
      goto LAB_10003c36;
    }
  }
  else {
LAB_10003c36:
    local_1c = puVar1;
    DAT_10006b04 = iVar3;
    if (DAT_10006b04 == 2) {
      if (param_6 == 0) {
        param_6 = DAT_10006ae8;
      }
                    /* LPWORD lpCharType for GetStringTypeA */
                    /* int cchSrc for GetStringTypeA */
                    /* LPCSTR lpSrcStr for GetStringTypeA */
                    /* DWORD dwInfoType for GetStringTypeA */
                    /* LCID Locale for GetStringTypeA */
      BVar2 = GetStringTypeA(param_6,param_1,param_2,param_3,param_4);
      goto LAB_10003cfe;
    }
    if (DAT_10006b04 == 1) {
      if (param_5 == 0) {
        param_5 = DAT_10006af8;
      }
                    /* int cchWideChar for MultiByteToWideChar */
                    /* LPWSTR lpWideCharStr for MultiByteToWideChar */
                    /* int cbMultiByte for MultiByteToWideChar */
                    /* LPCSTR lpMultiByteStr for MultiByteToWideChar */
      local_28 = &stack0xffffffc8;
                    /* DWORD dwFlags for MultiByteToWideChar */
                    /* UINT CodePage for MultiByteToWideChar */
      local_24 = MultiByteToWideChar(param_5,(-(uint)(param_7 != 0) & 8) + 1,param_2,param_3,
                                     (LPWSTR)0x0,0);
      if (local_24 != 0) {
        local_8 = 0;
        _Size = local_24 * 2;
        FUN_10003ee0();
        local_1c = &stack0xffffffc8;
        _memset(&stack0xffffffc8,0,_Size);
        local_8 = 0xffffffff;
        if (((undefined *)register0x00000010 != (undefined *)0x38) &&
           (iVar3 = MultiByteToWideChar(param_5,1,param_2,param_3,(LPWSTR)&stack0xffffffc8,local_24)
           , iVar3 != 0
                    /* int cchWideChar for MultiByteToWideChar */
                    /* LPWSTR lpWideCharStr for MultiByteToWideChar */
                    /* int cbMultiByte for MultiByteToWideChar */
                    /* LPCSTR lpMultiByteStr for MultiByteToWideChar */
                    /* DWORD dwFlags for MultiByteToWideChar */
                    /* UINT CodePage for MultiByteToWideChar */)) {
                    /* LPWORD lpCharType for GetStringTypeW */
                    /* int cchSrc for GetStringTypeW */
                    /* LPCWSTR lpSrcStr for GetStringTypeW */
                    /* DWORD dwInfoType for GetStringTypeW */
          BVar2 = GetStringTypeW(param_1,(LPCWSTR)&stack0xffffffc8,iVar3,param_4);
          goto LAB_10003cfe;
        }
      }
    }
  }
  BVar2 = 0;
LAB_10003cfe:
  *in_FS_OFFSET = local_14;
  return BVar2;
}

