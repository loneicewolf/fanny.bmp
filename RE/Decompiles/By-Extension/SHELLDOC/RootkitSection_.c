
/* lpEnumFunc parameter of EnumChildWindows
    */

undefined4 UndefinedFunction_100018b0(HWND param_1,HWND *param_2)

{
    byte bVar1;
    char *pcVar2;
    int iVar3;
    byte *pbVar4;
    bool bVar5;
    byte abStack260 [260];
  
  GetClassNameA(param_1,(LPSTR)abStack260,0x104);
  pbVar4 = abStack260;
  pcVar2 = s_SysListView32_1000a06c;
  do {
    bVar1 = *pcVar2;
    bVar5 = bVar1 < *pbVar4;
     
     if (bVar1 != *pbVar4)
     {
      LAB_10001902:
        iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
        goto LAB_10001907;
    }
    
    if (bVar1 == 0)
    {
      break;
    }
    
    bVar1 = ((byte *)pcVar2)[1];
    bVar5 = bVar1 < pbVar4[1];
    
    if (bVar1 != pbVar4[1])
      goto LAB_10001902;
      pcVar2 = (char *)((byte *)pcVar2 + 2);
      pbVar4 = pbVar4 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_10001907:
  if (iVar3 == 0) {
    *param_2 = param_1;
    return 0;
  }
  return 1;
}

