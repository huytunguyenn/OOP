#include "NVcongNhan.h"

NVcongNhan::NVcongNhan()
{
	SOngay = 0;
}
NVcongNhan::~NVcongNhan()
{
}

void NVcongNhan::Xuat(){
	cout << "Ho va ten: " << HOten << endl;
	cout << "Ma: " << MA << endl;
	cout << "Dia chi: " << DIAchi << endl;
	cout << "Ngay sinh: " << NGAYsinh;
	cout << endl << "So ngay lam: " << SOngay;
}
void NVcongNhan::Nhap(){
	cout << "Nhap ho va ten: ";
	cin >> HOten;
	cout << "Nhap ma: ";
	cin >> MA;
	cout << "Dia chi: ";
	cin >> DIAchi;
	cout << "Ngay sinh: ";
	cin >> NGAYsinh;
	cout << "Nhap so ngay lam: ";
	cin >> SOngay;
}
float NVcongNhan::tinhLuong() {
	return SOngay * 300000;
}