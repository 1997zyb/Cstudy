#include <iostream>
using namespace std;

/*
	简化指针修改实参
*/

//void swap01(int a,int b){
//	int temp = a;
//	a = b;
//	b = temp;
//	cout << "里面a值是：" << a << endl;
//	cout << "里面b值是：" << b << endl;
//}

//void swap02(int *a, int *b) {
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//	cout << "里面a值是：" << *a << endl;
//	cout << "里面b值是：" << *b << endl;
//}

//void swap03(int& a, int& b) {
//	int temp = a;
//	a = b;
//	b = temp;
//	cout << "里面a值是：" << a << endl;
//	cout << "里面b值是：" << b << endl;
//}
//int main() {
//	int a = 10;
//	int b = 20;
//	//swap01(a, b); // 值传递
//	//swap02(&a, &b); // 地址传递
//	swap03(a, b); // 引用传递
//	cout << "外面a值是：" << a << endl;
//	cout << "外面b值是：" << b << endl;
//}