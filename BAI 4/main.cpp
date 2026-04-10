#include <iostream>
#include "GioPhutGiay.h"
using namespace std;

int main()
{
    GioPhutGiay t;

    cout << "Nhap thoi gian\n";
    t.Nhap();

    cout << "Thoi gian ban dau: ";
    t.Xuat();
    cout << endl;

    //Tính thời gian sau khi cộng 1 giây
    GioPhutGiay tTiepTheo = t.TinhCongThemMotGiay();
    cout << "Thoi gian sau khi cong 1 giay: ";
    tTiepTheo.Xuat();

    return 0;
}
