#include <iostream>
using namespace std;

//class Cube {
//public:
//	//设置长
//	void setL(int l) {
//		m_L = l;
//	}
//	//获取长
//	int getL() {
//		return m_L;
//	}
//	// 设置宽
//	void setW(int w) {
//		m_W = w;
//	}
//	// 获取宽
//	int getW() {
//		return m_W;
//	}
//	// 设置高
//	void setH(int h) {
//		m_H = h;
//	}
//	// 获取高
//	int getH() {
//		return m_H;
//	}
//	// 获取面积
//	int getS() {
//		return 2 * (m_L * m_W + m_L * m_H + m_W * m_H);
//	}
//	// 获取体积
//	int getV() {
//		return m_L * m_W * m_H;
//	}
//
//	// 利用成员函数判断两个立方体是否相同
//	bool isSameByClass(Cube& c) {
//		return m_L == c.getL() && m_W == c.getW() && m_H == c.getH();
//	}
//private:
//	int m_L; // 长
//	int m_W; // 宽
//	int m_H; // 高
//};
//// 利用全局函数判断 两个立方体是否相等
//bool isSame(Cube& c1, Cube& c2) {
//	return c1.getL() == c2.getL() && c1.getW() == c2.getW() && c1.getH() == c2.getH();
//}
//int main() {
//	Cube c1;
//	c1.setL(10);
//	c1.setW(10);
//	c1.setH(10);
//	cout << "C1的面积是：" << c1.getS() << endl;
//	cout << "C1的体积是：" << c1.getV() << endl;
//
//	Cube c2;
//	c2.setL(10);
//	c2.setW(10);
//	c2.setH(10);
//
//	//// 利用全局函数判断
//	//if (isSame(c1, c2)) {
//	//	cout << "两个立方体完全相同" << endl;
//	//}
//	//else {
//	//	cout << "两个立方体不完全相同" << endl;
//	//}
//
//	// 利用成员函数判断
//	if (c1.isSameByClass(c2)) {
//		cout << "两个立方体完全相同" << endl;
//	}
//	else {
//		cout << "两个立方体不完全相同" << endl;
//	}
//}