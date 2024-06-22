#include <iostream>
using namespace std;


/*
	在C++中，struct和class唯一的区别就在于默认的访问权限不同
	struct默认权限为公共
	class默认权限为私有
*/
//class C1 {
//	int m_A; // 默认权限是私有
//};
//struct C2 {
//	int m_A; // 默认权限是公共
//};
//int main() {
//	C1 c1;
//	//c1.m_A = 100; // 报错
//	C2 c2;
//	c2.m_A = 100; // 正确
//}