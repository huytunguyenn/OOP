#ifndef _NHANVIEN_H_
#define _NHANVIEN_H_
#include <string>
#include <iostream>
using namespace std;
class NhanVien
{
protected:
	string HOten;
	string MA;
	string DIAchi;
	string NGAYsinh;
public:
	NhanVien();
	virtual ~NhanVien();
	//friend ostream& operator<<(ostream& os, NhanVien a);
	//friend istream& operator>>(istream& is, NhanVien& a);
	virtual float tinhLuong();
};
#endif

