#include <iostream>
using namespace std;


struct Student {
	string name;
	int age;
	int score;
};
void print(const Student *stu) {
	cout << "�����ǣ�" << stu->name << " �����ǣ�" << stu->age << " �����ǣ�" << stu->score << endl;
}
int main() {
	Student stu = { "��ʩ",15,100 };
	print(&stu);
}