#include <iostream>
using namespace std;

#include "point.h"
#include "circle.h"
/* 判断点和圆的关系*/
// 点类
//class Point {
//public:
//	// 设置X
//	void setX(int x) {
//		m_X = x;
//	}
//	// 设置Y
//	void setY(int y) {
//		m_Y = y;
//	}
//	// 获取X
//	int getX() {
//		return m_X;
//	}
//	// 获取Y
//	int getY() {
//		return m_Y;
//	}
//private:
//	int m_X; // x坐标
//	int m_Y; // y坐标
//};
// 圆类
//class Circle {
//public:
//	// 设置半径
//	void setR(int r) {
//		m_R = r;
//	}
//	// 获取半径
//	int getR() {
//		return m_R;
//	}
//	// 设置圆心
//	void setCenter(Point center) {
//		m_Center = center;
//	}
//	// 获取圆心
//	Point getCenter() {
//		return  m_Center;
//	}
//private:
//	int m_R; // 半径
//
//	//让另一个类作为本类中的成员
//	Point m_Center; // 圆心
//};
void isInCircle(Circle& c, Point& p) {
	// 计算两点之间的距离的平方
	int distance =
	(c.getCenter().getX() - p.getX())* (c.getCenter().getX() - p.getX()) + 
		(c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY());
	// 计算半径的平方
	int rDistance = c.getR() * c.getR();

	//判断关系
	if (distance == rDistance) {
		cout << "点在圆上" << endl;
	}
	else if (distance > rDistance) {
		cout << "点在圆外" << endl;
	}
	else if (distance < rDistance) {
		cout << "点在圆内" << endl;
	}
}
int main() {
	// 创建圆
	Circle c;
	c.setR(10); // 半径
	Point center;
	center.setX(10); // 设置圆的圆心x坐标
	center.setY(0); // 设置圆的圆心y坐标
	c.setCenter(center);


	// 创建点
	Point p;
	p.setX(5); // 设置点的x坐标
	p.setY(50); // 设置点的y坐标


	//判断关系
	isInCircle(c, p);
}