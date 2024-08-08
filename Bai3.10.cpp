#include <stdio.h>
#include <string.h>

char timSoLanXuatHien(const char* str) {
    int freq[256] = { 0 };

    while (*str) {
        freq[(unsigned char)(*str)]++;
        str++;
    }

    int maxFreq = 0;
    char maxChar = '\0';

    for (int i = 0; i < 256; i++) {
        if (freq[i] > maxFreq) {
            maxFreq = freq[i];
            maxChar = i;
        }
    }

    return maxChar;
}

int main() {
    char str[100];

    printf("Nhập chuỗi: ");
    fgets(str, 100, stdin);

    // Xóa ký tự newline
    str[strcspn(str, "\n")] = '\0';

    char maxChar = timSoLanXuatHien(str);

    if (maxChar != '\0') {
        printf("Ký tự xuất hiện nhiều nhất là '%c'.\n", maxChar);
    }
    else {
        printf("Không có ký tự nào xuất hiện.\n");
    }

    return 0;
}
