
#include <iostream>
using namespace std;
int main()
{
    cout << "CHUONG TRINH TONG HIEU TICH THUONG" << endl;
    double a, b, tong, hieu, tich, thuong, tonghieutichthuong;
    cout << "nhap so a: "; cin >> a;
    cout << "nhap so b: "; cin >> b;

    tong = a + b;
    hieu = a - b;
    tich = a * b;
    thuong = a / b;
    tonghieutichthuong = a + b - a * b / a;

    cout << "Cong Thuc Phep Tong : " << a << "+" << b << "=" << tong << endl;
    cout << "Cong Thuc Phep Hieu : " << a << "-" << b << "=" << hieu << endl;
    cout << "Cong Thuc Phep Nhan : " << a << "*" << b << "=" << tich << endl;
    cout << "Cong Thuc Phep Thuong : " << a << ":" << b << "=" << thuong << endl;
    cout << "Cong Thuc Tat ca phep : " << a << "+" << b << "-" << a << "*" << b << ":" << a << "=" << tonghieutichthuong << endl;







    return 0;
}
