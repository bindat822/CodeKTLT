#include <stdio.h>
#include <ctype.h>

void inHoa(char* str) {
    int i = 0;
    bool newWord = true;

    while (str[i]) {
        if (isspace(str[i])) {
            newWord = true;
        }
        else if (newWord) {
            str[i] = toupper(str[i]);
            newWord = false;
        }
        else {
            str[i] = tolower(str[i]);
        }
        i++;
    }
}

int main() {
    char input[100];
    printf("Nhập chuỗi: ");
    fgets(input, 100, stdin);

    // Đổi ký tự đầu của mỗi từ thành in hoa
    inHoa(input);
    printf("Chuỗi sau khi chuẩn hóa: \"%s\"\n", input);

    return 0;
}
