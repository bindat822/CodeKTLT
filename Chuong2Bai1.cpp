#include <stdio.h>
#include <math.h>
#include <stdbool.h>

// Hàm kiểm tra số nguyên tố
bool KTSoNguyento(int n) {
    if (n <= 1) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;
    for (int i = 3; i <= sqrt(n); i += 2) {
        if (n % i == 0) return false;
    }
    return true;
}

// Kiểm tra mảng có chứa toàn bộ số nguyên tố hay không
bool AllSoNguyen(int a[], int n) {
    for (int i = 0; i < n; ++i) {
        if (!KTSoNguyento(a[i])) return false;
    }
    return true;
}

// Kiểm tra mảng có đối xứng hay không
bool KTDoiXung(int a[], int n) {
    for (int i = 0; i < n / 2; ++i) {
        if (a[i] != a[n - i - 1]) return false;
    }
    return true;
}

// Kiểm tra mảng có tăng dần hay giảm dần hay không tăng hay không giảm
const char* KTTangGiamdan(int a[], int n) {
    bool isIncreasing = true, isDecreasing = true;
    for (int i = 1; i < n; ++i) {
        if (a[i] < a[i - 1]) isIncreasing = false;
        if (a[i] > a[i - 1]) isDecreasing = false;
    }
    if (isIncreasing) return "Tang Dan";
    if (isDecreasing) return "Giam Dan";
    return "Khong tang khong giam";
}

int main() {
    int a[] = { 2, 3, 5, 7, 11 }; // Ví dụ mảng
    int n = sizeof(a) / sizeof(a[0]);

    // Kiểm tra mảng có chứa toàn bộ số nguyên tố hay không
    if (AllSoNguyen(a, n)) {
        printf("Mang chua so nguyen.\n");
    }
    else {
        printf("Mang khong chua so nguyen to nao.\n");
    }

    // Kiểm tra mảng có đối xứng hay không
    if (KTDoiXung(a, n)) {
        printf("Mang doi xung.\n");
    }
    else {
        printf("Mang khong doi xung.\n");
    }

    // Kiểm tra mảng có tăng dần hay giảm dần hay không tăng hay không giảm
    printf("Mang %s.\n", KTTangGiamdan(a, n));

    return 0;
}
