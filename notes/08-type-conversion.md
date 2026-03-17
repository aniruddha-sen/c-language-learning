# Type Conversion in C

Type conversion is the process of converting a value from one data type to another.

It allows programs to perform operations on different types of data correctly.

---

# Types of Type Conversion

There are **two main types**:

1. **Implicit Type Conversion (Type Casting / Type Promotion)**
2. **Explicit Type Conversion (Type Casting)**

---

## 1. Implicit Type Conversion (Type Promotion)

* Also called **type promotion**
* Performed automatically by the **compiler**
* Happens when **different data types are used in an expression**
* The compiler converts a smaller type to a larger type to prevent data loss

### Example:

```c
#include <stdio.h>

int main() {
    int a = 5;
    float b = 2.0;
    float result;

    result = a + b;  // 'a' is implicitly converted to float
    printf("Result = %f\n", result);

    return 0;
}
```

**Explanation:**

* `a` is `int` and `b` is `float`
* Compiler converts `a` → `float` automatically
* Ensures the addition produces a `float` result

---

## 2. Explicit Type Conversion (Type Casting)

* Also called **type casting**
* Performed manually by the programmer
* Allows conversion from **one data type to another using a cast operator**

### Syntax:

```c
(type) expression
```

### Example:

```c
#include <stdio.h>

int main() {
    float a = 5.7;
    int b;

    b = (int)a;  // explicitly converting float to int
    printf("b = %d\n", b);

    return 0;
}
```

**Explanation:**

* `(int)` converts the float value `5.7` into integer `5`
* Explicit conversion is controlled by the programmer

---

# Key Points

* Implicit conversion is **automatic**, safe, and done by the compiler
* Explicit conversion is **manual**, controlled by the programmer
* Type conversion is important to **avoid data loss** and **ensure correct calculations**

---

# Summary

Type conversion in C ensures **data compatibility between different types**.
Understanding implicit and explicit conversions is essential for **writing safe and efficient programs**.

---
