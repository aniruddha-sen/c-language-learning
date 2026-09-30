# Ternary Operator in C

## 1. Ternary Operator

### Discussion

The ternary operator is a conditional operator in C. It is used to make
a decision between two expressions based on a condition.

It is called the **ternary operator** because it works with three
operands:

1.  A condition
2.  An expression when the condition is true
3.  An expression when the condition is false

It is useful when a simple `if-else` decision needs to be written in a
shorter form.

### Syntax

``` c
condition ? expression_if_true : expression_if_false;
```

The condition is checked first.

-   If the condition is true, `expression_if_true` is selected.
-   If the condition is false, `expression_if_false` is selected.

### Example

#### Using if-else

``` c
int number = 10;
int result;

if (number > 0)
    result = 1;
else
    result = 0;
```

#### Using ternary operator

``` c
int number = 10;
int result;

result = (number > 0) ? 1 : 0;
```

Both examples produce the same result.

### Example: Find Maximum of Two Numbers

``` c
#include <stdio.h>

int main()
{
    int a = 25;
    int b = 40;
    int maximum;

    maximum = (a > b) ? a : b;

    printf("Maximum number: %d\n", maximum);

    return 0;
}
```

Output:

``` text
Maximum number: 40
```

------------------------------------------------------------------------

## 2. Nested Ternary Operator

### Discussion

A **nested ternary operator** means using one ternary operator inside
another ternary operator.

It is useful when there are more than two possible conditions or
results.

For example, when finding the maximum of three numbers, a nested ternary
operator can be used to compare the numbers.

Nested ternary operators should be used carefully. If the logic becomes
too complicated, `if-else` statements may be easier to understand.

### Syntax

``` c
condition1 ? expression1 :
condition2 ? expression2 :
expression3;
```

The first condition is checked.

-   If `condition1` is true, `expression1` is selected.
-   Otherwise, `condition2` is checked.
-   If `condition2` is true, `expression2` is selected.
-   Otherwise, `expression3` is selected.

### Example: Find Maximum of Three Numbers

``` c
#include <stdio.h>

int main()
{
    int a = 25;
    int b = 40;
    int c = 30;
    int maximum;

    maximum = (a > b && a > c) ? a :
              (b > c) ? b : c;

    printf("Maximum number: %d\n", maximum);

    return 0;
}
```

Output:

``` text
Maximum number: 40
```

### Another Example: Positive, Negative, or Zero

``` c
#include <stdio.h>

int main()
{
    int number = -5;

    printf("%s\n",
           (number > 0) ? "Positive" :
           (number < 0) ? "Negative" :
                          "Zero");

    return 0;
}
```

Output:

``` text
Negative
```

### Important Note

The ternary operator is best suited for short and simple conditional
decisions.

For complex decision-making logic, `if-else` statements are generally
easier to read and maintain.
