#include <stdio.h>
#include <math.h>

// Hàm tính số hạng thứ n của cấp số cộng
int tinhSoHangThuN_CSC(int n, int a, int d) {
    int Un = a + (n - 1) * d;
    return Un;
}

// Hàm tính số hạng thứ n của cấp số nhân
int tinhSoHangThuN_CSM(int n, int a, int q) {
    int Un = a * pow(q, n - 1);
    return Un;
}

// Hàm tính tổng từ 1 đến n
int sum1(int n) {
    if (n <= 0) return 0;
    return n + sum1(n - 1);
}

// Hàm tính tổng 1 + 1/2 + 1/3 + ... + 1/n
double sum2(int n) {
    if (n == 1) return 1.0;
    return 1.0 / n + sum2(n - 1);
}

// Hàm tính tổng 1*2 + 2*3 + 3*4 + ... + n*(n + 1)
int sum3(int n) {
    if (n <= 0) return 0;
    return n * (n + 1) + sum3(n - 1);
}

int main() {
    int choice, n, a, d, q;

    printf("Chon bai toan:\n");
    printf("1 - Tinh S1 (Tong tu 1 den n)\n");
    printf("2 - Tinh S2 (Tong 1 + 1/2 + 1/3 + ... + 1/n)\n");
    printf("3 - Tinh S3 (Tong 1*2 + 2*3 + 3*4 + ... + n*(n + 1))\n");
    printf("4 - Tinh so hang thu n cua cap so cong\n");
    printf("5 - Tinh so hang thu n cua cap so nhan\n");
    printf("Nhap lua chon: ");
    scanf_s("%d", &choice);

    switch (choice) {
    case 1:
        printf("Nhap n: ");
        scanf_s("%d", &n);
        printf("S(n) = 1 + 2 + 3 + ... + %d = %d\n", n, sum1(n));
        break;
    case 2:
        printf("Nhap n: ");
        scanf_s("%d", &n);
        printf("S(n) = 1 + 1/2 + 1/3 + ... + 1/%d = %.6f\n", n, sum2(n));
        break;
    case 3:
        printf("Nhap n: ");
        scanf_s("%d", &n);
        printf("S(n) = 1*2 + 2*3 + 3*4 + ... + %d*(%d + 1) = %d\n", n, n, sum3(n));
        break;
    case 4:
        printf("Nhap n, so hang dau a va cong sai d: ");
        scanf_s("%d %d %d", &n, &a, &d);
        printf("So hang thu %d cua cap so cong la: %d\n", n, tinhSoHangThuN_CSC(n, a, d));
        break;
    case 5:
        printf("Nhap n, so hang dau a va cong boi q: ");
        scanf_s("%d %d %d", &n, &a, &q);
        printf("So hang thu %d cua cap so nhan la: %d\n", n, tinhSoHangThuN_CSM(n, a, q));
        break;
    default:
        printf("Lua chon khong hop le.\n");
        break;
    }

    return 0;
}
