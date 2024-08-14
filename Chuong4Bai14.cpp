#include <stdio.h>

int tinhAn(int n) {
    if (n == 1) return 1;
    int sum = 0;
    for (int i = 1; i < n; i++) {
        sum += tinhAn(i);
    }
    return n * sum;
}

int main() {
    int n;
    printf("Nhap n: ");
    scanf_s("%d", &n);

    printf("An = %d\n", tinhAn(n));

    return 0;
}
