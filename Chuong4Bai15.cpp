#include <stdio.h>

int tinhYnDeQuy(int n) {
    if (n == 1) return 1;
    if (n == 2) return 2;
    if (n == 3) return 3;
    return tinhYnDeQuy(n - 1) + 2 * tinhYnDeQuy(n - 2) + 3 * tinhYnDeQuy(n - 3);
}

int tinhYnKhongDeQuy(int n) {
    int y[100] = { 1, 2, 3 };
    for (int i = 3; i < n; i++) {
        y[i] = y[i - 1] + 2 * y[i - 2] + 3 * y[i - 3];
    }
    return y[n - 1];
}

int main() {
    int n, choice;
    printf("Chon phuong phap (1 - De quy, 2 - Khong de quy): ");
    scanf_s("%d", &choice);

    printf("Nhap n: ");
    scanf_s("%d", &n);

    switch (choice) {
    case 1:
        printf("Yn (de quy) = %d\n", tinhYnDeQuy(n));
        break;
    case 2:
        printf("Yn (khong de quy) = %d\n", tinhYnKhongDeQuy(n));
        break;
    default:
        printf("Lua chon khong hop le.\n");
        break;
    }

    return 0;
}
