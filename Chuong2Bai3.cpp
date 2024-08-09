#include <stdio.h>
#include <stdlib.h>

// 1. Hàm nhập mảng
void nhapMang(int* a, int n) {
    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &a[i]);
    }
}

// 1. Hàm xuất mảng
void xuatMang(int* a, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

// 2. Tìm max của mảng
int timMax(int* a, int n) {
    int max = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] > max) {
            max = a[i];
        }
    }
    return max;
}

// 2. Tìm min của mảng
int timMin(int* a, int n) {
    int min = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] < min) {
            min = a[i];
        }
    }
    return min;
}

// 3. Đếm số phần tử chẵn trong mảng
int demChan(int* a, int n) {
    int dem = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            dem++;
        }
    }
    return dem;
}

// 3. Đếm số phần tử lẻ trong mảng
int demLe(int* a, int n) {
    int dem = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 != 0) {
            dem++;
        }
    }
    return dem;
}

// 4. Tìm kiếm tuyến tính
int timKiemTuyenTinh(int* a, int n, int x) {
    for (int i = 0; i < n; i++) {
        if (a[i] == x) {
            return i; // Trả về vị trí tìm thấy
        }
    }
    return -1; // Không tìm thấy
}

// 4. Tìm kiếm nhị phân (mảng cần phải được sắp xếp trước)
int timKiemNhiPhan(int* a, int n, int x) {
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (a[mid] == x) {
            return mid;
        }
        else if (a[mid] < x) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }
    return -1;
}

// 5. Đếm số lần xuất hiện của phần tử x trong mảng
int demPhanTuX(int* a, int n, int x) {
    int dem = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == x) {
            dem++;
        }
    }
    return dem;
}

// Hàm sắp xếp mảng (để sử dụng cho tìm kiếm nhị phân)
void sapXepMang(int* a, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] > a[j]) {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

int main() {
    int n;
    printf("Nhap so luong phan tu trong mang: ");
    scanf("%d", &n);

    int* a = (int*)malloc(n * sizeof(int));

    nhapMang(a, n);
    printf("Mang vua nhap: ");
    xuatMang(a, n);

    printf("Gia tri lon nhat trong mang: %d\n", timMax(a, n));
    printf("Gia tri nho nhat trong mang: %d\n", timMin(a, n));

    printf("So phan tu chan trong mang: %d\n", demChan(a, n));
    printf("So phan tu le trong mang: %d\n", demLe(a, n));

    int x;
    printf("Nhap gia tri can tim: ");
    scanf("%d", &x);

    int viTriTuyenTinh = timKiemTuyenTinh(a, n, x);
    if (viTriTuyenTinh != -1) {
        printf("Tim thay %d tai vi tri %d (tim kiem tuyen tinh)\n", x, viTriTuyenTinh);
    }
    else {
        printf("Khong tim thay %d (tim kiem tuyen tinh)\n", x);
    }

    // Sắp xếp mảng trước khi thực hiện tìm kiếm nhị phân
    sapXepMang(a, n);
    printf("Mang sau khi sap xep: ");
    xuatMang(a, n);

    int viTriNhiPhan = timKiemNhiPhan(a, n, x);
    if (viTriNhiPhan != -1) {
        printf("Tim thay %d tai vi tri %d (tim kiem nhi phan)\n", x, viTriNhiPhan);
    }
    else {
        printf("Khong tim thay %d (tim kiem nhi phan)\n", x);
    }

    printf("So lan xuat hien cua %d trong mang: %d\n", x, demPhanTuX(a, n, x));

    free(a);
    return 0;
}
