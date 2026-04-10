#include <iostream>
#include "SoPhuc.h"
using namespace std;

void SoPhuc::Nhap() {
    cout << "Nhap phan thuc: ";
    cin >> iThuc;
    cout << "Nhap phan ao: ";
    cin >> iAo;
}

void SoPhuc::Xuat() {
    // iThuc + -iAo > iThuc - iAo
    if (iAo < 0)
    {
        cout << iThuc << " - " << -iAo << "i";
    }
    else
    {
        cout << iThuc << " + " << iAo << "i";
    }
}

SoPhuc SoPhuc::Tong(SoPhuc sp) {
    SoPhuc kq;
    kq.iThuc = iThuc + sp.iThuc;
    kq.iAo = iAo + sp.iAo;
    return kq;
}

SoPhuc SoPhuc::Hieu(SoPhuc sp) {
    SoPhuc kq;
    kq.iThuc = iThuc - sp.iThuc;
    kq.iAo = iAo - sp.iAo;
    return kq;
}

SoPhuc SoPhuc::Tich(SoPhuc sp) {
    SoPhuc kq;
    // Công thức:(a+bi) * (c+di) = (ac - bd) + (ad + bc)i
    kq.iThuc = (iThuc * sp.iThuc) - (iAo * sp.iAo);
    kq.iAo = (iThuc * sp.iAo) + (iAo * sp.iThuc);
    return kq;
}

SoPhuc SoPhuc::Thuong(SoPhuc sp) {
    SoPhuc kq;
    // Nhân tử và mẫu cho số phức liên hợp của mẫu
    double mauSo = (sp.iThuc * sp.iThuc) + (sp.iAo * sp.iAo);

    if (mauSo != 0)
    {
        kq.iThuc = ((iThuc * sp.iThuc) + (iAo * sp.iAo)) / mauSo;
        kq.iAo = ((iAo * sp.iThuc) - (iThuc * sp.iAo)) / mauSo;
    }
    else
    {
        cout << "Mau so bang 0, khong the thuc hien phep chia" << endl;
        kq.iThuc = 0;
        kq.iAo = 0;
    }
    return kq;
}
