#include <iostream>
using namespace std;


/*
	public：        成员 类内可以访问，类外也可以访问
	producted：     成员 类内可以访问，类外不可以访问
	private：       成员 类内可以访问，类外不可以访问
*/
//class Person {
//public:
//	//公共权限
//	string m_Name;
//protected:
//	//保护权限
//	string m_Car;
//private:
//	// 私有权限
//	int m_Password;
//public:
//	void func() {
//		m_Name = "张三";
//		m_Car = "奔驰";
//		m_Password = 123456;
//	}
//};
//int main() {
//	Person p1;
//	p1.m_Name = "李四";
//	//p1.m_Car = "劳斯莱斯"; // 类外不可访问，报错
//	//p1.m_Password = 111111; // 类外不可访问，报错
//
//}