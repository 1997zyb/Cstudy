#include <iostream>
using namespace std;

/*
	ע�����
	��1��������func(10);�൱�ڼ�����const
	��2��������func(a);�൱��û��const
	��3������������ʱ����ò�Ҫ��Ĭ�ϲ����������п��ܱ���

*/

void func(int& a) {
	cout << "����func(int& a)" << endl;
}
void func(const int& a) {
	cout << "����func(const int& a)" << endl;
}


void func2(int a) {
	cout << "����func2(int a)" << endl;
}
// ����������ò�Ҫ��Ĭ�ϲ���
//void func2(int a,int b = 10) {
//	cout << "����func2(int a,int b = 10)" << endl;
//}

int main() {
	//int a = 10;
	//func(a);
	//func(10); // ����дconst���Ǹ�����
	func2(10);
}