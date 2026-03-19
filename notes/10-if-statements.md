# If Statements in C

If statements are used to make decisions in a program based on conditions.

They allow the program to execute different blocks of code depending on whether a condition is true or false.

---

# Types of If Statements

C provides the following variations of `if` statements:

* if statement
* if-else statement
* else-if ladder
* nested if

---

# 1. if Statement

The `if` statement executes a block of code only when the condition is true.

### Syntax:

```c id="if_s1"
if (condition) {
    // code executes if condition is true
}
```

### Example:

```c id="if_s2"
int a = 10;

if (a > 0) {
    printf("Positive number");
}
```

---

# 2. if-else Statement

The `if-else` statement executes one block of code if the condition is true, and another block if it is false.

### Syntax:

```c id="if_s3"
if (condition) {
    // true block
} else {
    // false block
}
```

### Example:

```c id="if_s4"
int age = 16;

if (age >= 18) {
    printf("Eligible to vote");
} else {
    printf("Not eligible to vote");
}
```

---

# 3. else-if Ladder

The else-if ladder is used when multiple conditions need to be checked.

### Syntax:

```c id="if_s5"
if (condition1) {
    // block 1
} else if (condition2) {
    // block 2
} else {
    // default block
}
```

### Example:

```c id="if_s6"
int marks = 75;

if (marks >= 90) {
    printf("Grade A");
} else if (marks >= 60) {
    printf("Grade B");
} else {
    printf("Grade C");
}
```

---

# 4. Nested if

A nested if is an `if` statement inside another `if` statement.

### Syntax:

```c id="if_s7"
if (condition1) {
    if (condition2) {
        // nested block
    }
}
```

### Example:

```c id="if_s8"
int age = 20;
int hasID = 1;

if (age >= 18) {
    if (hasID) {
        printf("Allowed entry");
    }
}
```

---

# Key Points

* Conditions evaluate to **true (non-zero)** or **false (0)**
* Curly braces `{}` define blocks of execution
* else-if ladder helps in handling multiple conditions
* Nested if is useful for complex decision logic

---

# Summary

If statements form the foundation of decision making in C.
They allow programs to behave dynamically based on conditions and user input.

---
