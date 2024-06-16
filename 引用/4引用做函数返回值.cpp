#include <iostream>
using namespace std;

/*
	引用做函数的返回值：
	（1）不要返回局部变量的引用
	（2）函数调用可以作为左值
*/

int& test01() {
	int a = 10; // 栈区
	return a;
}

int& test02() {
	static int a = 10; // 全局区
	return a;
}
int main() {
	int& ref = test01();
	cout << "ref是" << ref << endl;

	int& ref2 = test02();
	cout << "ref2是" << ref2 << endl;

	test02() = 1000;
	cout << "ref2是" << ref2 << endl;
}