#include <stdio.h>
#include <string.h>

int countSpaces(char* str) {
    int count = 0;
    for (int i = 0; str[i]; i++) {
        if (str[i] == ' ') {
            count++;
        }
    }
    return count;
}

int main() {
    char input[] = "Huynh Tan Dat";
    int numSpaces = countSpaces(input);
    printf("Số khoảng trắng: %d\n", numSpaces);
    return 0;
}