#include <stdio.h>
#include <string.h>

void lietKeSoLanXuatHien(const char* str) {
    int freq[256] = { 0 };

    while (*str) {
        freq[(unsigned char)(*str)]++;
        str++;
    }

    for (int i = 0; i < 256; i++) {
        if (freq[i] > 0) {
            printf("Ký tự '%c' xuất hiện %d lần.\n", i, freq[i]);
        }
    }
}

int main() {
    char str[100];

    printf("Nhập chuỗi: ");
    fgets(str, 100, stdin);

    // Xóa ký tự newline
    str[strcspn(str, "\n")] = '\0';

    lietKeSoLanXuatHien(str);

    return 0;
}
