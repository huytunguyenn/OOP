#include "NhanVien.h"



NhanVien::NhanVien()
{
	HOten = '\0';
	MA = '\0';
	DIAchi = '\0';
	NGAYsinh = '\0';
}
NhanVien::~NhanVien()
{
}	
void NhanVien::Xuat() {
	cout << "Ho va ten: " << HOten << endl;
	cout << "Ma: " << MA << endl;
	cout << "Dia chi: " << DIAchi << endl;
	cout << "Ngay sinh: " << NGAYsinh;
}
void NhanVien::Nhap() {
	cout << "Nhap ho va ten: ";
	cin >> HOten;
	cout << "Nhap ma: ";
	cin >> MA;
	cout << "Dia chi: ";
	cin >> DIAchi;
	cout << "Ngay sinh: ";
	cin >> NGAYsinh;
}