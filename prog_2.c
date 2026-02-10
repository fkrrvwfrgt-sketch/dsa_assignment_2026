#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

#define MAX 100

struct Stack {
    int top;
    int items[MAX];
};

void push(struct Stack* s, int val) {
    s->items[++(s->top)] = val;
}

int pop(struct Stack* s) {
    return s->items[(s->top)--];
}

int precedence(char ch) {
    if (ch == '+' || ch == '-') return 1;
    if (ch == '*' || ch == '/') return 2;
    if (ch == '^') return 3;
    return 0;
}

// 1. Convert Infix to Postfix
void infixToPostfix(char* infix, char* postfix) {
    struct Stack s;
    s.top = -1;
    int j = 0;
    for (int i = 0; infix[i]; i++) {
        if (isalnum(infix[i])) {
            postfix[j++] = infix[i];
        } else if (infix[i] == '(') {
            push(&s, '(');
        } else if (infix[i] == ')') {
            while (s.top != -1 && s.items[s.top] != '(')
                postfix[j++] = pop(&s);
            pop(&s);
        } else {
            while (s.top != -1 && precedence(s.items[s.top]) >= precedence(infix[i]))
                postfix[j++] = pop(&s);
            push(&s, infix[i]);
        }
    }
    while (s.top != -1) postfix[j++] = pop(&s);
    postfix[j] = '\0';
}

// 2. Evaluate Postfix
int evaluatePostfix(char* postfix) {
    struct Stack s;
    s.top = -1;
    for (int i = 0; postfix[i]; i++) {
        if (isdigit(postfix[i])) {
            push(&s, postfix[i] - '0');
        } else {
            int val2 = pop(&s);
            int val1 = pop(&s);
            switch (postfix[i]) {
                case '+': push(&s, val1 + val2); break;
                case '-': push(&s, val1 - val2); break;
                case '*': push(&s, val1 * val2); break;
                case '/': push(&s, val1 / val2); break;
            }
        }
    }
    return pop(&s);
}

int main() {
    char infix[MAX], postfix[MAX];
    printf("Enter infix expression (e.g., 2+3*4): ");
    scanf("%s", infix);

    infixToPostfix(infix, postfix);
    printf("Postfix Expression: %s\n", postfix);
    printf("Evaluation Result: %d\n", evaluatePostfix(postfix));

    return 0;

}
