#include <list>
#include<vector>
#include <iostream>
using namespace std;
int main() 
{
	list<int> A;
	A.push_back(1);
	A.push_back(32);
	A.push_back(12);
	list<int>::iterator iter_name; // Khai báo con trỏ để duyệt
	for (iter_name = A.begin(); iter_name != A.end(); iter_name++) {
		cout << *iter_name << endl;
	}
	system("pause");
	return 0;
}