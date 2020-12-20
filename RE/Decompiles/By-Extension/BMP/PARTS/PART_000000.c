/*# ---------------------------------------------------------------------------- # */
 /*
 /*# THIS IS ONLY PARTS OF FANNY.BMP  DECOMPILED USING (CURRENTLY)  GHIDRA. # */
 /*#     IT IS NOT DONE. IT CAN BE(AND PROBABLY IS) INACCURATE.  # */
/**/
// Now, that said: This is only for my own "notes"  So, do not consider this as even work, or something. 
/*
  *
  *
  *Consider this as (I guess) Just, Notes. 
  *So it will not be detailed, and explanations will not be made for every line. Will / maybe get later.
  *
  *
 */
/**/
/* # ---------------------------------------------------------------------------- #  */







DEFAULT	1000745e	param_3	FUN_1000745e	SECURITY_IMPERSONATION_LEVEL Stack[0xc]:4 param_3
                        /*------------------------------------------------------- */           
                        /*                              |                         */
                        /*                              |                         */
                        /*                              |                         */
                        /*                              |                         */
                        /*                              |                         */
                        /*----------------------------- | ------------------------*/
                        
                        // |Additional Notes coming soon| //
                        
                                     /* */ HANDLE __cdecl
                                     /* */ FUN_1000745e  ( DWORD param_1,
                                     /* */                 int param_2,
                                     /* */                 SECURITY_IMPERSONATION_LEVEL param_3
                                     /* */                ) {
                                     /* */   /* - - - - - - - - - - - - - - -*/
                                     /* */   HANDLE pvVar1;             /*   */
                                     /* */   DWORD DVar2;               /*   */
                                     /* */   undefined4 *in_FS_OFFSET;  /*   */
                                     /* */   BOOL BVar3;                /*   */
                                     /* */   HANDLE *ppvVar4;           /*   */
                                     /* */   HANDLE local_28;           /*   */
                                     /* */   DWORD local_24;            /*   */
                                     /* */   HANDLE local_20;           /*   */
                                     /* */   undefined *local_1c;       /*   */
                                     /* */   undefined4 local_14;       /*   */
                                     /* */   code *pcStack16;           /*   */
                                     /* */   undefined *puStack12;      /*   */
                                     /* */   undefined4 local_8;        /*   */
                                     /* */   /* - - - - - - - - - - - - - - -*/
                                     /* */   puStack12 = &DAT_1000e468;   /*   */
                                     /* */   pcStack16 = FUN_1000c600;    /*   */
                                     /* */   local_14 = *in_FS_OFFSET;    /*   */
                                     /* */   *in_FS_OFFSET = &local_14;   /*   */
                                     /* */   local_1c = &stack0xffffffcc; /*   */
                                     /* */   local_8 = 0;                 /*   */
                                     /* */   local_20 = (HANDLE)0x0;      /*   */
                                     /* */   ppvVar4 = &local_20;         /*   */
                                     /* */   BVar3 = 1;                   /*   */
                                     /* */   DVar2 = param_1;             /*   */
                                     /* */   pvVar1 = GetCurrentThread(); /*   */
                                     /* */   BVar3 = OpenThreadToken(pvVar1,DVar2,BVar3,ppvVar4); /*   */
                                     /* */   pvVar1 = local_20;
                                       
                                       /* - - - - - - - - - - - - - - -*/
                                       
                                     /* */   if (BVar3 == 0) {
                                     /* */     DVar2 = GetLastError();
                                     /* */     if (DVar2 == 0x3f0) {
                                     /* */       DVar2 = param_1;
                                     /* */       if (param_2 != 0) {
                                     /* */         DVar2 = 2;
                                     /* */       }
                                       /* - - - - - - - - - - - - - - -*/
                                     /* */       ppvVar4 = &local_20;
                                     /* */       local_24 = DVar2;
                                     /* */       pvVar1 = GetCurrentProcess();
                                     /* */       BVar3 = OpenProcessToken(pvVar1,DVar2,ppvVar4);
                                     /* */       if (BVar3 != 0) {
                                     /* */         pvVar1 = local_20;
                                     /* */         if (param_2 != 0) {
                                     /* */           BVar3 = DuplicateTokenEx(local_20,param_1,(LPSECURITY_ATTRIBUTES)0x0,param_3,
                                     /* */                                    TokenImpersonation,&local_28);
                                     /* */           if (BVar3 == 0) {
                                     /* */             local_28 = (HANDLE)0x0;
                                     /* */           }
                                     /* */           pvVar1 = local_28;
                                     /* */           if (local_20 != (HANDLE)0x0) {
                                     /* */             CloseHandle(local_20);
                                     /* */             pvVar1 = local_28;
                                     /* */           }
                                     /* */         }
                                     /* */         goto LAB_1000752b;
                                     /* */       }
                                     /* */     }
                                     /* */     pvVar1 = (HANDLE)0x0;
                                     /* */   }
                                     /* */ LAB_1000752b:
                                     /* */   *in_FS_OFFSET = local_14;
                                     /* */   return pvVar1; }
                                            




BOOL FUN_10007315(HANDLE param_1,PSID param_2,LPBOOL param_3)

{
  undefined *puVar1;
  undefined4 *in_FS_OFFSET;
  GENERIC_MAPPING local_c4;
  ACL *local_b4;
  _PRIVILEGE_SET local_b0;
  ACL local_9c [10];
  undefined local_48 [20];
  DWORD local_34;
  DWORD local_30;
  undefined local_2c;
  undefined local_2b;
  undefined local_2a;
  undefined local_29;
  undefined local_28;
  undefined local_27;
  undefined local_26;
  undefined local_25;
  undefined4 local_24;
  BOOL local_20;
  undefined *local_1c;
  undefined4 local_14;
  code *pcStack16;
  undefined *puStack12;
  undefined4 local_8;
  
  puStack12 = &DAT_1000e458;
  pcStack16 = FUN_1000c600;
  local_14 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_14;
  local_1c = &stack0xffffff30;
  local_20 = 0;
  local_8 = 0;
  puVar1 = &stack0xffffff30;
  if (param_1 == (HANDLE)0x0) {
    param_1 = FUN_1000745e(8,1,SecurityIdentification);
    puVar1 = local_1c;
  }
  local_1c = puVar1;
  if (param_1 == (HANDLE)0x0) {
    local_20 = 0;
  }
  else {
    local_b4 = local_9c;
    InitializeAcl((PACL)local_9c,0x54,2);
    AddAccessAllowedAce((PACL)local_9c,2,1,param_2);
    InitializeSecurityDescriptor(local_48,1);
    local_2c = 1;
    local_2b = 1;
    local_2a = 0;
    local_29 = 0;
    local_28 = 0;
    local_27 = 0;
    local_26 = 0;
    local_25 = 1;
    local_24 = 0;
    SetSecurityDescriptorOwner(local_48,&local_2c,0);
    SetSecurityDescriptorGroup(local_48,&local_2c,0);
    SetSecurityDescriptorDacl(local_48,1,(PACL)local_9c,0);
    local_c4.GenericRead = 0;
    local_c4.GenericWrite = 0;
    local_c4.GenericExecute = 0;
    local_c4.GenericAll = 1;
    local_34 = 0x14;
    local_20 = AccessCheck(local_48,param_1,1,(PGENERIC_MAPPING)&local_c4,(PPRIVILEGE_SET)&local_b0,
                           &local_34,&local_30,param_3);
  }
  *in_FS_OFFSET = local_14;
  return local_20;
}



















