
#define _CRT_SECURE_NO_WARNINGS
// std：标准
// i：input输入
// o：output输出
// 运行代码：Ctrl + F5
#include <stdio.h>

// printf是一个库函数，专门用来打印数据
//int main() {
//	printf("%d\n", 100);
//	printf("%zu\n", sizeof(char)); // 1    8bit
//	printf("%zu\n", sizeof(short)); // 2    16bit
//	printf("%zu\n", sizeof(int)); // 4    32bit
//	printf("%zu\n", sizeof(long)); // 4    32bit
//	printf("%zu\n", sizeof(long long)); // 8    64bit
//	printf("%zu\n", sizeof(float)); // 4    32bit
//	printf("%zu\n", sizeof(double)); // 8    64bit
//	return 0;
//}

// char         字符数据类型
// short        短整型
// int          整型
// long         长整型
// long long    更长的整型
// float        单精度浮点型
// double       双精度浮点型


//  变量分为：
// 局部变量：大括号内部定义的变量
// 全局变量：大括号外部定义的变量
//int main() {
//	//short age = 20; // 年龄
//	//int hight = 180; // 身高
//	//float weight = 80.6; // 体重
//	//double prise = 66.62;
//	int a = 10;
//	printf("a=%d\n", a); // 当全局变量和局部变量名字相同的情况下，局部优先
//	return 0;
//}



//int main() {
//	int num1 = 10;
//	int num2 = 20;
//
//	// 输入两个整数
//	scanf("%d %d", &num1,&num2);
//	int sum = num1 + num2;
//	printf("%d\n", sum);
//	return 0;
//}


// 变量作用域和生命周期
// 局部变量的作用域是变量所在的局部范围
// 全局变量的作用域是整个工程

// 生命周期
// 局部变量的生命周期是：进入作用域生命周期开始，出作用域生命周期结束
// 全局变量的生命周期是：整个程序的生命周期

int main() {
	return 0;
}