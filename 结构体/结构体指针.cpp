#include <iostream>
using namespace std;



/*
	���ò�����`->`����ͨ���ṹ��ָ����ʽṹ������
*/

struct Student {
	string name;
	int age;
	int score;
};
int main() {
	Student student = { "��",17,90 };
	struct Student* p = &student; // ͨ��ָ��ָ��ṹ�����

	// ����
	cout << p->name << endl;
}