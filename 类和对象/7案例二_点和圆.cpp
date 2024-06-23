#include <iostream>
using namespace std;

#include "point.h"
#include "circle.h"
/* �жϵ��Բ�Ĺ�ϵ*/
// ����
//class Point {
//public:
//	// ����X
//	void setX(int x) {
//		m_X = x;
//	}
//	// ����Y
//	void setY(int y) {
//		m_Y = y;
//	}
//	// ��ȡX
//	int getX() {
//		return m_X;
//	}
//	// ��ȡY
//	int getY() {
//		return m_Y;
//	}
//private:
//	int m_X; // x����
//	int m_Y; // y����
//};
// Բ��
//class Circle {
//public:
//	// ���ð뾶
//	void setR(int r) {
//		m_R = r;
//	}
//	// ��ȡ�뾶
//	int getR() {
//		return m_R;
//	}
//	// ����Բ��
//	void setCenter(Point center) {
//		m_Center = center;
//	}
//	// ��ȡԲ��
//	Point getCenter() {
//		return  m_Center;
//	}
//private:
//	int m_R; // �뾶
//
//	//����һ������Ϊ�����еĳ�Ա
//	Point m_Center; // Բ��
//};
void isInCircle(Circle& c, Point& p) {
	// ��������֮��ľ����ƽ��
	int distance =
	(c.getCenter().getX() - p.getX())* (c.getCenter().getX() - p.getX()) + 
		(c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY());
	// ����뾶��ƽ��
	int rDistance = c.getR() * c.getR();

	//�жϹ�ϵ
	if (distance == rDistance) {
		cout << "����Բ��" << endl;
	}
	else if (distance > rDistance) {
		cout << "����Բ��" << endl;
	}
	else if (distance < rDistance) {
		cout << "����Բ��" << endl;
	}
}
int main() {
	// ����Բ
	Circle c;
	c.setR(10); // �뾶
	Point center;
	center.setX(10); // ����Բ��Բ��x����
	center.setY(0); // ����Բ��Բ��y����
	c.setCenter(center);


	// ������
	Point p;
	p.setX(5); // ���õ��x����
	p.setY(50); // ���õ��y����


	//�жϹ�ϵ
	isInCircle(c, p);
}