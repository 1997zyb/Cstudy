#pragma once // ��ֹͷ�ļ��ظ�����
#include <iostream>
using namespace std;

//����
class Point {
public:
	// ����X
	void setX(int x);

	// ����Y
	void setY(int y);

	// ��ȡX
	int getX();

	// ��ȡY
	int getY();
private:
	int m_X; // x����
	int m_Y; // y����
};
