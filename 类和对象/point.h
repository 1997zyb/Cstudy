#pragma once // 防止头文件重复包含
#include <iostream>
using namespace std;

//点类
class Point {
public:
	// 设置X
	void setX(int x);

	// 设置Y
	void setY(int y);

	// 获取X
	int getX();

	// 获取Y
	int getY();
private:
	int m_X; // x坐标
	int m_Y; // y坐标
};
