#include "NVcongNhan.h"
#include"NVquanLy.h"
#include "NVsanXuat.h"
#include "NhanVien.h"
int main() {
	NVquanLy qlnv;
	qlnv.themNhanVien();
	qlnv.xuatNhanVien();
	float luongquanly = qlnv.tinhLuong();
	cout <<endl<< luongquanly<<endl;
	system("pause");
	return 0;
}