# Hello World

This is the very first program most people write when learning a new programming language.  
It simply prints the phrase `"Hello, World!"` to the screen.

## 📌 What You'll Learn

- How to write and run your first C program
- Basic structure of a C program
- Using the `printf()` function

## 📄 Code Explanation

```c
#include <stdio.h>
```
Includes the standard I/O library so you can use `printf()`.

```c
int main() { ... }
```

The main function is where your program starts running.

```c
printf("Hello, World!\n");
```

Prints a string to the terminal, followed by a new line.

```c
return 0;
```
Ends the program and tells the system everything went fine.

## 🛠 How to Compile and Run

```bash
gcc hello.c -o hello
./hello
```

