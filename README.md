### dnd-supplement ###

Builds through Autotools for C++.

To setup environment and build, run the following:  

1.  autoreconf -ivf
2.  ./configure
3.  make clean (Optional)
4.  make

Executable will be in the src/ folder currently, named 'dnd_sup'.  

Current execution will roll a random ability score for both a loaded and normal character.

Future Features:
* D20 Ready Ability Roller (Basically complete)
* Race modifiers
* Class modifiers
* Skill list
* Recommended skills per class/race
* Character generator based on genres of play
