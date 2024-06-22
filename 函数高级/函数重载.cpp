#include <iostream>
using namespace std;

/*
	函数名可以重复，提高复用性
	函数重载满足的条件：
	（1）同一个作用域下
	（2）函数名称相同
	（3）函数参数类型不同、或者个数不同、或者顺序不同
*/

//void func() {
//	cout << "func的调用" << endl;
//}
//void func(int a) {
//	cout << "func(int a)的调用" << endl;
//}
//void func(double a) {
//	cout << "func(double a)的调用" << endl;
//}

//void func(double a, int b) {
//	cout << "func(double a, int b)的调用" << endl;
//
//}
//void func(int a, double b) {
//	cout << "func(int a, double b)的调用" << endl;
//}
//int main() {
//	/*func();
//	func(3.14);*/
//	//func(3.14, 3);
//	func(3, 3.14);
//}