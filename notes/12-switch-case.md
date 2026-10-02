# Switch-Case Statement in C

## 1. About Switch-Case

The `switch-case` statement is a decision-making statement in C.

It is used when we have multiple fixed choices and want to execute one block of code according to the value of an expression.

The `switch` expression is compared with each `case`.

- If a case matches, its statements are executed.
- `break` stops the switch statement after the matching case.
- `default` is executed when no case matches.

---

## 2. Syntax of Switch-Case

```c
switch (expression)
{
    case constant1:
        statements;
        break;

    case constant2:
        statements;
        break;

    default:
        statements;
}
```

---

## 3. Example

A simple example of a switch-case statement:

```c
#include <stdio.h>

int main()
{
    int choice;

    printf("Enter your choice (1-2): ");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
            printf("You selected One.\n");
            break;

        case 2:
            printf("You selected Two.\n");
            break;

        default:
            printf("Invalid choice.\n");
    }

    return 0;
}
```

### Output

```text
Enter your choice (1-2): 2
You selected Two.
```

---

## Important Points

- `switch-case` is useful for multiple fixed choices.
- Each `case` represents a possible value.
- `break` is generally used after each case.
- `default` handles invalid or unmatched choices.
- `switch-case` is commonly used in menu-driven programs.
