# 0x18. C - Dynamic libraries
This projects describes dyamic libraries; how it works, how to create one and what differenciates it from static libraries.

## Function Prototypes
The following files are scripts written for the projects written in C:

### Table of contents
| Files | Description |
| :---: | :---: |
| libdynamic.so | C dynamic library containing the function definitions |
| main.h | Header files containing the function prototypes |
| 1-create_dynamic_lib.sh | Bash script that creates a dynamic library called liball.so from all the .c files that are in the current directory |
| 100-operations.so | C dynamic library that contains C functions that can be called from Python |
| random.so | C dynamic library to inject in a giga million program |
| 101-make_me_win.sh | Bash script to inject the libmask.so library, using LD_PRELOAD, in the giga million program |
