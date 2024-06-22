#include <iostream>
using namespace std;


//class Person {
//
//public:
//	// 设置姓名
//	void setName(string name) {
//		m_Name = name;
//	}
//	// 获取姓名
//	string getName() {
//		return m_Name;
//	}
//	// 获取年龄
//	int getAge() {
//		return m_Age;
//	}
//	// 设置年龄（0~150）
//	void setAge(int age) {
//		if (age < 0 || age>150) {
//			cout << "年龄输入有误，赋值失败" << endl;
//			return;
//		}
//		m_Age = age;
//	}
//	// 设置偶像
//	void setIdol(string idol) {
//		m_Idol = idol;
//	}
//
//private:
//	string m_Name; // 可读可写
//	int m_Age = 18; // 只读
//	string m_Idol; // 
//
//};
//int main() {
//	Person p;
//	// 设置姓名
//	p.setName("张三");
//	// 读取姓名（可读可写）
//	cout << "姓名：" << p.getName() << endl;
//
//
//	// 设置年龄
//	p.setAge(160);
//	// 读取年龄
//	cout << "年龄：" << p.getAge() << endl;
//
//	// 设置偶像（只写，不可读）
//	p.setIdol("周星驰");
//}