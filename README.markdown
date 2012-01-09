# Shadow Dust
Shadow of Dust is a opensource implementation of idtech4 engine for mmorpg game. This project is based on the Doom 3 GPL source code, release by id Software on 2011.

## Compiling
The build system uses CMake, so you just need generate build files for your system.

##Depedencies:
* libjpeg
* libogg
* libvorbis
* libvorbisfile
* OpenAL
* libcurl (optional, used for updates)
* SDL


## Compiling on Linux (Archlinux):
```bash
pacman -Sy cmake
```
```bash
cd ./Shadow-of-Dust/neo
```
```bash
cmake ./CMakeList.txt
```
```bash
make -j 2
```
## Compiling on Windows
```cmd
cmake -G "Visual Studio 10" -DDOOM3LIBS=/path/to/doom3-libs/i686-w64-mingw32 /path/to/repository/neo
```
```cmd
cmake -G "Visual Studio 10 Win64" -DDOOM3LIBS=/path/to/doom3-libs/x86_64-w64-mingw32 /path/to/repository/neo
```

## Compiling on Mac
MAC OS X is not tested

## License
See COPYING.txt for the GNU GENERAL PUBLIC LICENSE

ADDITIONAL TERMS:  The Shadow of Dust GPL Source Code is also subject to certain additional terms. You should have received a copy of these additional terms immediately following the terms and conditions of the 
GNU GPL which accompanied the Shadow of Dust Source Code.  If not, please request a copy in writing from id Software at id Software LLC, c/o ZeniMax Media Inc., Suite 120, Rockville, Maryland 20850 USA.

## Readme
See README.txt for the original Shadow of Dust source release readme.
