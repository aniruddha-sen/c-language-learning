# Operators in C

Operators are symbols used to perform operations on variables and values.

---

# Types of Operators

C provides several types of operators:

* Arithmetic Operators
* Relational Operators
* Logical Operators
* Assignment Operators
* Increment and Decrement Operators

---

# Arithmetic Operators

Arithmetic operators are used to perform basic mathematical operations.

| Operator | Description         |
| -------- | ------------------- |
| +        | Addition            |
| -        | Subtraction         |
| *        | Multiplication      |
| /        | Division            |
| %        | Modulus (remainder) |

### Example:

```c id="ex1"
int a = 10;
int b = 5;

int result = a + b;
```

---

# Relational Operators

Relational operators are used to compare two values.
They return either **true (1)** or **false (0)**.

| Operator | Description              |
| -------- | ------------------------ |
| ==       | Equal to                 |
| !=       | Not equal to             |
| >        | Greater than             |
| <        | Less than                |
| >=       | Greater than or equal to |
| <=       | Less than or equal to    |

### Example:

```c id="ex2"
int a = 10;
int b = 5;

if (a > b) {
    // condition is true
}
```

---

# Logical Operators

Logical operators are used to combine or modify conditions.

| Operator | Description                                         |
| -------- | --------------------------------------------------- |
| &&       | Logical AND (true if both conditions are true)      |
| \|\|       | Logical OR (true if at least one condition is true) |
| !        | Logical NOT (reverses the result)                   |

### Example:

```c id="ex3"
int a = 10;
int b = 5;

if (a > 0 && b > 0) {
    // both conditions are true
}

if (a > 0 || b < 0) {
    // at least one condition is true
}

if (!(a > b)) {
    // condition is reversed
}
```

---

# Assignment Operators

Assignment operators are used to assign values to variables.

| Operator | Description         |
| -------- | ------------------- |
| =        | Assign value        |
| +=       | Add and assign      |
| -=       | Subtract and assign |
| *=       | Multiply and assign |
| /=       | Divide and assign   |
| %=       | Modulus and assign  |

### Example:

```c id="ex4"
int a = 10;

a += 5;  // a becomes 15
a *= 2;  // a becomes 30
```

---

# Increment and Decrement Operators

These operators are used to increase or decrease a variable by 1.

| Operator | Description    |
| -------- | -------------- |
| ++       | Increment by 1 |
| --       | Decrement by 1 |

### Example:

```c id="ex5"
int a = 10;

a++;  // a becomes 11
a--;  // a becomes 10
```

---

# Summary

Operators are fundamental in C programming as they allow you to perform calculations, comparisons, and logical operations efficiently.

---
