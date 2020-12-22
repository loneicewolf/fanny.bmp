#Major readme update#

    Message from me (William Martens)
   
# For detection of fanny.bmp infections using MetaSploit,
## you can now use my metasploit module:
### avail. here: https://github.com/loneicewolf/metasploit_fanny_check_module

   
-------------

All these I thought of earlier providing, since I was one of the people that got this on my USB stick (my USB got infected long long time ago, Years ago now.) - But now - when I looked closer and I saw that some of these isn't even available online (Some of them are, still - like fanny.bmp and maybe some others, and EVELP4.acm) but not any of mscorwin / comhost, etc. (If they are - I would love to hear that! and the source of it. The more sources of same malware - the better. It strengthens the "community" if I can put it that way. And it is easier to find if all material is gathered at one place.

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


#### I have provided 1 more (fanny) way, to detect (fanny) by using MetaSploit. (Part of the *fanny* phun!)
Located in this Git, here:
    -  https://github.com/loneicewolf/fanny.bmp/blob/main/Detection/By-Application/MetaSploit/FannyDetect.txt
    
-------------
    
    (short dump of the file)
    
* ---------------------------------------------------------------------------------------------------------------------------- *

            [+] 84.xxx.x5.31:445   - Command completed successfully!
            [*] 84.xxx.x5.31:445   - Output for "reg query HKEY_LOCAL_MACHINE\SYSTEM\CurrentControlSet\Control\MediaResources\acm\ECELP4":

             - HKEY_LOCAL_MACHINE\SYSTEM\CurrentControlSet\Control\MediaResources\acm\ECELP4
                 - filter8     REG_BINARY      6C7361737323433A5C57494E444F57535C73797374656D33325C6D73636F7277696E2E646C6C00
                 - DevNode     REG_DWORD       0x0
                 - Driver      REG_SZ          c:\WINDOWS\SYSTEM32\ECELP4.ACM
                 - filter3     REG_BINARY      6578706C6F72657223633A5C77696E646F77735C73797374656D33325C7368656C6C646F632E646C6C00
                 - filter2     REG_BINARY      77696E6C6F676F6E23633A5C77696E646F77735C4D534167656E745C4147454E544350442E444C4C00

* ---------------------------------------------------------------------------------------------------------------------------- *

-------------

## Maybe someone could create a Metasploit Module to detect Fanny based on the above?
## - as with Duqu, there is this windows post/gather forensics dump that checks for duqu in the Registry,   

     post/windows/gather/forensics/duqu_check   Windows Gather Forensics Duqu Registry Check

#### why not make some for:

 - Fanny (as I show in **https://github.com/loneicewolf/fanny.bmp/blob/main/Detection/By-Application/MetaSploit/FannyDetect.txt** )
 - Flamer
 - EquationDrug
 - GROK
                (And the many others in "the family")


-------------


- https://www.wired.com/2015/02/nsa-firmware-hacking/


-------------


##  Fanny (and the other files, completely provided)
### includes:


-------------



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


-------------


### If you spot an mistake, please let me now.


-------------



#### I am in kinda a hurry right now (Going 1 course and doing repetition on Cryptography) This is why I haven't really made this sorted & neat (yet) but will do later. 
   


Urgent Contacts: (Malware Researchers)
Discord: Ken-Kaneki#3978
Mail:    william-martens@protonmail.ch

