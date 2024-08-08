#include <stdio.h>
#include <string.h>

void xoaTu(char* str, const char* word) {
    char* pos;
    int len = strlen(word);

    while ((pos = strstr(str, word)) != NULL) {
        memmove(pos, pos + len, strlen(pos + len) + 1);
    }
}

int main() {
    char str[100];
    char word[50];

    printf("Nhập chuỗi ban đầu: ");
    fgets(str, 100, stdin);

    printf("Nhập từ cần xóa: ");
    fgets(word, 50, stdin);

    // Xóa ký tự newline
    str[strcspn(str, "\n")] = '\0';
    word[strcspn(word, "\n")] = '\0';

    xoaTu(str, word);

    printf("Chuỗi sau khi xóa: \"%s\"\n", str);

    return 0;
}
