#include <iostream>
using namespace std;

/*
	�ṹ�嶨�壺
		struct �ṹ���� {�ṹ���Ա�б�};

	ͨ���ṹ�崴�����������ַ�ʽ��
	��1��struct �ṹ���� ������;
	��2��struct �ṹ���� ������ = {��Աֵ1,��Աֵ2,...};
	��3������ṹ��ʱ˳�㴴������;
*/

struct Student {
	string name;
	int age;
	int score;
};

// �����ַ�ʽ
//struct Student {
//	string name;
//	int age;
//	int score;
//}s3;
int main() {
	/*struct Student s1;
	s1.name = "����";
	s1.age = 18;
	s1.score = 95;
	cout << "�����ǣ�" << s1.name << " �����ǣ�" << s1.age << " �����ǣ�" << s1.score << endl;*/

	struct Student s2 = { "����",19,80 }; // struct�ؼ��ֿ���ʡ��
	cout << "�����ǣ�" << s2.name << " �����ǣ�" << s2.age << " �����ǣ�" << s2.score << endl;
}