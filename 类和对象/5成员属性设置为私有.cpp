#include <iostream>
using namespace std;


//class Person {
//
//public:
//	// ��������
//	void setName(string name) {
//		m_Name = name;
//	}
//	// ��ȡ����
//	string getName() {
//		return m_Name;
//	}
//	// ��ȡ����
//	int getAge() {
//		return m_Age;
//	}
//	// �������䣨0~150��
//	void setAge(int age) {
//		if (age < 0 || age>150) {
//			cout << "�����������󣬸�ֵʧ��" << endl;
//			return;
//		}
//		m_Age = age;
//	}
//	// ����ż��
//	void setIdol(string idol) {
//		m_Idol = idol;
//	}
//
//private:
//	string m_Name; // �ɶ���д
//	int m_Age = 18; // ֻ��
//	string m_Idol; // 
//
//};
//int main() {
//	Person p;
//	// ��������
//	p.setName("����");
//	// ��ȡ�������ɶ���д��
//	cout << "������" << p.getName() << endl;
//
//
//	// ��������
//	p.setAge(160);
//	// ��ȡ����
//	cout << "���䣺" << p.getAge() << endl;
//
//	// ����ż��ֻд�����ɶ���
//	p.setIdol("���ǳ�");
//}