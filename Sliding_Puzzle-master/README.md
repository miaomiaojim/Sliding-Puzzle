Description:
A sliding jigsaw game.

include files:
Game.h Game.cpp Gamestate.h Gamestate_MainGame.h Gamestate_MainGame.cpp Gamestate_Menu.h Gamestate_Menu.cpp Graphics.h Graphics.cpp Tile.h Tile.cpp

include classes:
Game GameState MainGame:GameState MenuState:GameState Graphics Tile

Flatform:
Work well on Mac. If you want to use this game on other platform please download other different platform version of SDL2 libraries and modify the content of cmakelist.txt.    

Frameworks and libraries(which are already added in the files "lib" and "include"):
SD2 SDL2_ttf SDL2_mixer SDL2_image

Instrucion to install SDL2, SDL2_ttf, SDL2_image and SDL2_mixer and build the project in terminal:
1. sudo apt-get install libsdl2-dev
2. sudo apt-get install libsdl2-ttf-dev
3. sudo apt-get install libsdl2-image-dev
4. sudo apt-get install libsdl2-mixer-dev
5. cmake .
6. make

Which rubric points addresssed:
1. The project code can be compiled and runned without errors.
2. A variety of control structures are used in the project.
3. The project reads data from an external file or writes data to a file as part of the necessary operation of the program such as SDL2 headers and libraries.
4. The project accepts input from a user as part of the necessary operation of the program such as clicks to the jigsaws.
5. The project code is organized into classes with class attributes to hold the data, and class methods to perform tasks.
6. All class data members are explicitly specified as public, protected, or private.
7. All class members that are set to argument values are initialized through member initialization lists.
8. All class member functions document their effects, either through function names, comments, or formal documentation. Member functions do not change program state in undocumented ways.
9. Appropriate data and functions are grouped into classes. Member data that is subject to an invariant is hidden from the user. State is accessed via member functions.
10. Inheritance hierarchies are logical. Composition is used instead of inheritance when appropriate. Abstract classes are composed of pure virtual functions. Override functions are specified.
11. One function is overloaded with different signatures for the same function name.
12. Some functions use pass-by-reference in the project code.
13. At least one class that uses unmanaged dynamically allocated memory, along with any class that otherwise needs to modify state upon the termination of an object, uses a destructor.
14. The project follows the Resource Acquisition Is Initialization pattern where appropriate, by allocating objects at compile-time, initializing objects when they are declared, and utilizing scope to ensure their automatic destruction.
15. The project uses at least one smart pointer: unique_ptr, shared_ptr, or weak_ptr. The project does not use raw pointers.