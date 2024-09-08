#include <stdio.h>

void printUniqueElements(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        int count = 0;
        for (int j = 0; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        if (count == 1) {
            printf("%d ", arr[i]);
        }
    }
}

int main() {
    int arr[] = {1, 2, 3, 2, 1, 4};
    int size = sizeof(arr) / sizeof(arr[0]);

    printUniqueElements(arr, size);

    return 0;
}
