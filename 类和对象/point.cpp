#include <iostream>
#include "point.h"
using namespace std;

// ����X  Point::�������µĺ���
void Point::setX(int x) {
	m_X = x;
}
// ����Y
void Point::setY(int y) {
	m_Y = y;
}
// ��ȡX
int Point::getX() {
	return m_X;
}
// ��ȡY
int Point::getY() {
	return m_Y;
}