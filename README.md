# gemride

[Gemini  protocol](https://geminiprotocol.net/) browser for Symbian S60 3rd Edition FP2.

<img src="screenshot.jpg" text="Nokia E66 dumbphone running Gemride client. Screen shows 'Gemini F.A.Q.' page with text '1.5 What kind of timeless user experience? In a word, reading! Reading text with a simple, clear, uncluttered layout without any...'" width=400>

## Build environment

**WARNING:** Updating vanilla Windows 7 with [Legacy Update](https://legacyupdate.net/) breaks Nokia connectivity somewhere in the between. I've failed to find out what specific KB is responsible for it and had to use custom build with built-in OS updates up to 2024/01 <sup>(<a href="magnet:?xt=urn:btih:B479A2C1B0752E1597E88EB27C533DF451EF24C9&tr=http%3A%2F%2Fbt2.t-ru.org%2Fann%3Fmagnet&dn=Windows%207%20SP1%2026in1%20(x86%2Fx64)%20by%20Eagle123%20(01.2024)%20%5BRu%2FEn%5D">🧲</a>)</sup>

Relevant software versions extracted from the registry of build VM:

| Name | Version |
| --- | --- |
| ActivePerl 5.6.1 Build 635 | 5.6.635 |
| Carbide.c++ v2.7 | 2.70.0000 |
| CSL ARM Toolchain (arm-symbianelf) 2005-Q1C | 2005-Q1C |
| Git | 2.46.2 |
| MSVC90_x64 | 1.0.1.2 |
| MSVC90_x86 | 1.0.1.2 |
| Nokia Connectivity Cable Driver | 7.1.69.0 |
| Nokia PC Suite | 7.1.180.64 |
| Oracle VirtualBox Guest Additions 7.2.4 | 7.2.4.170995 |
| PC Connectivity Solution | 11.5.29.0 |
| PowerShell 7-x64 | 7.2.24.0 |
| S60 3rd Edition SDK for Symbian OS, Feature Pack 2 v1.1 | 1.00.0000 |
| Windows Driver Package - Nokia Modem  (02/25/2011 4.7) | 02/25/2011 4.7 |
| Windows Driver Package - Nokia Modem  (02/25/2011 7.01.0.9) | 02/25/2011 7.01.0.9 |
| Windows Driver Package - Nokia pccsmcfd  (08/22/2008 7.0.0.0) | 08/22/2008 7.0.0.0 |

I wonder if it's possible to set up GitHub Actions in 2026 based on this configuration...

## Links

- [hstsethi/awesome-symbian](github.com/hstsethi/awesome-symbian)
- Bleeding edge development party: [nnproject.cc](https://nnproject.cc/)
- SDKs, dev tools, books: archive.org ([1](https://archive.org/details/nokia_sdks_n_dev_tools), [2](https://archive.org/details/nokia_sdks_n_dev_tools2))
- SOTA 3D engine: [Dante-Leoncini/Whisk3D](https://github.com/Dante-Leoncini/Whisk3D) ([in action](https://www.instagram.com/p/C-tgbCGvMtC/))

<!--
Not relevant, just in case:

| Microsoft .NET Framework 4.8 | 4.8.03761 |
| Microsoft Visual C++ 2005 Redistributable | 8.0.61001 |
| Microsoft Visual C++ 2005 Redistributable - x64 8.0.50727.4053 False | 8.0.50727.4053 |
| Microsoft Visual C++ 2005 Redistributable - x64 8.0.50727.42 False | 8.0.50727.42 |
| Microsoft Visual C++ 2005 Redistributable - x64 8.0.51011 False | 8.0.51011 |
| Microsoft Visual C++ 2005 Redistributable - x64 8.0.56336 False | 8.0.56336 |
| Microsoft Visual C++ 2005 Redistributable - x64 8.0.57102 False | 8.0.57102 |
| Microsoft Visual C++ 2005 Redistributable - x64 8.0.58298 False | 8.0.58298 |
| Microsoft Visual C++ 2005 Redistributable - x64 8.0.59192 False | 8.0.59192 |
| Microsoft Visual C++ 2005 Redistributable (x64) | 8.0.61000 |
| Microsoft Visual C++ 2005 Redistributable - x86 8.0.50727.4053 False | 8.0.50727.4053 |
| Microsoft Visual C++ 2008 Redistributable - x64 9.0.21022.0 False | 9.0.21022 |
| Microsoft Visual C++ 2008 Redistributable - x64 9.0.21022.218 False | 9.0.21022.218 |
| Microsoft Visual C++ 2008 Redistributable - x64 9.0.21022 False | 9.0.21022 |
| Microsoft Visual C++ 2008 Redistributable - x64 9.0.30411 False | 9.0.30411 |
| Microsoft Visual C++ 2008 Redistributable - x64 9.0.30729.0 False | 9.0.30729 |
| Microsoft Visual C++ 2008 Redistributable - x64 9.0.30729.17 False | 9.0.30729 |
| Microsoft Visual C++ 2008 Redistributable - x64 9.0.30729.4048 False | 9.0.30729.4048 |
| Microsoft Visual C++ 2008 Redistributable - x64 9.0.30729.4148.0 False | 9.0.30729.4148 |
| Microsoft Visual C++ 2008 Redistributable - x64 9.0.30729.4148 False | 9.0.30729.4148 |
| Microsoft Visual C++ 2008 Redistributable - x64 9.0.30729.5570 False | 9.0.30729.5570 |
| Microsoft Visual C++ 2008 Redistributable - x64 9.0.30729.6161 | 9.0.30729.6161 |
| Microsoft Visual C++ 2008 Redistributable - x64 9.0.30729 False | 9.0.30729 |
| Microsoft Visual C++ 2008 Redistributable - x86 9.0.21022.0 False | 9.0.21022 |
| Microsoft Visual C++ 2008 Redistributable - x86 9.0.21022.218 False | 9.0.21022.218 |
| Microsoft Visual C++ 2008 Redistributable - x86 9.0.21022 False | 9.0.21022 |
| Microsoft Visual C++ 2008 Redistributable - x86 9.0.30411 False | 9.0.30411 |
| Microsoft Visual C++ 2008 Redistributable - x86 9.0.30729.0 False | 9.0.30729 |
| Microsoft Visual C++ 2008 Redistributable - x86 9.0.30729.17 False | 9.0.30729 |
| Microsoft Visual C++ 2008 Redistributable - x86 9.0.30729.4048 False | 9.0.30729.4048 |
| Microsoft Visual C++ 2008 Redistributable - x86 9.0.30729.4148.0 False | 9.0.30729.4148 |
| Microsoft Visual C++ 2008 Redistributable - x86 9.0.30729.4148 False | 9.0.30729.4148 |
| Microsoft Visual C++ 2008 Redistributable - x86 9.0.30729.5570 False | 9.0.30729.5570 |
| Microsoft Visual C++ 2008 Redistributable - x86 9.0.30729.6161 | 9.0.30729.6161 |
| Microsoft Visual C++ 2008 Redistributable - x86 9.0.30729 False | 9.0.30729 |
| Microsoft Visual C++ 2010  x64 Redistributable - 10.0.40219 | 10.0.40219 |
| Microsoft Visual C++ 2010  x86 Redistributable - 10.0.40219 | 10.0.40219 |
| Microsoft Visual C++ 2012 Redistributable (x64) - 11.0.61030 False Eng | 11.0.61030.0 |
| Microsoft Visual C++ 2012 Redistributable (x86) - 11.0.61030 False Eng | 11.0.61030.0 |
| Microsoft Visual C++ 2012 x64 Additional Runtime - 11.0.50727 False | 11.0.50727 |
| Microsoft Visual C++ 2012 x64 Additional Runtime - 11.0.51106 False | 11.0.51106 |
| Microsoft Visual C++ 2012 x64 Additional Runtime - 11.0.60610 False | 11.0.60610 |
| Microsoft Visual C++ 2012 x64 Additional Runtime - 11.0.61030 | 11.0.61030 |
| Microsoft Visual C++ 2012 x64 Minimum Runtime - 11.0.50727 False | 11.0.50727 |
| Microsoft Visual C++ 2012 x64 Minimum Runtime - 11.0.51106 False | 11.0.51106 |
| Microsoft Visual C++ 2012 x64 Minimum Runtime - 11.0.60610 False | 11.0.60610 |
| Microsoft Visual C++ 2012 x64 Minimum Runtime - 11.0.61030 | 11.0.61030 |
| Microsoft Visual C++ 2012 x86 Additional Runtime - 11.0.50727 False | 11.0.50727 |
| Microsoft Visual C++ 2012 x86 Additional Runtime - 11.0.51106 False | 11.0.51106 |
| Microsoft Visual C++ 2012 x86 Additional Runtime - 11.0.60610 False | 11.0.60610 |
| Microsoft Visual C++ 2012 x86 Additional Runtime - 11.0.61030 | 11.0.61030 |
| Microsoft Visual C++ 2012 x86 Minimum Runtime - 11.0.50727 False | 11.0.50727 |
| Microsoft Visual C++ 2012 x86 Minimum Runtime - 11.0.51106 False | 11.0.51106 |
| Microsoft Visual C++ 2012 x86 Minimum Runtime - 11.0.60610 False | 11.0.60610 |
| Microsoft Visual C++ 2012 x86 Minimum Runtime - 11.0.61030 | 11.0.61030 |
| Microsoft Visual C++ 2013 Redistributable (x64) - 12.0.21005 False | 12.0.21005.1 |
| Microsoft Visual C++ 2013 Redistributable (x64) - 12.0.21005 False Eng | 12.0.21005.1 |
| Microsoft Visual C++ 2013 Redistributable (x64) - 12.0.30501 False | 12.0.30501.0 |
| Microsoft Visual C++ 2013 Redistributable (x64) - 12.0.30501 False Eng | 12.0.30501.0 |
| Microsoft Visual C++ 2013 Redistributable (x64) - 12.0.40664 False Eng | 12.0.40664.0 |
| Microsoft Visual C++ 2013 Redistributable (x86) - 12.0.21005 False | 12.0.21005.1 |
| Microsoft Visual C++ 2013 Redistributable (x86) - 12.0.21005 False Eng | 12.0.21005.1 |
| Microsoft Visual C++ 2013 Redistributable (x86) - 12.0.30501 False | 12.0.30501.0 |
| Microsoft Visual C++ 2013 Redistributable (x86) - 12.0.30501 False Eng | 12.0.30501.0 |
| Microsoft Visual C++ 2013 Redistributable (x86) - 12.0.40664 False Eng | 12.0.40664.0 |
| Microsoft Visual C++ 2013 x64 Additional Runtime - 12.0.21005 False | 12.0.21005 |
| Microsoft Visual C++ 2013 x64 Additional Runtime - 12.0.40649 False | 12.0.40649 |
| Microsoft Visual C++ 2013 x64 Additional Runtime - 12.0.40660 False | 12.0.40660 |
| Microsoft Visual C++ 2013 x64 Additional Runtime - 12.0.40664 | 12.0.40664 |
| Microsoft Visual C++ 2013 x64 Minimum Runtime - 12.0.21005 False | 12.0.21005 |
| Microsoft Visual C++ 2013 x64 Minimum Runtime - 12.0.40649 False | 12.0.40649 |
| Microsoft Visual C++ 2013 x64 Minimum Runtime - 12.0.40660 False | 12.0.40660 |
| Microsoft Visual C++ 2013 x64 Minimum Runtime - 12.0.40664 | 12.0.40664 |
| Microsoft Visual C++ 2013 x86 Additional Runtime - 12.0.21005 False | 12.0.21005 |
| Microsoft Visual C++ 2013 x86 Additional Runtime - 12.0.40649 False | 12.0.40649 |
| Microsoft Visual C++ 2013 x86 Additional Runtime - 12.0.40660 False | 12.0.40660 |
| Microsoft Visual C++ 2013 x86 Additional Runtime - 12.0.40664 | 12.0.40664 |
| Microsoft Visual C++ 2013 x86 Minimum Runtime - 12.0.21005 False | 12.0.21005 |
| Microsoft Visual C++ 2013 x86 Minimum Runtime - 12.0.40649 False | 12.0.40649 |
| Microsoft Visual C++ 2013 x86 Minimum Runtime - 12.0.40660 False | 12.0.40660 |
| Microsoft Visual C++ 2013 x86 Minimum Runtime - 12.0.40664 | 12.0.40664 |
| Microsoft Visual C++ 2015-2022 Redistributable (x64) - 14.36.32522 | 14.36.32522.0 |
| Microsoft Visual C++ 2015-2022 Redistributable (x86) - 14.36.32522 | 14.36.32522.0 |
| Microsoft Visual C++ 2022 X64 Additional Runtime - 14.36.32522 | 14.36.32522 |
| Microsoft Visual C++ 2022 X64 Minimum Runtime - 14.36.32522 | 14.36.32522 |
| Microsoft Visual C++ 2022 X86 Additional Runtime - 14.36.32522 | 14.36.32522 |
| Microsoft Visual C++ 2022 X86 Minimum Runtime - 14.36.32522 | 14.36.32522 |
| Update for Microsoft .NET Framework 4.8 (KB4503575) | 1 |
| Update for Microsoft .NET Framework 4.8 (KB4532941) | 1 |
| Update for Microsoft .NET Framework 4.8 (KB5020879) | 1 |
-->