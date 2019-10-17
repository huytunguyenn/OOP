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
	friend ostream& operator<<(ostream&, NVsanXuat);
	friend istream& operator>>(istream&, NVsanXuat&);
	virtual float tinhLuong();
};
#endif
