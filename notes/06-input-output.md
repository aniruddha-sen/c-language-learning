# Input and Output in C

Input and output operations in C are performed using standard library functions provided in the `stdio.h` header file.

---

# Input in C (`scanf`)

The `scanf()` function is used to take input from the user during program execution.

It reads formatted input from the standard input (keyboard).

### Syntax:

```c id="in1"
scanf("format_specifier", &variable);
```

### Example:

```c id="in2"
int x;

scanf("%d", &x);
```

---

# Output in C (`printf`)

The `printf()` function is used to display output on the screen.

It prints formatted data to the standard output (console).

### Syntax:

```c id="out1"
printf("format_specifier", value);
```

### Example:

```c id="out2"
printf("Hello World");
```

---

# Common Format Specifiers

| Specifier | Data Type |
| --------- | --------- |
| %d        | Integer   |
| %f        | Float     |
| %c        | Character |
| %s        | String    |

---

# Example Program

```c id="prog1"
#include <stdio.h>

int main() {
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Your age is: %d", age);

    return 0;
}
```

---

# Summary

* `scanf()` is used to take input from the user
* `printf()` is used to display output
* Format specifiers define the type of data being used

These functions form the foundation of interaction between the user and a C program.

---
