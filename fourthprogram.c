#include <stdio.h>
#include <string.h>

void cost(char *abc, int d) {
    int len = strlen(abc);
    int keep = len - d;
    char stack[len];
    int top = -1;

    for (int i = 0; i < len; i++) {
        while (top >= 0 && stack[top] > abc[i] && d > 0) {
            top--;
            d--;
        }
        if (top < keep - 1) {
            stack[++top] = abc[i];
        }
    }

    stack[keep] = '\0';

    int i = 0;
    while (i < keep && stack[i] == '0') {
        i++;
    }

    if (i == keep) {
        printf("0\n");
    } else {
        printf("%s\n", stack + i);
    }
}

int main() {
    char abc[52];
    int d;

    scanf("%s", abc);
    scanf("%d", &d);

    cost(abc, d);

    return 0;
}
