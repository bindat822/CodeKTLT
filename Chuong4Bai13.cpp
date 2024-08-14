#include <stdio.h>

int tinhXn(int n);
int tinhYn(int n);


int tinhXn(int n) {
    if (n == 0) {
        return 1;
    }
    else {
        return tinhXn(n - 1) + tinhYn(n - 1);
    }
}

int tinhYn(int n) {
    if (n == 0) {
        return 0;
    }
    else {
        return 3 * tinhXn(n - 1) + 2 * tinhYn(n - 1);
    }
}

int main() {
    int n;

    printf("Nhap so nguyen n: ");
    scanf_s("%d", &n);

    printf("Gia tri Xn tai vi tri thu %d la: %d\n", n, tinhXn(n));
    printf("Gia tri Yn tai vi tri thu %d la: %d\n", n, tinhYn(n));

    return 0;
}