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
ostream& operator<<(ostream& os, NhanVien a) {
	cout << "Ho va ten: " << a.HOten << endl;
	cout << "Ma: " << a.MA << endl;
	cout << "Dia chi: " << a.DIAchi << endl;
	cout << "Ngay sinh: " << a.NGAYsinh;
	return os;
}
istream& operator>>(istream& is, NhanVien& a) {
	cout << "Nhap ho va ten: ";
	cin >> a.HOten;
	cout << "Nhap ma: ";
	cin >> a.MA;
	cout << "Dia chi: ";
	cin >> a.DIAchi;
	cout << "Ngay sinh: ";
	cin >> a.NGAYsinh;
	return is;
}