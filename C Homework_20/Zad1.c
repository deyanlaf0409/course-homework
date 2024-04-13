#include <stdio.h>
#include <stdlib.h>

struct bracket {
    char symbol;
    struct bracket * prev;
} *sp = NULL;

int Push(char c) {
    struct bracket *ptr;
    ptr =(struct bracket*)malloc(sizeof(struct bracket));

    if (ptr == NULL) {
        return 0;
    }

    ptr->symbol = c;
    ptr->prev = sp;
    sp = ptr;
return 1;
}

int Pop(char c){
    char mirror;

    struct bracket* ptr;

    switch (c) {
        case ')':
            mirror = '(';
            break;
        case ']':
            mirror = '[';
            break;
        case '}':
            mirror = '{';
            break;
    }

    if (sp != NULL && sp->symbol == mirror) {
        ptr = sp;
        sp = sp->prev;
        free(ptr);
        return 1;
    }
    else {
        return 0;
    }
}

int main() {
    char expr[30] = "{()}";
    int n = strlen(expr);
    char c;
    int flag = 0;
    int i;

    for (i = 0; i < n; i++) {
        c = expr[i];

        switch (c) {
            case '{':
                flag = Push(c);
                break;
            case '[':
                flag = Push(c);
                break;
            case '(':
                flag = Push(c);
                break;
            case '}':
                flag = Pop(c);
                break;
            case ']':
                flag = Pop(c);
                break;
            case ')':
                flag = Pop(c);
                break;
        }
    }

    if (flag == 0) {
        printf("unbalanced\n");
    }
    else {
        printf("balanced\n");
    }
}


