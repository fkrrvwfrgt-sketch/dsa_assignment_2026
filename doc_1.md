# Documentation: Task 1 - Balanced Parentheses

## (a) Data Structure Definition
The program defines a `struct Stack` containing:
- `char items[MAX]`: An array to store the brackets.
- `int top`: An index to track the top of the stack.

## (b) Function Descriptions
- `push()`: Adds a character to the top of the stack.
- `pop()`: Removes and returns the top character.
- `isMatching()`: Returns true if two characters form a valid pair (e.g., '{' and '}').
- `checkBalanced()`: Iterates through the string, pushing openers and popping for closers to check for symmetry.

## (c) main() Organization
The `main()` function initializes several test strings, passes them to the `checkBalanced` function, and prints the result to the console.

## (d) Sample Output
Expression: a + (b - c) * (d -> Not Balanced
Expression: m + [a - b * {c + d * (m)}] -> Balanced