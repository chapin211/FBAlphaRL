#### FB Alpha RL (Retro Loader) [by CaptainCPS-X, 2013]

---

FB Alpha Retro Loader Core: v1.03

RetroArch Core: v0.9.9.6

FB Alpha Core: v0.2.97.30

---

![Image Alt](https://oab7sa.blu.livefilestore.com/y2p8hB63UZpwO2HhixLFTTAYUukjSwOLCxTUMpAQ-UmqjeIf7o1T4J9CTse3eFWB0WL1WEfH78PA9cIklVaZSVVUtqHJqg2kEZqKwb7UWj_UxA/image_01.png?psid=1)
![Image Alt](https://oab7sa.blu.livefilestore.com/y2phSPVOiA9Oq3-lU2wrA8Ro6v3Rz5uZkXOfsOvWQc33R87enNrt5eHCxlHNVUiLalEWDRPo77Qx-knYq3SVKMw91-SC-eus0ZPwJnOaBF8WII/PIC1.PNG?psid=1)
![Image Alt](https://oab7sa.blu.livefilestore.com/y2ppllJNiBUizxc9vjgRmvidwPh1eAVSwuOI2U6PjVApjLCOjr_Cn5YT3geD0-i55NOY6x9fo_fUHhQrCYXYE2S-yuCpHxZe7iHsOE68mMABv0/RetroArch%20PS3_4.png?psid=1)
![Image Alt](https://oab7sa.blu.livefilestore.com/y2pS7wL8ldRoU16JG0JM9rJDUDDnwc3mX4a7NdZava1xnC2fIUIKzXGTxvJXXCogrRAhbOXgYskEyoFtPxGvUD8UeYHJWFb4Dcal8kPmV9etx8/RetroArch%20PS3_1.png?psid=1)
![Image Alt](https://oab7sa.blu.livefilestore.com/y2p6_yyQX1X5I7zgjqbWJHPWZQ_MaXTj6Hrx3g7FVp46zoET3rXssNLwuUCzpjDLXFFumD_AVtHecy1pq6e_jcnsmrJKn9ZKAk0iid6a7YSpe0/RetroArch%20PS3_5.png?psid=1)
![Image Alt](https://oab7sa.blu.livefilestore.com/y2pcMiV46tTXq2iOmLFMFT8NnCIX4GfmYq_MqE6vi5JHhgqG4r6QiVb72bXWzlJyydSIDR6XLXTh_IroSfT1pWYFODywx1hDnOvIlRzTrB63F4/RetroArch%20PS3_7.png?psid=1)
![Image Alt](https://oab7sa.blu.livefilestore.com/y2p4ZnxCo3Shu4O-0BBNGOUsQYfQtb88Jrygyxc3hCl2dqvV8iNfDqwOtFudPBurLZxp1xyuVdeoIcyagCSwaBZ9s-aNP2spJ7FgWZLEVGelok/RetroArch%20PS3_9.png?psid=1)
![Image Alt](https://oab7sa.blu.livefilestore.com/y2pT199NUc7cHOLMIHY2SL3B4CQEwyHcLoN04BqhT5ZHaSsVaTFoj4_9I1BudavJGjfeb1KhRGf4IUad_gmgc8ZMErR9EfclR8MQcc57fUSM88/RetroArch%20PS3_8.png?psid=1)

### What is FB Alpha?:

---

FB Alpha is an arcade emulator supporting the following platforms;

- Capcom CPS-1 
- Capcom CPS-2 
- Capcom CPS-3 
- Cave 
- Data East DEC-0, DEC-8 and DECO IC16 based games 
- Galaxian based hardware 
- Irem M62, M63, M72, M90 and M92 hardware 
- Kaneko 16 
- Konami 
- Neo-Geo 
- Pacman based hardware 
- PGM 
- Psikyo 68EC020 and SH-2 based hardware 
- Sega System 1, System 16 (and similar), System 18, X-Board and Y-Board 
- Toaplan 1 
- Toaplan 2 
- Taito F2, X, Z and others 
- Miscellaneous drivers for lots of other hardware 

FB Alpha also has a WIP console drivers for Sega Megadrive/Genesis 
and also PC-Engine/TurboGrafx 16/SuperGrafx.

FB Alpha (for Windows), can currently be obtained from http://www.barryharris.me.uk.

### What is FB Alpha Retro Loader ?

---

FB Alpha RL is a PS3 homebrew application coded from scratch,
and not based in any other public source code by other 
developers. It is a result of many hours of dedication
and research.

It is in no way a dirty hack of RetroArch or something 
similar. By the contrary, FB Alpha RL serves as a independent 
frontend to RetroArch and provides features not incorporated 
in it.

I did had to make a modified RetroArch core to be included
along my application, so it could process the arguments
or new commands that FB Alpha RL will be sending to it.

### Objective of FB Alpha RL (Retro Loader):

---

As a dev from the official FB Alpha Team, 
FB Alpha RL was made with a objective in mind, to
keep the original experience from the official
FB Alpha (for Windows OS) on the PS3 system.

Please, read the technical info for more details.

### Technical Info:

---

Signed for CFW 3.4X / 4.XX (should work for everyone).

Tested @ 1080p / 720p / 480p resolutions via HDMI.

FB Alpha RL uses a custom "burn_drivers.cpp" file
that was generated by modifying the official windows
version of FB Alpha with a routine to generate such
file on launch.

The file have a big structure with all the information
for all supported drivers in FB Alpha v0.2.97.30.

Information such as: 

- Romset Name (Ex. kof2002)
- Parent ROM (Ex. sf2)
- Year
- Manufacturer (Ex. Capcom)
- System (Ex. Neo Geo)
- Max players
- Game Screen Resolution
- Game Screen Aspect Ratio

Future release will have a custom generated file with 
all the ROM information as well, so the application will 
be able to verify every romset with precise CRC32 checks 
(as in the official FB Alpha for Windows).

NOTE: You don't need the official RetroArch installed,
this already has my own modified build incorporated
into FB Alpha RL installation directory. So you can safely
install the official RetroArch and it won't interfere.

### Usage (Game List Specific):

---

- Use UP / DOWN to navigate Game List.
- Use Left Analog UP / DOWN to navigate Game List.
- Press L1 / R1 to toggle game system filter.
- Press L2 / R2 for quick Game List navigation.
- Press [ ] to view ZIP information.
- Press /\ to view ROM Information.
- Press (X) to Load the selected Game.
- Press (O) to return to Main Menu.
- Press [START] to Rescan ROM(s).

### Main Features:

---

- Neo-Geo UNI-BIOS support (must be present in neogeo.zip)
- FTP support
- ROMs paths directory browser.
- Input Preset CFG file browser.
- Game List cache feature.
- Missing games listing.
- Alternate key combo to access RetroArch core menu.
- 1080p / 720p / 480p display modes supported.
- Game Preview display feature (hover a game to see its preview).
- Game System Filtering for easier game selection.
- Custom Game System Filtering available in the options menu.
- Auto configure screen Aspect Ratio on game load.
- Quick ROM(s) scanning / re-scanning in extensive path locations.
- Romset validation against FB Alpha v0.2.97.28 drivers library.
- Checking for duplicate ROM(s).
- Detailed info about listed ROM(s).
- ZIP Content Information display.
- Full game name display for easier navigation.
- Game Information (Year, Company, etc...).
- Direct loading of ROM(s).
- Support for Screenshots (press (PS) and look in XMB photo column).
- GUI based on OpenGL / PSGL textures (Thanks to Squarepusher / Twinaphex for the tips).
- more...(read the change logs for more features)

### WIP / Coming on future releases:

---

- Custom Themes
- Display Extended ROM information by pressing (/\).
- MAME history DAT parsing support.
- Title / Flyers image display feature.

### Changelog:

---

1.03 (September 22, 2013)

- Signed for CFW 3.4X / 4.XX and tested on
```
 - Rebug 4.46 REX / CEX
 
 - MiraLaTijera 4.40 (3.2.0)
```

- Added version and IP address display on the Main Menu.

- Whole new theme for this release of FB Alpha.

- Added Iris Manager (official) to the Main Menu load options.

- Added proper "Preview" image aspect ratio calculation.

- Incorporated RetroArch and FBA libretro source code into
FB Alpha RL Git, and with just one makefile everything is 
built.

To build:
```
make fbarl
```

To clean (all cores):
```
make _cleanup
```

- Ported my custom mods to the latest RetroArch Core v0.9.9.6.

- (O) is the new "Game List" button to return to "Main Menu".
 
- Added shadow effect to all rendered text, in preparation
for future "Custom Theme" feature.

- Fixed a problem with CPS-3 External / Stereo sound on libretro, 
now it sounds great :)

- [src] Source code has been greatly re-organized.

- [src] "miniz.cpp" ZIP library is used the "proper" way, 
so now I can use its modules everywhere I need.

- [src] "burn_drivers.h" was renamed as "burn_drivers.cpp" and is 
now compiled, allowing access to its data everywhere I need.

- Added support for Neo-Geo UNI-BIOS (need to be present in neogeo.zip).

FBARL will look from latest (uni-bios_3_0.rom) to oldest BIOS (uni-bios_1_0.rom) 
in "neogeo.zip", of course if you don't have any of those the game will be 
loaded with regular BIOS.

- Added check for file existence on game selection, if the 
game listed is not found for some reason, like for example, 
if you disconnected the USB with the games, it will prompt 
you with a message to re-scan. The system will not lock / freeze 
anymore.

- Added check for fb_alpha.SELF core existence on game selection, if 
for some reason you don't have it or can't access, the application will 
let you know and prompt you to re-install it.

- Fixed libretro core default inputs for Neo-Geo and Capcom fighting games, 
now they are correctly assigned.

- Fixed the Save Custom Inputs feature on RetroArch core, now it will not 
include the annoying "example" text, it will use the currently loaded name, 
so you can save quickly and continue playing.

- Added FTP support.

- Using latest FB Alpha v0.2.97.30 source, adapted to compile as 
libretro (romset is synched with MAME v149).

- Doesn't include all "optimizations" from recent libretro Git, since some 
of them cause some problems with a few games.

1.02 (September 15, 2013)

- Updated with latest FBA Libretro Core (v0.2.97.28), it should
improve compatibility and emulation performance. If you had a
game that presented emulation problems, try it now, it might be
fixed on this release.

1.01a (February 15, 2013)(UPDATE)

- Added option to Enable / Disable display if missing games.
- Fixed USB Storage Device scanning, now they will be
displayed correctly on the Directory / CFG file browser.
- Fixed issue with ROMs rescan, now it will work
fine by pressing START button on the Game List. 

1.01 (February 15, 2013)

- Added information text display for selected options.
- Added ROMs path directory browser.
- Added Input Preset CFG file browser.
- Added confirmation dialog when exiting FB Alpha RL.
- Added feature to display Missing Games.
- Added Game List Cache feature to avoid having to rescan
ROMs every time FB Alpha RL is launched.
- Added option to use alternate key combo to access
RetroArch core menu, Main Menu(SELECT + TRIANGLE) and In-Game Menu (SELECT + SQUARE).
- Updated + Modded latest RetroArch commits (Feb 10, 2013)
- Updated fba-libretro core with latest commits (Feb 10, 2013)
- Added Custom System Filter (go to options and select the 
systems to filter in that category).
- Added support for 1080p / 720p / 480p display modes (all tested).
- Added Game Preview display feature (hover a game to see its preview).
- Included most game previews with package (thanks to Sturn and JacKc @ NeoSource forums) 
- Added new Options Menu.
- Added module to save / read settings to "FBA_RL.ini".
- Added Option to configure 12 custom directories to scan for
ROMs, you decide where you want FB Alpha RL to look for ROMs :).
- Added Option to set / change Input presets for all systems, you just
need to do this once.
- Added Option to Automatically Create basic Input preset configurations
for all supported systems.
- Added Option to enable / disable Auto Aspect Ratio selection on game launch.
- Added Game System Filter (Press L1 / R1 to toggle game system filters).
- Added ROM(s) re-scanning module (Press [START] to re-scan ROM(s)).
- Rewrote FB Alpha RL to make better use of PSGL, now it
supports a better GUI based on texture rendering
(Thanks to Squarepusher/Twinaphex for the tips).
- FB Alpha RL will check for important directories needed 
by RetroArch on launch, and will create them as needed. 
If you have the official RetroArch installed and it have 
missing directories as well for some reason, they will be 
created to make sure everything work fine.
- Incremented number of displayed games.
- Added quick list navigation by pressing L2 / R2.
- Added Analog Stick support to navigate lists.
- Added Main menu with various useful items.
- Added ZIP Info feature (press [ ] to view ZIP info).
- Updated FB Alpha (libretro) core.
- (FBA core) Fixed graphic problems in CPS-1 driver.
- (FBA core) Fixed Diagnostic Menu Lock-up in some games.
- Added Screenshot feature (press (PS) and look in Photo XMB column).
- Improved application core overall and fixed some bugs.
- FB Alpha RL will not process WIP drivers from now on 
until compatibility is better(Megadrive, PCE, SNES).

1.00 (January 30, 2013)

- Initial Release


### Thanks to:

---

 - My buddies Treble Winner (Barry) / Kev / IQ_132 from the original FB Alpha Team <3.
 - Thanks to Sturn and JacKc for the preview images @ NeoSource (http://neosource.1emu.net/)
 - PS3 Scene websites (in no order) such as: PS3HAX / PSX-Scene / PS3Crunch / Etc, for you support 
 - TheMaister / Twinaphex / Squarepusher / Company - Libretro/RetroArch is just amazing.
 - pete_uk - for your unofficial RetroArch builds.
 - STLcardsWS - for your support :)
 - aldostools - your ps3tools for windows are the best =)
 - deank - multiMAN helped me research / debug my application
 - fail0verfl0w, GeoHot, etc - for all you have done for the PS3 scene  
 - Annonymous - for releasing Sony SDKs
 
 Thanks to anyone else I forgot that in some way contributed
 to the PS3 scene and as a result I was able to do this 
 homebrew application.


### FB Alpha Retro Loader v1.03 (BASE) Downloads:

---

[CEX 3.40 / 4.XX] [SkyDrive] FB_ALPHA_RL_1.02_[20130915]_[CEX_340_4XX]_[BASE].rar [57 MB]

https://skydrive.live.com/?cid=595F514B8B494F70&id=595F514B8B494F70!1780#cid=595F514B8B494F70&id=595F514B8B494F70!1807
