
#include <iostream>
using namespace std;

double tinhtong(double a, double b) {
    return a + b;
}
double tinhhieu(double a, double b) {
    return a - b;
}
double tinhtich(double a, double b) {
    return a * b;
}
double tinhthuong(double a, double b) {
    return round(a / b);
}

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

    cout << "Cong Thuc Phep Tong Binh Thuong: " << a << "+" << b << "=" << tong << endl;
    cout << "Cong Thuc Phep Tong Binh Duong : " << a << "+" << b << "=" << tinhtong(a,b) << endl;
    cout << "Cong Thuc Phep Hieu Binh Thuong : " << a << "-" << b << "=" << hieu << endl;
    cout << "Cong Thuc Phep Hieu Dang Cap : " << a << "-" << b << "=" << tinhhieu(a,b) << endl;
    cout << "Cong Thuc Phep Nhan Binh Thuong : " << a << "*" << b << "=" << tich << endl;
    cout << "Cong Thuc Phep Nhan PRO : " << a << "*" << b << "=" << tinhtich(a,b) << endl;
    cout << "Cong Thuc Phep Thuong Binh Thuong : " << a << ":" << b << "=" << thuong << endl;
    cout << "Cong Thuc Phep Thuong VIP : " << a << ":" << b << "=" << tinhthuong(a,b) << endl;
    cout << "Cong Thuc Tat ca phep : " << a << "+" << b << "-" << a << "*" << b << ":" << a << "=" << tonghieutichthuong << endl;

    

    return 0;
}
