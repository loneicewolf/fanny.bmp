# PROOF OF CONCEPTS (aka testing)
- video_1 : shows the malware
- video_2 : shows a re-creation (or a custom exploit) based on the malware


# Deep Dive
### video_1


### video_2
shows a re-creation (or a custom exploit) based on the malware
[GIST - MSG BOX](https://gist.github.com/loneicewolf/c588f95287c55454ef6a5c28e8babd30) is here:

- If you prefer `Console Application`, I include that code!
- Same if you prefer a `DLL`, including that!



## Console Application
```cpp
// i686-w64-mingw32-gcc -o M msgbox.c
#include <stdio.h>
#include <windows.h>
int main(int argc, char *argv[]){
  if(argc != 3){
    printf("usage: %s  MESSAGE  TITLE",argv[0]);
  }
  // MessageBox function (winuser.h)
  //  Displays a modal dialog box that contains
  //    a system icon,
  //    a set of buttons,
  //    and a brief application-specific message,
  /// such as status or error information.
  /// The message box returns an integer value that indicates which button the user clicked.
  // ref https://docs.microsoft.com/en-us/windows/win32/api/winuser/nf-winuser-messagebox
  MessageBox(
              0,       /*   [in, optional] HWND    hWnd,      */
              argv[2], /*   [in, optional] LPCTSTR lpText,    */
              argv[1], /*   [in, optional] LPCTSTR lpCaption, */
              1        /*   [in]           UINT    uType      */
             );
  return 0;
}
```




# DLL
```cpp
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
// __declspec(dllexport) THING
__declspec(dllexport) BOOL APIENTRY DllMain(HMODULE hModule,
											DWORD ul_reason_for_call,
											LPVOID lpReserved
											)
{
	switch(ul_reason_for_call){
	
		case DLL_PROCESS_ATTACH:
			{
				// https://gist.github.com/loneicewolf/c588f95287c55454ef6a5c28e8babd30
				// loneicewolf/win_msgbox.c 
				MessageBox(
				0,       /*   [in, optional] HWND    hWnd,      */
				"TEXT", /*   [in, optional] LPCTSTR lpText,     */
				"TITLE", /*   [in, optional] LPCTSTR lpCaption, */
				1        /*   [in]           UINT    uType      */
				);
				break;
			}
		case DLL_PROCESS_DETACH:
			{
				break;
			}
		case DLL_THREAD_ATTACH:
			{
				break;
			}
		case DLL_THREAD_DETACH:
			{
				break;
			}
	
	}
	return TRUE;
}
```
