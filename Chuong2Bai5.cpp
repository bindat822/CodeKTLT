#include <iostream>
using namespace std;
// Chương 2 bài 5
// Hàm nhập phân số và tối giản
void inputAndSimplifyFraction(int& numerator, int& denominator) {
    cout << "Nhập tử số: ";
    cin >> numerator;
    cout << "Nhập mẫu số: ";
    cin >> denominator;
    simplifyFraction(numerator, denominator);
}

// Hàm in phân số
void printFraction(int numerator, int denominator) {
    cout << numerator << "/" << denominator;
}

// Hàm cộng hai phân số
void addFractions(int num1, int den1, int num2, int den2, int& numResult, int& denResult) {
    numResult = num1 * den2 + num2 * den1;
    denResult = den1 * den2;
    simplifyFraction(numResult, denResult);
}

// Hàm trừ hai phân số
void subtractFractions(int num1, int den1, int num2, int den2, int& numResult, int& denResult) {
    numResult = num1 * den2 - num2 * den1;
    denResult = den1 * den2;
    simplifyFraction(numResult, denResult);
}

// Hàm nhân hai phân số
void multiplyFractions(int num1, int den1, int num2, int den2, int& numResult, int& denResult) {
    numResult = num1 * num2;
    denResult = den1 * den2;
    simplifyFraction(numResult, denResult);
}

// Hàm chia hai phân số
void divideFractions(int num1, int den1, int num2, int den2, int& numResult, int& denResult) {
    numResult = num1 * den2;
    denResult = den1 * num2;
    simplifyFraction(numResult, denResult);
}

int main() {
    int num1, den1, num2, den2;
    int numResult, denResult;
    int choice;

    do {
        cout << "------------------MENU------------------" << endl;
        cout << "========================================" << endl;
        cout << endl;
        cout << "1. Nhap vao 2 phan so\n";
        cout << "2. Tinh tong cua 2 phan so\n";
        cout << "3. Tinh hieu cua 2 phan so\n";
        cout << "4. Tinh tich cua 2 phan so\n";
        cout << "5. Tinh thuong cua 2 phan so\n";
        cout << "6. Thoat\n";
        cout << "Chon tuy chon cua ban: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Nhap phan so thu nhat:\n";
            inputAndSimplifyFraction(num1, den1);
            cout << "Nhap phan so thu hai:\n";
            inputAndSimplifyFraction(num2, den2);
            break;

        case 2:
            addFractions(num1, den1, num2, den2, numResult, denResult);
            cout << "Tong cua hai phan so: ";
            printFraction(numResult, denResult);
            cout << endl;
            break;

        case 3:
            subtractFractions(num1, den1, num2, den2, numResult, denResult);
            cout << "Hieu cua hai phan so: ";
            printFraction(numResult, denResult);
            cout << endl;
            break;

        case 4:
            multiplyFractions(num1, den1, num2, den2, numResult, denResult);
            cout << "Tich cua hai phan so: ";
            printFraction(numResult, denResult);
            cout << endl;
            break;

        case 5:
            divideFractions(num1, den1, num2, den2, numResult, denResult);
            cout << "Thuong cua hai phan so: ";
            printFraction(numResult, denResult);
            cout << endl;
            break;

        case 6:
            cout << "Thoát chương trình.\n";
            break;

        default:
            cout << "Lựa chọn không hợp lệ. Vui lòng chọn lại.\n";
        }
    } while (choice != 6);

    return 0;
}
