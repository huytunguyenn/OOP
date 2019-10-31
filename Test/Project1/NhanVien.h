#ifndef _NHANVIEN_H_
#define _NHANVIEN_H_
#include <string>
#include <iostream>
using namespace std;
class NhanVien
{
public:
	string Ten;
	virtual float Input() = 0;
	virtual float TinhLuong() = 0;
};
#endif

