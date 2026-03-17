# Structure of a C Program

A C program follows a specific structure that defines how the program is written and executed.

Understanding this structure is essential before learning more advanced concepts.

---

# Basic Structure

A simple C program typically consists of:

1. Preprocessor directives
2. Main function
3. Statements and expressions
4. Return statement

---

# Example Program

```c id="cprog1"
#include <stdio.h>

int main() {
    printf("Hello, World!");
    return 0;
}
```

---

# Explanation of Each Line

### `#include <stdio.h>`

This line is a **preprocessor directive** used in C programs.

Let’s break it down:

#### `#` (Hash Symbol)

* The `#` symbol indicates that this line is handled by the **preprocessor**
* The preprocessor runs **before the actual compilation process**
* It performs tasks like including files, defining macros, etc.

---

#### `include`

* `include` is a directive that tells the preprocessor to **include the contents of another file**
* It allows you to use functions and features defined in that file

---

#### `<stdio.h>`

* `stdio.h` stands for **Standard Input Output header file**
* It contains declarations of functions like:

  * `printf()` (for output)
  * `scanf()` (for input)

---

#### What this line does overall

```c id="inc1"
#include <stdio.h>
```

* It tells the compiler:

  > “Before compiling this program, include the necessary code from `stdio.h` so that input/output functions can be used.”

---

#### Important Note

* Without this line, functions like `printf()` and `scanf()` may not work properly
* It is one of the most commonly used header files in C

---


### `int main()`

* This is the **main function**
* Execution of every C program starts from here
* `int` indicates that the function returns an integer value

---

### `{ }` (Curly Braces)

* Define the **body of the function**
* All program statements are written inside these braces

---

### `printf("Hello, World!");`

* Used to display output on the screen
* `printf()` is a function from `stdio.h`

---

### `return 0;`

* Ends the program
* Returns control to the operating system
* `0` indicates successful execution

---

# Key Points

* Every C program must have a `main()` function
* Program execution always starts from `main()`
* Preprocessor directives are written before the main function
* Statements inside `main()` are executed sequentially

---

# Summary

Understanding the structure of a C program helps in writing clear and organized code.
It forms the foundation for all future programs in C.

---
