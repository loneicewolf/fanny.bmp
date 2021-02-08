totally forgot this one..




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl FUN_10003895(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  HMODULE hModule;
  int iVar1;
  
  iVar1 = 0;
  if (_DAT_10006ad4 == (FARPROC)0x0) {
                    /* LPCSTR lpLibFileName for LoadLibraryA */
    hModule = LoadLibraryA("user32.dll");
    if (hModule != (HMODULE)0x0) {
                    /* LPCSTR lpProcName for GetProcAddress */
                    /* HMODULE hModule for GetProcAddress */
      _DAT_10006ad4 = GetProcAddress(hModule,"MessageBoxA");
      if (_DAT_10006ad4 != (FARPROC)0x0) {
                    /* LPCSTR lpProcName for GetProcAddress */
                    /* HMODULE hModule for GetProcAddress */
        DAT_10006ad8 = GetProcAddress(hModule,"GetActiveWindow");
                    /* LPCSTR lpProcName for GetProcAddress */
                    /* HMODULE hModule for GetProcAddress */
        DAT_10006adc = GetProcAddress(hModule,"GetLastActivePopup");
        goto LAB_100038e4;
      }
    }
    iVar1 = 0;
  }
  else {
LAB_100038e4:
    if (DAT_10006ad8 != (FARPROC)0x0) {
      iVar1 = (*DAT_10006ad8)();
      if ((iVar1 != 0) && (DAT_10006adc != (FARPROC)0x0)) {
        iVar1 = (*DAT_10006adc)(iVar1);
      }
    }
    iVar1 = (*_DAT_10006ad4)(iVar1,param_1,param_2,param_3);
  }
  return iVar1;
}

