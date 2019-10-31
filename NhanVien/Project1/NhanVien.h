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
	virtual void Nhap();
	virtual void Xuat();
	virtual float tinhLuong()=0;
};
#endif

