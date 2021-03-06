=========== CREDITS ===========================================================
 Programming
 - Benjamin Gunton
 - Harjuno Perwironegoro
 - Nimesh Subedi
 - Szymon Zmyslony

 Art
 - Benjamin Gunton
 - Harjuno Perwironegoro
 - Nimesh Subedi

 Sound
 Edited and used under the Creative Commons licence.

 Stadium Cheering
 - Avakas
     https://www.freesound.org/people/avakas/sounds/263679/
 - paulw2k
     https://www.freesound.org/people/paulw2k/sounds/196461/

 Ball Kicking
 - mikaelfernstrom
     https://www.freesound.org/people/mikaelfernstrom/sounds/68650/

 Referee Whistle
 - Pablo-F
     https://www.freesound.org/people/Pablo-F/sounds/90743/

===== INSTALLATION INSTRUCTIONS ===============================================

 This game was made using SDL v1.2, so you will need to install the SDL
 libraries and compile the program using them. All the necessary instructions
 should be listed below:
-------------------------------------------------------------------------------
| Installing the Libraries                                                    |
|                                                                             |
| In order to compile the SDL program, you will need the SDL library:         |
| $ sudo apt-get install libsdl1.2-dev                                        |
|                                                                             |
| Check it is installed with this:                                            |
| $ sdl-config                                                                |
|                                                                             |
| You will also need the SDL_image library:                                   |
| $ sudo apt-get install libsdl-image1.2-dev                                  |
|                                                                             |
| ..and the sound library:                                                    |
| $ sudo apt-get install libsdl-mixer1.2-dev                                  |
|                                                                             |
| The wiringPi library must be installed using git:                           |
| $ git clone git://git.drogon.net/wiringPi                                   |
| $ cd wiringPi                                                               |
| $ git pull origin                                                           |
| $ ./build                                                                   |
-------------------------------------------------------------------------------
| Compiling and Running                                                       |
|                                                                             |
| To use SDL without X, (from the console), you need permissions for          |
| framebuffer and audio access. Do the following command and then log out and |
|  in again:                                                                  |
| $ sudo usermod -a -G video,audio <username>                                 |
|                                                                             |
| Compile using make on a pi:                                                 |
| $ make pi                                                                   |
|                                                                             |
| Or, if not on a pi:                                                         |
| $ make                                                                      |
|                                                                             |
| If you are getting pi-related errors whilst not on a pi, the program may    |
| have been compiled improperly. Do the following and try again:              |
| $ make clean                                                                |
-------------------------------------------------------------------------------
