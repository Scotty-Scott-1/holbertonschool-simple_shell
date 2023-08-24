<p>
<img width="200" src=(https://s3.amazonaws.com/intranet-projects-files/holbertonschool-low_level_programming/235/shell.jpeg)
>
</p>

# Simple_shell project
------------
## Table of Contents
* [Description](#description)
* [Files](#files)
* [Requirements](#requirements)
* [Installation](#installation)
* [Compile](#compile)
* [Execute](#execute)
* [Example](#example)
* [Bugs](#bugs)
* [flowchart](#flowchart)
* [Authors](#authors)

## Description
Unix shell is a command-line interpreter or shell written by Ken Thompson in 1971 that provides a command line user interface for Unix-like operating systems.


## Files
File | Description
--- | ---
`main.h` | header file 
`1-copy_input.c` | function that retrieves and prints a user's character string
`2-tokenize.c` | Funtion tha tokenizes the string using two points as delimiters.
`3-execute_command.c` | Function that check and execute array of token
`4-get_path.c` | Function that Get the path object
`4.5-get_path_variable.c` | Function that Get the path value object
`5-cat_file.c` | Function that concat file and path
`6-exit.c` | Function for exit the shell
`man_1_simple_shell.swp` | Manual page for the simple_shell
`simple_shell.c.c` | Funtion that runs the shell program

---
## Requirements
 * Simple_shell is designed to run on the Ubuntu 20.04 LTS Linux environment.
 * Must be compiled using the GNU gcc compiler collection with flags-Wall, -Werror, -Wextra, and -pedantic.

## Installation
   - Clone this repository: `git clone git@github.com:Scotty-Scott-1/holbertonschool-simple_shell.git`

## Compile
Your shell will be compiled this way:
```
   - `gcc -Wall -Werror -Wextra -pedantic *.c -o hsh`
```
## Execute
Your shell should be run in the interactive mode:
```
$ ./hsh
$ /bin/ls
hsh main.c shell.c
($)
($) exit
$
```
 but also  run in non-interactive mode: 
 ```
$ echo "/bin/ls" | ./hsh
hsh main.c shell.c test_ls_2
$
$ cat test_ls_2
/bin/ls
/bin/ls
$
$ cat test_ls_2 | ./hsh
hsh main.c shell.c test_ls_2
hsh main.c shell.c test_ls_2
$
```

## Example
Run the executable in your terminal after compiling:
```
$ ./hsh
$ # This is our rendition of the shell
$ ls -la
total 152
drwxr-xr-x  3 letihabib letihabib  4096 Aug 23 21:07  .
drwxr-x--- 10 letihabib letihabib  4096 Aug 21 15:58  ..
drwxr-xr-x  8 letihabib letihabib  4096 Aug 23 18:49  .git
-rw-r--r--  1 letihabib letihabib    23 Aug 16 11:18  .gitignore
-rw-r--r--  1 letihabib letihabib   487 Aug 23 11:02  1-copy_input.c
-rw-r--r--  1 letihabib letihabib   904 Aug 22 23:43  2-tokenize.c
-rw-r--r--  1 letihabib letihabib  1028 Aug 23 18:49  3-execute_command.c
-rw-r--r--  1 letihabib letihabib   799 Aug 23 17:54  4-get_path.c
-rw-r--r--  1 letihabib letihabib   681 Aug 22 23:43  4.5-get_path_variable.c
-rw-r--r--  1 letihabib letihabib   606 Aug 21 10:17  5-cat_file_and_path.c
-rw-r--r--  1 letihabib letihabib   468 Aug 22 23:43  6-exit.c
-rw-r--r--  1 letihabib letihabib   176 Aug 21 15:58  AUTHORS
-rw-r--r--  1 letihabib letihabib 69599 Aug 21 15:58 'Complete FlowChart.jpg'
-rw-r--r--  1 letihabib letihabib  1120 Aug 23 17:54  README.md
-rwxr-xr-x  1 letihabib letihabib 17432 Aug 23 21:07  hsh
-rw-r--r--  1 letihabib letihabib   716 Aug 22 23:43  main.h
-rw-r--r--  1 letihabib letihabib  1599 Aug 23 17:54  man_1_simple_shell.swp
-rw-r--r--  1 letihabib letihabib  1150 Aug 23 18:49  simple_shell.c
$
```

## Bugs
There are no known bugs.

## FlowChart

![Complete Flowchart](https://github.com/Scotty-Scott-1/holbertonschool-simple_shell/blob/main/Complete%20FlowChart.jpg?raw=true)

## Authors

[Solomon Williams](https://github.com/:Scotty-Scott-1) | (<swilliamfr@outlook.com>)

[Gael Deschamps](https://github.com/GTDeschamps) | (<g.deschamps@hotmail.com>)

[Leticia HABIB](https://github.com/:letihab) | (<letihabib1822@gmail.com>)