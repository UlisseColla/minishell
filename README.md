:fire: MINI_HELL :fire:

## Summary
Minishell is a "simple" shell implementation project that mimics a small version of Bash. This project is all about processes, file descriptors, and building our own shell.


## Table of Contents
1. [Introduction](#introduction)
2. [Features](#features)
3. [Installation](#installation)
4. [Usage](#usage)
5. [Contributing](#contributing)


## Introduction
Minishell is a project that aims to simulate the behavior of a Unix shell, such as Bash. It provides basic functionalities like command execution, pipes, redirections, and built-in commands.

The shell reads user input, parses the commands, and then executes them. It also includes its own set of built-in commands to handle basic operations like changing directories or printing environment variables.
The handling of the logical operators || and && was also implemented, together with parenthesis to define priorities for commands execution.


## Features
- A prompt that displays when waiting for a new command.
- Working history to track previously entered commands.
- Command execution with absolute, relative paths, or using the PATH environment variable.
- Redirection handling: `>`, `<`, `>>`, and heredoc (`<<`).
- Piping between commands using `|`.
- Handling of environment variables and `$?` (the exit status of the last executed command).
- Signal handling for `Ctrl-C`, `Ctrl-D`, and `Ctrl-\` as in Bash.
- Built-in commands:
  - `echo` (with `-n` option)
  - `cd` (with relative or absolute path)
  - `pwd` (print current working directory)
  - `export` (create environment variables)
  - `unset` (remove environment variables)
  - `env` (print environment variables)
  - `exit` (terminate the shell)


## Installation
1. Clone the repository:
    ```bash
    git clone <repository_url>
    ```
2. Navigate to the project directory:
    ```bash
    cd minishell
    ```
3. Compile the program:
    ```bash
    make
    ```


## Usage
Once compiled, you can launch the shell by running:
```bash
./minishell
```
HAVE FUN!

The program is also completely leaks free (execept for the readline() function, whose leakage has been suppressed). If you feel like testing that out run:
```bash
make supp
```
This will generate the valgrind's suppression file for the readline. Then run:
```bash
valgrind --suppressions=supp/supp.supp ./minishell
```
HAVE EVEN MORE FUN!


## Contributing
This project is part of the 42 School Network (42Luiss Firenze) and was done together with three other amazing programmers: 
Fabio Zucconi (fzucconi), Stefano Montuori (smontuor) and Tommaso Picchio (tpicchio).


