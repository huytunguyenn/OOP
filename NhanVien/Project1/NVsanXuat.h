#ifndef _NVSANXUAT_H_
#define _NVSANXUAT_H_
#include "NhanVien.h"
class NVsanXuat: public NhanVien
{
protected:
	int SOsp;
public:
	NVsanXuat();
	virtual ~NVsanXuat();
	virtual void Nhap();
	virtual void Xuat();
	virtual float tinhLuong();
};
#endif
