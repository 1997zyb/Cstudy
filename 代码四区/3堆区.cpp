#include <iostream>
using namespace std;

/*
	��C++����Ҫ����new�ڶ��������ڴ�
	new���ص���һ��ָ��
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