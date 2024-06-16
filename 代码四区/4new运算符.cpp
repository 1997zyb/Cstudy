#include <iostream>
using namespace std;


//int* func() {
//	int* p = new int(10);
//	return p;
//}
//void test01() {
//	int* p = func();
//	cout << *p << endl;
//	// 堆区的数据，是由程序员管理开辟，程序员管理释放
//	delete p;
//}
//// 开辟一个数组
//void test02() {
//	int* arr = new int[10]; // 代表数组有10个元素
//	for (int i = 0; i < 10; i++)
//	{
//		arr[i] = i + 100;
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		cout << arr[i] << endl;
//	}
//	// 释放，释放数组时，要加上[]才行
//	delete[] arr;
//};
//int main() {
//	//test01();
//	test02();
//}