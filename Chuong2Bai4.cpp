#include <iostream>
using namespace std;

// Chương 2 bài 4
// Hàm tìm ước chung lớn nhất (GCD)
int UCLN(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Hàm tối giản phân số
void simplifyFraction(int& numerator, int& denominator) {
    int UCLNValue = UCLN(numerator, denominator);
    numerator /= UCLNValue;
    denominator /= UCLNValue;
}

