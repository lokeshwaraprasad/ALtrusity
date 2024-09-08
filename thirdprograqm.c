#include <stdio.h>
#include <stdlib.h>

int step(int num) {
    int prev = num % 10;
    num /= 10;

    while (num > 0) {
        int cur = num % 10;
        if (abs(cur - prev) != 1) {
            return 0;
        }
        prev = cur;
        num /= 10;
    }
    return 1;
}

int main() {
    int N, M;
    scanf("%d %d", &N, &M);

    for (int i = N; i <= M; i++) {
        if (step(i)) {
            printf("%d ", i);
        }
    }

    return 0;
}
