#include <stdio.h>
#include <string.h>

void catChuoi(const char* fullName, char* middleName, char* lastName) {
    int length = strlen(fullName);
    int lastSpace = -1;

    for (int i = 0; i < length; i++) {
        if (fullName[i] == ' ') {
            lastSpace = i;
        }
    }

    if (lastSpace != -1) {
        strncpy(middleName, fullName, lastSpace);
        middleName[lastSpace] = '\0';
        strcpy(lastName, fullName + lastSpace + 1);
    }
    else {
        strcpy(middleName, "");
        strcpy(lastName, fullName);
    }
}

int main() {
    char fullName[100];
    char middleName[100];
    char lastName[50];

    printf("Nhập họ tên đầy đủ: ");
    fgets(fullName, 100, stdin);

    // Xóa ký tự newline
    fullName[strcspn(fullName, "\n")] = '\0';

    catChuoi(fullName, middleName, lastName);

    printf("Chuỗi họ lót: \"%s\"\n", middleName);
    printf("Chuỗi tên: \"%s\"\n", lastName);

    return 0;
}
