#include <iostream>
using namespace std;


struct Student {
	string name;
	int age;
	int score;
};
void print(const Student *stu) {
	cout << "姓名是：" << stu->name << " 年龄是：" << stu->age << " 分数是：" << stu->score << endl;
}
int main() {
	Student stu = { "西施",15,100 };
	print(&stu);
}