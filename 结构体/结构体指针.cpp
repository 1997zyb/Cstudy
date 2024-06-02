#include <iostream>
using namespace std;



/*
	利用操作符`->`可以通过结构体指针访问结构体属性
*/

struct Student {
	string name;
	int age;
	int score;
};
int main() {
	Student student = { "玉环",17,90 };
	struct Student* p = &student; // 通过指针指向结构体变量

	// 访问
	cout << p->name << endl;
}