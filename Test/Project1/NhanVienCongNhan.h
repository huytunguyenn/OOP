#ifndef _CONGNHAN_H_
#define _CONGNHAN_H_	
#include "NhanVien.h"
class NhanVienCongNhan:public NhanVien
{
protected:
	int NgayLam;
	int Luong;
public:
	NhanVienCongNhan() {
		NgayLam = 0;
		Luong = 0;
	};
	
};
#endif

