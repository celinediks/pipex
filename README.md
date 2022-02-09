# Pipex

Pipex is a project in the curriculum of school 42 that asked me to recode the use of the pipe shell command.

## Project description
<p>Subject document of the project: <a href="pipex_subject.pdf" target="_blank">Pipex</a></p>
The objective of this project is to code the pipex program. It should be executed in the following way:
<code>$> ./pipex file1 cmd1 cmd2 file2 </code>.
file1 and file2 are file names, cmd1 and cmd2 are shell commands with their parameters.

### Norm writing

This project is written in accordance to the norm of school 42. Some of the most important norm rules are:
- Each function has a maximum of 25 lines
- One single variable declaration per line, all variables on top of the function 
- After the variable declarations, a newline will split them with the rest of the function
- No for loops allowed


## Install and run the project

First, clone my repository on your computer via the green "code" button on top of this page.
Because the pipe command needs a file to read from, you can create a test file for yourself to test my function. This can be a .txt file of your choice.
All the functions can be compiled using my Makefile. This Makefile has several options:
- run <code>make</code> to create object files for all the standard functions, and a archive library pipex.a
- to test my code, you can use your test file and some shell commands of your choice, for example: 
<code> ./pipex test.txt "ls -l" "wc -l" outfile</code>
  
- run <code>make clean</code> to delete all the object files
- run <code>make fclean</code> to delete all the object files and the pipex.a file.
- run <code>make re</code> recompile the library.
