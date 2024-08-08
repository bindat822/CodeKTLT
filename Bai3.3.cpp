#include <stdio.h>
#include <string.h>

void xoaKhoangTrang(char* str) {
    int i = 0, j = 0;
    bool spaceFound = false;

    while (str[i]) {
        if (str[i] != ' ') {
            if (j != 0 && spaceFound) {
                str[j++] = ' ';
            }
            str[j++] = str[i];
            spaceFound = false;
        }
        else {
            spaceFound = true;
        }
        i++;
    }
    str[j] = '\0';
}

int main() {
    char input[100];
    printf("Nhập chuỗi: ");
    fgets(input, 100, stdin);

    // Xóa khoảng trắng thừa
    xoaKhoangTrang(input);
    printf("Chuỗi sau khi xóa khoảng trắng thừa: \"%s\"\n", input);

    return 0;
}
