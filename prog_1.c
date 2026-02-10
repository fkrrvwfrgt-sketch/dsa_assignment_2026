#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

struct Stack {
    int top;
    char items[MAX];
};

void push(struct Stack* s, char c) {
    if (s->top == MAX - 1) return;
    s->items[++(s->top)] = c;
}

char pop(struct Stack* s) {
    if (s->top == -1) return '\0';
    return s->items[(s->top)--];
}

int isMatching(char a, char b) {
    if (a == '(' && b == ')') return 1;
    if (a == '{' && b == '}') return 1;
    if (a == '[' && b == ']') return 1;
    return 0;
}

int checkBalanced(char* exp) {
    struct Stack s;
    s.top = -1;
    for (int i = 0; i < strlen(exp); i++) {
        if (exp[i] == '(' || exp[i] == '{' || exp[i] == '[') {
            push(&s, exp[i]);
        } else if (exp[i] == ')' || exp[i] == '}' || exp[i] == ']') {
            if (s.top == -1 || !isMatching(pop(&s), exp[i])) return 0;
        }
    }
    return s.top == -1;
}

int main() {
    char* tests[] = {"a + (b - c) * (d", "m + [a - b * {c + d * (m)}]", "a - (b - c)"};
    for (int i = 0; i < 3; i++) {
        printf("Expression: %s -> %s\n", tests[i], checkBalanced(tests[i]) ? "Balanced" : "Not Balanced");
    }
    return 0;
}