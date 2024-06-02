#include <iostream>
using namespace std;

/*
	结构体定义：
		struct 结构体名 {结构体成员列表};

	通过结构体创建变量有三种方式：
	（1）struct 结构体名 变量名;
	（2）struct 结构体名 变量名 = {成员值1,成员值2,...};
	（3）定义结构体时顺便创建变量;
*/

struct Student {
	string name;
	int age;
	int score;
};

// 第三种方式
//struct Student {
//	string name;
//	int age;
//	int score;
//}s3;
int main() {
	/*struct Student s1;
	s1.name = "张三";
	s1.age = 18;
	s1.score = 95;
	cout << "姓名是：" << s1.name << " 年龄是：" << s1.age << " 分数是：" << s1.score << endl;*/

	struct Student s2 = { "李四",19,80 }; // struct关键字可以省略
	cout << "姓名是：" << s2.name << " 年龄是：" << s2.age << " 分数是：" << s2.score << endl;
}