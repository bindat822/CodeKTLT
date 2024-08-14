#include <stdio.h>

int fibonacciDeQuy(int n) {
    if (n <= 1) return n;
    return fibonacciDeQuy(n - 1) + fibonacciDeQuy(n - 2);
}

int fibonacciKhongDeQuy(int n) {
    int a = 0, b = 1, c;
    if (n <= 1) return n;
    for (int i = 2; i < n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int timFibonacciLonNhoHonN(int n) {
    int a = 0, b = 1, c = 1;
    while (c < n) {
        a = b;
        b = c;
        c = a + b;
    }
    return b;
}
int main() {
    int n;
    printf("Nhap n: ");
    scanf_s("%d", &n);

    printf("So Fibonacci lon nhat nho hon %d (de quy) la: %d\n", n, fibonacciKhongDeQuy(n));
    printf("So Fibonacci lon nhat nho hon %d (khu de quy) la: %d\n", n, timFibonacciLonNhoHonN(n));

    return 0;
}
