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

	int arr[10] = {11,12,13,14,15,16,17,18,19,20};
	int i = 0;
	while (i<10)
	{
		printf("%d\n", arr[i]);
		i++;
	}
	return 0;
}
