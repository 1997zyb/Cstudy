#include <iostream>
using namespace std;


/*
	空指针：指针变量指向内存中编号为0的空间的指针
	用途：初始化指针变量
	注意：空指针指向的内存是不能访问的





	0~255之间的内存编号是系统占用的，因此不可访问
*/
//int main() {
//	// 空指针
//	int* p = NULL;
//	//*p = 100; // 直接访问报错
//	//cout << *p << endl;
//
//	int a = 10;
//	p = &a; // 让p指向a
//	*p = 100; // 不报错
//	cout << *p << endl;
//	cout << a << endl;
//
//
//	 //野指针
//	int* p = (int *)0x1100;
//	cout << *p << endl; // 访问报错
//
//}