#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <limits.h>

// Hàm kiểm tra số nguyên tố
bool isPrime(int n) {
    if (n <= 1) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;
    for (int i = 3; i <= sqrt(n); i += 2) {
        if (n % i == 0) return false;
    }
    return true;
}

// Đếm số phần tử có giá trị là số nguyên tố trong mảng
int countPrimes(int a[], int n) {
    int count = 0;
    for (int i = 0; i < n; ++i) {
        if (isPrime(a[i])) {
            count++;
        }
    }
    return count;
}

// Kiểm tra từng chữ số của số có phải là số lẻ hay không
bool allOddDigits(int n) {
    n = abs(n); // Đảm bảo n là số dương
    while (n > 0) {
        if ((n % 10) % 2 == 0) return false;
        n /= 10;
    }
    return true;
}

// Xuất các phần tử mà từng chữ số của nó là số lẻ
void printOddDigitNumbers(int a[], int n) {
    printf("Các phần tử mà từng chữ số của nó là số lẻ: ");
    for (int i = 0; i < n; ++i) {
        if (allOddDigits(a[i])) {
            printf("%d ", a[i]);
        }
    }
    printf("\n");
}

// Tìm vị trí số lớn nhất (cuối cùng) của mảng
int lastMaxPosition(int a[], int n) {
    int maxPos = -1;
    int maxValue = INT_MIN;
    for (int i = 0; i < n; ++i) {
        if (a[i] >= maxValue) {
            maxValue = a[i];
            maxPos = i;
        }
    }
    return maxPos;
}

// Kiểm tra mảng có toàn là số chẵn không
bool allEven(int a[], int n) {
    for (int i = 0; i < n; ++i) {
        if (a[i] % 2 != 0) return false;
    }
    return true;
}

// Kiểm tra mảng có phải là dãy số chẵn lẻ xen kẽ không
bool alternatingEvenOdd(int a[], int n) {
    for (int i = 1; i < n; ++i) {
        if (a[i] % 2 == a[i - 1] % 2) return false;
    }
    return true;
}

int main() {
    int a[] = { 2, 3, 5, 7, 11, 24, 56, 101, 55, 22 }; // Ví dụ mảng
    int n = sizeof(a) / sizeof(a[0]);

    // Đếm số phần tử có giá trị là số nguyên tố trong mảng
    int primeCount = countPrimes(a, n);
    printf("Số phần tử là số nguyên tố trong mảng: %d\n", primeCount);

    // Xuất các phần tử mà từng chữ số của nó là số lẻ
    printOddDigitNumbers(a, n);

    // Tìm vị trí số lớn nhất (cuối cùng) của mảng
    int lastMaxPos = lastMaxPosition(a, n);
    printf("Vị trí số lớn nhất (cuối cùng) trong mảng: %d\n", lastMaxPos);

    // Kiểm tra mảng có toàn là số chẵn không
    if (allEven(a, n)) {
        printf("Mảng có toàn là số chẵn.\n");
    }
    else {
        printf("Mảng không có toàn là số chẵn.\n");
    }

    // Kiểm tra mảng có phải là dãy số chẵn lẻ xen kẽ không
    if (alternatingEvenOdd(a, n)) {
        printf("Mảng là dãy số chẵn lẻ xen kẽ.\n");
    }
    else {
        printf("Mảng không phải là dãy số chẵn lẻ xen kẽ.\n");
    }

    return 0;
}

