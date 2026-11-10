#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>

char changeCase(char c) {
    if (isupper(c)) {
        return tolower(c);
    }
    else if (islower(c)) {
        return toupper(c);
    }
    return c;
}

int main() {
    char input;

    printf("請輸入一個英文字母: ");
    scanf(" %c", &input);

    printf("轉換後的結果: %c\n", changeCase(input));

    return 0;
}