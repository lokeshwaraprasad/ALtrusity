#include <stdio.h>
#include <string.h>

int dictionaryContains(char *word, char dictionary[][20], int n) {
    for (int i = 0; i < n; i++) {
        if (strcmp(dictionary[i], word) == 0) {
            return 1;
        }
    }
    return 0;
}

int wordBreak(char *s, char dictionary[][20], int n) {
    int len = strlen(s);
    for (int i = 1; i <= len; i++) {
        char temp[20];
        strncpy(temp, s, i);
        temp[i] = '\0';
        
        if (dictionaryContains(temp, dictionary, n)) {
            if (wordBreak(s + i, dictionary, n) || i == len) {
                return 1;
            }
        }
    }
    return 0;
}

int main() {
    int n = 6;
    char dictionary[6][20] = { "i", "like", "sam", "sung", "samsung", "mobile" };
    char s[] = "ilikesamsung";

    if (wordBreak(s, dictionary, n)) {
        printf("1\n");
    } else {
        printf("0\n");
    }

    return 0;
}
