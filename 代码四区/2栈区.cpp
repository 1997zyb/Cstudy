#include <iostream>
using namespace std;

/*
由编译器管理和释放
不要返回局部变量的地址
*/

//int* func() {
//	int a = 10; // 栈区数据在函数执行完毕后自动释放
//	return &a;
//}
//int main() {
//	int* p = func();
//	cout << *p << endl;
//	cout << "hello" << endl;
//	cout << *p << endl; // x64改为x86
//}