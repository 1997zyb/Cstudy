#include <iostream>
using namespace std;

//class Cube {
//public:
//	//���ó�
//	void setL(int l) {
//		m_L = l;
//	}
//	//��ȡ��
//	int getL() {
//		return m_L;
//	}
//	// ���ÿ�
//	void setW(int w) {
//		m_W = w;
//	}
//	// ��ȡ��
//	int getW() {
//		return m_W;
//	}
//	// ���ø�
//	void setH(int h) {
//		m_H = h;
//	}
//	// ��ȡ��
//	int getH() {
//		return m_H;
//	}
//	// ��ȡ���
//	int getS() {
//		return 2 * (m_L * m_W + m_L * m_H + m_W * m_H);
//	}
//	// ��ȡ���
//	int getV() {
//		return m_L * m_W * m_H;
//	}
//
//	// ���ó�Ա�����ж������������Ƿ���ͬ
//	bool isSameByClass(Cube& c) {
//		return m_L == c.getL() && m_W == c.getW() && m_H == c.getH();
//	}
//private:
//	int m_L; // ��
//	int m_W; // ��
//	int m_H; // ��
//};
//// ����ȫ�ֺ����ж� �����������Ƿ����
//bool isSame(Cube& c1, Cube& c2) {
//	return c1.getL() == c2.getL() && c1.getW() == c2.getW() && c1.getH() == c2.getH();
//}
//int main() {
//	Cube c1;
//	c1.setL(10);
//	c1.setW(10);
//	c1.setH(10);
//	cout << "C1������ǣ�" << c1.getS() << endl;
//	cout << "C1������ǣ�" << c1.getV() << endl;
//
//	Cube c2;
//	c2.setL(10);
//	c2.setW(10);
//	c2.setH(10);
//
//	//// ����ȫ�ֺ����ж�
//	//if (isSame(c1, c2)) {
//	//	cout << "������������ȫ��ͬ" << endl;
//	//}
//	//else {
//	//	cout << "���������岻��ȫ��ͬ" << endl;
//	//}
//
//	// ���ó�Ա�����ж�
//	if (c1.isSameByClass(c2)) {
//		cout << "������������ȫ��ͬ" << endl;
//	}
//	else {
//		cout << "���������岻��ȫ��ͬ" << endl;
//	}
//}