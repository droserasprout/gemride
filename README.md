# gemride

[Gemini protocol](https://geminiprotocol.net/) browser for Symbian S60 3rd Edition FP2.

<img src="screenshot.jpg" alt="Nokia E66 dumbphone running Gemride client. Screen shows 'Gemini F.A.Q.' page with text '1.5 What kind of timeless user experience? In a word, reading! Reading text with a simple, clear, uncluttered layout without any...'" width="400">

## Features

- Gemtext rendering: headings, links, quotes,preformatted, word-wrap
- TLS
- Link navigation
- Retry-on-failure

## Installation

**TODO**: Symbian jailbreak, TLS patch

Direct links: [signed](https://github.com/droserasprout/gemride/raw/refs/heads/master/sis/gemride.sisx) | [unsigned](https://github.com/droserasprout/gemride/raw/refs/heads/master/sis/gemride.sis)

## Build environment

**WARNING:** Updating vanilla Windows 7 with [Legacy Update](https://legacyupdate.net/) breaks Nokia connectivity somewhere in the between. I've failed to find out what specific KB is responsible for it and had to use custom build with built-in OS updates up to 2024/01 <sup>(<a href="magnet:?xt=urn:btih:B479A2C1B0752E1597E88EB27C533DF451EF24C9&tr=http%3A%2F%2Fbt2.t-ru.org%2Fann%3Fmagnet&dn=Windows%207%20SP1%2026in1%20(x86%2Fx64)%20by%20Eagle123%20(01.2024)%20%5BRu%2FEn%5D">🧲</a>)</sup>

tldr: Carbide 2.7, S60 3rd FP2 SDK v1.1, ActivePerl 5.6.1, CSL ARM 2005-Q1C, Nokia PC Suite 7.1

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

## Roadmap

End goal: make this piece of software complete and never touch it again while Gemini is alive.

- [ ] History
- [ ] Bookmarks
- [ ] Fullscreen
- [ ] Home page
- [ ] Cache, offline mode
- [ ] Test on other devices
- [ ] A+: Dark mode
- [ ] A+: GitHub Actions workflow

## Links

- [hstsethi/awesome-symbian](https://github.com/hstsethi/awesome-symbian)
- Bleeding edge development party: [nnproject.cc](https://nnproject.cc/)
- SDKs, dev tools, books: archive.org ([1](https://archive.org/details/nokia_sdks_n_dev_tools), [2](https://archive.org/details/nokia_sdks_n_dev_tools2))
- SOTA 3D engine: [Dante-Leoncini/Whisk3D](https://github.com/Dante-Leoncini/Whisk3D) ([in action](https://www.instagram.com/p/C-tgbCGvMtC/))

## License

[Apache 2.0](LICENSE)