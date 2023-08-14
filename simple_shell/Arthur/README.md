# simple shell
### Overview
`simple shell` is a UNIX command interpreter that replicates core functionalities of the `sh` shell.

### Installation
Clone this repository to your local system and compile using `gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh`.

### Usage
* Once in the shell, use exactly like `sh`. A list of covered features is provided below. The shell can run in either interactive or non-interactive mode.
* Function returns with the specified exit status.

### Features
The shell handles command line input, including arguements, without the use of most standard library functions such as `printf`, `strtok`. In addition to running executables in the PATH, the following features are currently implemented.

|  Builtin Commands  |    Functionality                            |
| ------------------ | ------------------------------------------- |
| `exit`             | Exit shell with specified exit status       |
| `env`              | Print list of current environment variables |

|  Other Features    |    Functionality                            |
| ------------------ | ------------------------------------------- |
| `Ctrl-D`           | End of file - exit shell                    |
| `Ctrl-C`           | exit shell                                  |
### Example Usage
* This shell takes input the same as a standard unix shell.  After running the executable `hsh`, enter desired input and press return.
* `ls -l`
* `exit`

### About
All files were compiled using `gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh`

### Authors
Marwan Ashraf [Github](https://github.com/MarwanAshraf03) & el boudelaly el mahdi [Github](https://github.com/elboudelaly7)