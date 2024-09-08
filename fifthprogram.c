#include <stdio.h>

int toys(int prices[], int n, int money) {
    int max_toys = 0;
    int current_sum = 0;
    int start = 0;

    for (int end = 0; end < n; end++) {
        current_sum += prices[end];

        while (current_sum > money) {
            current_sum -= prices[start];
            start++;
        }

        if (end - start + 1 > max_toys) {
            max_toys = end - start + 1;
        }
    }

    return max_toys;
}

int main() {
    int n;
    scanf("%d", &n);

    int prices[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &prices[i]);
    }

    int money;
    scanf("%d", &money);

    printf("%d\n", toys(prices, n, money));

    return 0;
}
