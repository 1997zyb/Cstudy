#include <iostream>
using namespace std;

/*
	�����������ķ���ֵ��
	��1����Ҫ���ؾֲ�����������
	��2���������ÿ�����Ϊ��ֵ
*/

int& test01() {
	int a = 10; // ջ��
	return a;
}

int& test02() {
	static int a = 10; // ȫ����
	return a;
}
int main() {
	int& ref = test01();
	cout << "ref��" << ref << endl;

	int& ref2 = test02();
	cout << "ref2��" << ref2 << endl;

	test02() = 1000;
	cout << "ref2��" << ref2 << endl;
}