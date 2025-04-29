# Lesson 3: Conditions and Loops in C

In this lesson, we’ll learn two fundamental programming concepts:

- **Conditional statements**: Make decisions in your code.
- **Loops**: Repeat actions while a condition is true.

---
## 📌 What You'll Learn


- How to make decisions using if, else if, and else
- How to repeat actions using for, while, and do...while loops
- The difference in how loops check their conditions
---

## Part 1: Conditions

### 🧠 Line-by-Line Explanation: `conditions.c`

1. 
```c 
#include <stdio.h>
```

Includes the standard input/output library — required for `printf()` and `scanf()` functions.


2. 
```c
int main()
```

The starting point of the program. Everything inside this function is executed when the program runs.

3. 
```c 
int number;
```

Declares an integer variable `number` to store the value entered by the user.

4. 
```c
printf("Enter a number: ");
```

Prompts the user to enter a number.

5. 
```c
scanf("%d", &number);
```

Reads the number typed by the user and stores it in the variable `number`.

`%d` is a format specifier for integers. `&number` means "address of `number`".

6. 
```c
if (number > 0)
```

Checks if the number is greater than zero. If true, the number is positive.


7. 
```c
else if (number < 0)
``` 

If the first condition was false, check if it's less than zero. If true, it's negative.

8. 
```c
else
```

If none of the above are true, then the number must be zero.

9. 
```c
return 0;
```

Ends the program successfully. 

---

### 🧠 Line-by-Line Explanation: `loops.c`

#### 🔁 for loop:

```c
for (i = 1; i <= 5; i++) {
    printf("Count: %d\n", i);
}
```

- Initialization: `i = 1`
- Condition: `i <= 5` (keep looping while this is true)
- Update: `i++` (increment after each iteration)
- The loop runs 5 times and prints the count from 1 to 5.


#### 🔁 while loop:

```c 
i = 1;
while (i <= 5) {
    printf("Count: %d\n", i);
    i++;
}
```

- Initializes `i` to 1.
- Checks the condition before each iteration.
- Same logic as the `for` loop, just written differently.

#### 🔁 do...while loop:

```c
i = 1;
do {
    printf("Count: %d\n", i);
    i++;
} while (i <= 5);
```

- Starts with `i = 1`.
- Executes the **body first**, then checks the condition afterward.
- Guarantees that the body runs **at least once**, even if the condition is false.