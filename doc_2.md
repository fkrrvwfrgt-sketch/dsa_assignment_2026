# Documentation: Task 2 - Infix to Postfix

## (a) Data Structure Definition
A `struct Stack` is used to manage integers (for evaluation) and characters (for conversion).

## (b) Function Descriptions
- `precedence()`: Returns an integer value representing the priority of operators (+, -, *, /).
- `infixToPostfix()`: Uses a stack to reorder operators based on their precedence.
- `evaluatePostfix()`: Uses an operand stack to calculate the final numeric result.

## (c) main() Organization
The `main()` method prompts the user to input an infix expression, calls the conversion function, displays the postfix result, and then displays the calculated value.

## (d) Sample Output
Enter infix expression: 2+3*4
Postfix Expression: 234*+

Evaluation Result: 14
