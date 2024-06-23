#include <iostream>
#include "point.h"
using namespace std;

// 设置X  Point::作用域下的函数
void Point::setX(int x) {
	m_X = x;
}
// 设置Y
void Point::setY(int y) {
	m_Y = y;
}
// 获取X
int Point::getX() {
	return m_X;
}
// 获取Y
int Point::getY() {
	return m_Y;
}