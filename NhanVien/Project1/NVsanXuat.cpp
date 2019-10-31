#include "NVsanXuat.h"



NVsanXuat::NVsanXuat()
{
	SOsp = 0;
}
NVsanXuat::~NVsanXuat()
{
}
void NVsanXuat::Xuat() {
	cout << "Ho va ten: " << HOten << endl;
	cout << "Ma: " << MA << endl;
	cout << "Dia chi: " << DIAchi << endl;
	cout << "Ngay sinh: " << NGAYsinh;
	cout << endl << "So san pham: " << SOsp;
}
void NVsanXuat::Nhap() {
	cout << "Nhap ho va ten: ";
	cin >> HOten;
	cout << "Nhap ma: ";
	cin >> MA;
	cout << "Dia chi: ";
	cin >> DIAchi;
	cout << "Ngay sinh: ";
	cin >> NGAYsinh;
	cout << "Nhap so san pham: ";
	cin >> SOsp;
}
float NVsanXuat::tinhLuong() {
	return SOsp * 20000;
}