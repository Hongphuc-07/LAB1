#include <iostream>
#include <iomanip>
#include "GioPhutGiay.h"
using namespace std;

void GioPhutGiay::Nhap() {
    do {
        cout << "Nhap Gio (0-23): ";
        cin >> iGio;
    } while (iGio < 0 || iGio > 23);

    do {
        cout << "Nhap Phut (0-59): ";
        cin >> iPhut;
    } while (iPhut < 0 || iPhut > 59);

    do {
        cout << "Nhap Giay (0-59): ";
        cin >> iGiay;
    } while (iGiay < 0 || iGiay > 59);
}

void GioPhutGiay::Xuat() {
    //Sử dụng setfill('0') và setw(2) để luôn in ra 2 chữ số
    cout << setfill('0') << setw(2) << iGio << ":"
         << setfill('0') << setw(2) << iPhut << ":"
         << setfill('0') << setw(2) << iGiay;
}

GioPhutGiay GioPhutGiay::TinhCongThemMotGiay() {
    GioPhutGiay kq;
    kq.iGio = iGio;
    kq.iPhut = iPhut;
    kq.iGiay = iGiay + 1; //Cộng thêm 1 giây

    //Xử lý tràn thời gian
    if (kq.iGiay > 59) {
        kq.iGiay = 0;
        kq.iPhut++;

        if (kq.iPhut > 59) {
            kq.iPhut = 0;
            kq.iGio++;

            if (kq.iGio > 23) { //Qua ngày mới
                kq.iGio = 0;
            }
        }
    }

    return kq;
}
