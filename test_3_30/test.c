#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main() {
//	int a = 10; // 向内存申请4个字节，存储10；
//
//	//&a; // 取地址
//	// printf("%p\n", &a);
//
//
//	// 存放指针（地址）的变量就是指针变量
//	int* pi = &a; // pi就是指针变量
//
//	//*pi，解引用操作符，通过pi中存放的地址，找到p所指向的对象，*p就是p指向的对象
//	printf("%d\n",*pi);
//
//	*pi = 100;
//	printf("%d\n",a);
//
//
//	// 指针变量的大小取决于一个地址存放时需要多大空间
//	// 32位机器上：32bit位 - 4byte
//	// 64位机器上：64bit位 - 8byte
//	printf("%zu\n",sizeof(int*));
//	printf("%zu\n",sizeof(char*));
//	printf("%zu\n",sizeof(short*));
//	printf("%zu\n",sizeof(float*));
//	printf("%zu\n",sizeof(double*));
//
//
//	//char s = 'w';
//	//char* pc = &s; // pc就是指针变量
//	return 0;
//}


struct Stu {
	// 成员
	char name[20];
	int age;
	char sex[10];
	char tel[12];
};
print(struct Stu* ps) {
	printf("%s %d %s %s\n", (*ps).name, (*ps).age, (*ps).sex, (*ps).tel);
	printf("%s %d %s %s\n", ps->name, ps->age, ps->sex, ps->tel);
}
int main() {

	struct Stu s = { "张三",20,"男","18339696454"};
	//printf("%s %d %s %s\n",s.name,s.age,s.sex,s.tel);
	print(&s);
	return 0;
}