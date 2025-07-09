THIS REPO WILL BE CLEANED NOW
so PLEASE, https://github.com/loneicewolf/fanny.bmp/tree/main_legacy check this link, which is a hard-copy for the frozen state of this repo, because now its incomplete(deleting,re arranging, re uploading cleaned files, and so on)
# 🚧 Under Construction 🚧


### ⚠️ MALWARE AHEAD! — RESEARCH ONLY ⚠️

> **If you don’t know what this is, stop here.**
>
> This repository contains malware samples and research materials for **academic, reverse engineering, and forensics purposes only.**
>
> **Do NOT run anything outside of isolated environments (e.g., air-gapped VMs).**

---

## Fanny.BMP / DementiaWheel Overview

* Related to `Brutal_Kangaroo`
* Connected to [`nls_933w.dll`](https://github.com/loneicewolf/nls_933w_dll)
* Infects via USB using [CVE-2010-2568](https://nvd.nist.gov/vuln/detail/CVE-2010-2568)
* Shares DNA with Stuxnet and Flame, gauss and duqu respectievely

- [modules LNK 1 RAPID7 fanny_bmp_check - By Me](https://www.rapid7.com/db/modules/post/windows/gather/forensics/fanny_bmp_check/)
- [vulnerabilities LNK 2 RAPID7 fanny_bmp_check - By Me](https://www.rapid7.com/db/vulnerabilities/post/windows/gather/forensics/fanny_bmp_check/)
- [metasploit-framework LNK 3 SRC of fanny_bmp_check - By Me](https://github.com/rapid7/metasploit-framework/blob/master//modules/post/windows/gather/forensics/fanny_bmp_check.rb)
---

##  Rootkit Demonstration

### `shelldoc.dll` GUI Stealth Sample:
![image](https://github.com/user-attachments/assets/66352a1f-99af-4e41-8138-559060cf560e)
![runas demo](https://github.com/loneicewolf/fanny.bmp/assets/68499986/1839659e-adf7-4b3b-96e7-4f1b382f3a70)

> ✔️ Demonstrates that the rootkit hides `.lnk` and keyword-matching files even from system UI dialogs. **Which demonstrates it's not just a simple file hider, it's a generalized rootkit that hides dirs(verify this claim)/files[x]/even strings[x]**

---

## Technical Report

A full report was written, but will be rewritten soon for clarity and accuracy.
The update will focus on:

* Technical deep dives
* Relationship to Equation Group tools
* Ethical simulation techniques

---

## 🗂️ Project Contributions

Fanny detection added to:

* [Rapid7 Metasploit](https://blog.rapid7.com/2021/01/29/metasploit-wrap-up-96/)
* [Metasploit Module: `fanny_bmp_check`](https://github.com/rapid7/metasploit-framework/tree/master/modules/post/windows/gather/forensics/)
* [POC Video](https://www.youtube.com/watch?v=Uto_lcD2f38)

---

## 🧪 Basic Malware Info

<details>
<summary>Click to expand</summary>

```
Name:         Fanny.BMP (aka DementiaWheel)
Type:         USB-propagating Worm
Exploits:     CVE-2010-2568 (LNK exploit)
Targets:      Windows XP → Windows 10
Payloads:     Explorer rootkit, USB storage exfiltration, persistence via ACM driver

CVE:          CVE-2010-2568
Reference:    https://securelist.com/a-fanny-equation-i-am-your-father-stuxnet/68787/
```

</details>

---

## POCs & Hashes

<details>
<summary>Click to expand full list of samples + VirusTotal links</summary>

Includes:

* All `__*.lnk` USB autoloaders
* `comhost.dll`, `mscorwin.dll`, `shelldoc.dll`, `ECELP4.ACM`, `agentcpd.dll`
* Primary dropper (`fanny.bmp`)
* Temporary file (`~DE1923.tmp`)

Example:

* `fanny.bmp` → [VT](https://www.virustotal.com/gui/file/0d9bb9a9e3a6f8836a1ef51862ae1c28f086da3a9006d1c7040fe57ed8c26231)
* `shelldoc.dll` → [VT](https://www.virustotal.com/gui/file/6eb00b34d1daffa49b2f4c90841705b2c994563bde672bf35eb1c46cdb19a1ed)

</details>

---

## Metasploit Integration

> You can detect Fanny infections using the `fanny_bmp_check` module in Metasploit:

```bash
meterpreter > run post/windows/gather/forensics/fanny_bmp_check
```

Expected output:

```
[+] HKEY_LOCAL_MACHINE\SYSTEM\...\ECELP4\Driver found
[+] HKEY_LOCAL_MACHINE\SYSTEM\...\ECELP4\filter2 found
...
```

---

## POC Videos

* [Rootkit behavior demo](https://youtu.be/Uto_lcD2f38)
* [Crash test from hiding corrupted .lnk files](https://github.com/loneicewolf/fanny.bmp/blob/main/SanUltra%20%28Fanny.bmp%20Bug%29.png)

---

## Reproduction Bugs & Notes

> Creating `.lnk` files named `__e__.lnk` under XP with `shelldoc.dll` active may crash Explorer.
>
> ✔️ This has been captured and documented in video + screenshots.

---

## Future Plans

* Improved USB C2 bridge w/ Metasploit
* C+Lua tooling for USB backdoor command & control
* Fully structured academic writeup
* Screenshots and annotated source

---

## Related Research

* [Stuxnet Source](https://github.com/loneicewolf/Stuxnet-Source)
* [Agent.BTZ Sample](https://github.com/loneicewolf/Agent.btz)
* [DUQU](https://github.com/loneicewolf/DUQU)
* [Gauss-Src](https://github.com/loneicewolf/Gauss-Src)
* [flame-sourcecode V2](https://github.com/loneicewolf/flame-sourcecode) 
* [MINI-FLAME-Skywiper](https://github.com/loneicewolf/MINI-FLAME-Skywiper) 

---

## Why Release This?

> To help defenders, researchers, and detection engineers.
> These files are hard to find. Collecting + analyzing them helps strengthen infosec.

---

## References

* [Securelist: Equation Group](https://securelist.com/equation-the-death-star-of-malware-galaxy/68750/)
* [Rapid7 Blog](https://blog.rapid7.com/2021/01/29/metasploit-wrap-up-96/)
* [Fanny Detection Module](https://github.com/loneicewolf/metasploit_fanny_check_module)

---

# MALWARE AHEAD # 
**Branch of interest:**
- [🔗 `only_malware` branch (live payloads)](https://github.com/loneicewolf/fanny.bmp/tree/only_malware)

# Acknowledgements
**Thanks to**
- [Fyyre](https://github.com/Fyyre/) - for your [DrvMon](https://github.com/Fyyre/DrvMon)
- [Hfiref0x](https://github.com/hfiref0x) - for your [KDU](https://github.com/hfiref0x/KDU)
- [GPT(O3-PRO)](https://chatgpt.com/?model=o3-pro) For helping me check the formulation of this repo, like MarkDown, etc.
- [FSU's 2 Students Alejandro Ugas and McDougall for their Research](https://github.com/loneicewolf/fanny.bmp/blob/main/Docs/handson-report-McDougall-Ugas-FINAL.pdf)
