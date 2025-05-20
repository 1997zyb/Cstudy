#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

// 1.字面常量
// 例：3，3.14，'w'，"hellow"

// 2.const修饰的常变量
// 例：const int a = 10;

// 3.#define定义的标识符常量
#define MAX 100
#define STR "ZHANG"

// 4.枚举常量
enum Color { RED, GREEN, BLUE };
enum Sex { MALE, FEMALE, SECRET };

//int main() {
//	//const int a = 10;
//	/*printf("%d\n", MAX);
//	printf("%s\n", STR);*/
//	enum Color c = RED;
//	return 0;
//}





//int main() {
//	// 字符串
//	// 字符串的结束标志是一个\0的转义字符，在计算字符串长度的时候\0是结束标志，
//	// 不算做字符串内容
//	char ch[] = "zhang";
//	char ch2[] = {'z','h','a','n','g','\0','y'}; // 遇到\0，会停下来
//	printf("%s\n", ch);
//	printf("%s\n", ch2);
//
//
//	int len = strlen(ch2);
//	printf("%d\n", len);
//
// }


int Max(int x,int y) {
	if (x > y) {
		return x;
	}
	else {
		return y;
	}
}

int main() {
	// %d 打印整型；%c 打印字符；%s 打印字符串；%f 打印float类型的数据
	// %lf 打印double类型的数据

	// \n
	//printf("abc\nd\n");

	// \0
	//printf("abc\0d");

	// \?

	// \' \"
	//printf("%c\n",'\'');

	// \\
	printf("abc\\0ef");

	// \a
	//printf("\a");

	// \t
	//printf("abc\tdefg");

	// \v
	//printf("abc\vdefg");

	// \ddd 8进制的130；
	//printf("\131");

	// \xdd
	//printf("%c\n",'\x63');


	/*int input = 0;
	printf("要好好学习吗（1/0）？");
	scanf("%d", &input);
	if (input == 1) {
		printf("好offer\n");
	}
	else {
		printf("卖红薯\n");
	}*/

	//int arr[20] = { 1,2,3};  // 全数组初始化为'\0'
	//int len = sizeof(arr)/sizeof(arr[0]);
	//printf("%d\n",len );
	//char arr[10] = {'z','y','b'}; // 不完全初始化
	//int len = strlen(arr);
	//printf("%d\n", len);


	/*char ch[10] = "zhangyabo\0";
	printf("%d\n", strlen(ch));

	int a = 0, b = 0;
	scanf("%d%d", &a, &b);
	int r = Max(a, b);
	printf("%d\n", r);*/
	/*int i = 0;
	while (i<10)
	{
		printf("%d\n", arr[i]);
		i++;
	}*/


	// 除号两端都是整数的时候，执行的是整数除法；
	// 如果两端只要有一个浮点数，执行的就是浮点数的除法
	//int a = 7 / 2;
	//float b = 7 / 2.0;
	//printf("%d\n", a);
	//printf("%.1f\n", b);

	//// 取模操作符的两个操作符只能是整数
	//int c = 7 % 2; // 取模
	//printf("%d\n",c);





	int a = 10;
	/*a = a + 3;
	a += 3;*/
	//int b = a++; // 先赋值，后++
	int b = ++a; // 先++，后赋值
	printf("%d\n", a); // 11
	printf("%d\n", b); // 11

	int c = (int)3.14; // 强制转换
	printf("%d\n", c);
	return 0;
}
