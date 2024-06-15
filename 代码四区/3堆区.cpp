#include <iostream>
using namespace std;

/*
	在C++中主要利用new在堆区开辟内存
	new返回的是一个指针
*/
int* func() {
	//int a = 10;
	//return &a;
	int* p = new int(10);
	return p;
}
int main() {
	int* p = func();
	cout << *p << endl;
}