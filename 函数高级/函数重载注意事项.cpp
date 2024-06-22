#include <iostream>
using namespace std;

/*
	注意事项：
	（1）当调用func(10);相当于加上了const
	（2）当调用func(a);相当于没加const
	（3）当函数重载时，最好不要有默认参数，否则有可能报错

*/

void func(int& a) {
	cout << "调用func(int& a)" << endl;
}
void func(const int& a) {
	cout << "调用func(const int& a)" << endl;
}


void func2(int a) {
	cout << "调用func2(int a)" << endl;
}
// 函数重载最好不要有默认参数
//void func2(int a,int b = 10) {
//	cout << "调用func2(int a,int b = 10)" << endl;
//}

int main() {
	//int a = 10;
	//func(a);
	//func(10); // 调用写const的那个函数
	func2(10);
}