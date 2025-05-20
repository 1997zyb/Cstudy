#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef unsigned int uint;

// 声明外部符号
extern int g_val;


// define定义标识符常量
#define NUM 100
//define定义宏，参数是无类型的
#define ADD(x,y) ((x)+(y))







//test() {
//	static int a = 1;
//	a++;
//	printf("%d\n", a);
//}

int main() {
	// typedef 类型定义
	/*unsigned int num = 10;
	uint num2 = 20;*/

	// static 修饰变量和函数
	// 修饰局部变量：称为静态局部变量
	// static修饰局部变量时，局部变量出了作用域，不销毁的。
	// 本质上，static改变了变量的存储位置
	// 修饰全局变量：称为静态全局变量
	// 修饰函数：称为静态函数

	//int i = 0;
	/*while (i<10)
	{
		test();
		i++;
	}*/


	int a = 10, b = 20;
	int sum = ADD(a, b);
	printf("%d\n", sum);
	printf("%d\n", g_val);
	register int num = 10; // 建议这个变量存放在寄存器中
	return 0;
}