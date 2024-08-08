#include <stdio.h>
#include <string.h>

void timKiem(const char* fullName, const char* name) {
    char* found = strstr(fullName, name);
    if (found != NULL) {
        printf("Tên \"%s\" đã nhập đúng.\n", name);
    }
    else {
        printf("Tên \"%s\" đã nhập sai.\n", name);
    }
}

int main() {
    char fullName[100];
    char name[50];

    printf("Nhập họ tên đầy đủ: ");
    fgets(fullName, 100, stdin);

    printf("Nhập tên cần tìm: ");
    fgets(name, 50, stdin);

    // Xóa ký tự newline
    fullName[strcspn(fullName, "\n")] = '\0';
    name[strcspn(name, "\n")] = '\0';

    timKiem(fullName, name);

    return 0;
}
