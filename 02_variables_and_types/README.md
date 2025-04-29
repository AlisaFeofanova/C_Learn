# Lesson 2: Variables and Data Types in C

In this lesson, we’ll learn about **variables** and **data types** in C.  
Variables store data in memory, and data types define what kind of data can be stored.

## 📌 What You'll Learn

- Variables: How to declare and assign values to them.
- Data Types: int, float, and char types.
- Printing Values: Using printf() to display variable values.

## 🔍 Line-by-Line Explanation

```c
#include <stdio.h>
```

As before, this line includes the Standard Input/Output library so you can use functions like printf.

```c
int main() { ... }
```

The main function is where execution starts.

We’ll declare variables inside it and print their values.


<b>Declaring Variables</b>

```c
int age = 25;
```

Here, we declare a variable **age** of type **int** (integer).

It stores the value **25**.

```c
float height = 5.9;
```

We declare a variable **height** of type **float** (floating-point number).
It stores the value **5.9**.

```c
char initial = 'J';
```

We declare a variable **initial** of type **char** (character).
It stores the value **'J'**.

<b>Printing Values</b>

```c
printf("Age: %d\n", age);
```


* %d is a placeholder for an integer.
* We print the value of **age** here.

```c
printf("Height: %.1f\n", height);
```

* %.1f is used to print floating-point numbers with 1 digit after the decimal point.
* We print the value of **height** here.

```c
printf("Initial: %c\n", initial);
```

* %c is used to print characters.
* We print the value of **initial** here.


```c
return 0;
```

This line ends the **main** function and indicates the program ended successfully.


## 🛠 How to Compile and Run

```bash
gcc variables.c -o variables
./variables
```

You should see:

```makefile
Age: 25
Height: 5.9
Initial: J
```