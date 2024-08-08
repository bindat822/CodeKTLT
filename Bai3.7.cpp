#include <stdio.h>
#include <string.h>

void chenKyTu(char* str, const char* word, int position) {
    char buffer[200];
    int length = strlen(str);

    if (position > length) {
        position = length;
    }

    strncpy(buffer, str, position);
    buffer[position] = '\0';
    strcat(buffer, word);
    strcat(buffer, str + position);

    strcpy(str, buffer);
}

int main() {
    char str[200];
    char word[50];
    int position;

    printf("Nhập chuỗi: ");
    fgets(str, 200, stdin);

    printf("Nhập từ cần chèn: ");
    fgets(word, 50, stdin);

    printf("Nhập vị trí chèn: ");
    scanf("%d", &position);

    // Xóa ký tự newline
    str[strcspn(str, "\n")] = '\0';
    word[strcspn(word, "\n")] = '\0';

    chenKyTu(str, word, position);

    printf("Chuỗi sau khi chèn: \"%s\"\n", str);

    return 0;
}
