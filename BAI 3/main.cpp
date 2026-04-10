#include <iostream>
#include "SoPhuc.h"
using namespace std;

int main()
{
    SoPhuc sp1, sp2, kq;

    cout << "
    Nhao so phuc 1:\n";
    sp1.Nhap();

    cout << "\n Nhap so phuc 2:\n";
    sp2.Nhap();


    cout << "\n So phuc da nhap: \n";
    cout << "So phuc 1: ";
    sp1.Xuat();
    cout << endl;
    cout << "So phuc 2: ";
    sp2.Xuat();
    cout << endl;

    cout << "\n Ket qua tinh toan \n";

    kq = sp1.Tong(sp2);
    cout << "Tong 2 so phuc : ";
    kq.Xuat();
    cout << endl;

    kq = sp1.Hieu(sp2);
    cout << "Hieu 2 so phuc : ";
    kq.Xuat();
    cout << endl;

    kq = sp1.Tich(sp2);
    cout << "Tich 2 so phuc : ";
    kq.Xuat();
    cout << endl;

    kq = sp1.Thuong(sp2);
    cout << "Thuong 2 so phuc: ";
    kq.Xuat();
    cout << endl;

    return 0;
}
