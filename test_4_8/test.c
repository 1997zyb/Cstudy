#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//int i = 1;
	// while循环中，break是用于永久的终止循环
	// contniue跳过本次循环后面的代码，直接去判断部分，进行下一次循环
	//while (i <= 10)
	//{
	//	i++;
	//	if (i == 5) {
	//		//break;
	//		continue; // 跳过continue后面的代码，继续循环
	//	}
	//	printf("%d\n", i);
	//}



	/*int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		putchar(ch);
	}*/

	// 举个例子
	/*char password[20] = {0};
	printf("请输入密码：>");
	scanf("%s", password);

	int ch = 0;
	while ((ch = getchar()) != '\n')
	{
		;
	}

	printf("请确认密码（Y/N）：>");
	int ret = getchar();
	if ('Y' == ret) {
		printf("YES\n");
	}
	else {
		printf("NO\n");
	}*/




	/*char ch = '\0';
	while ((ch = getchar()) != EOF)
	{
		if (ch < '0' || ch > '9') {
			continue;
		}
		putchar(ch);
	}*/


	/*int arr[] = { 73,32,99,97,110,32,100,111,32,105,116,33 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	while (i<sz) {
		printf("%c",arr[i]);
		i++;
	}*/



	//// 输入数据
	//int year = 0;
	//int month = 0;
	//int date = 0;
	//scanf("%4d%2d%2d",&year,&month,&date);

	//// 输出数据
	//printf("year=%d\n", year);
	//printf("month=%02d\n", month);
	//printf("date=%02d\n", date);



	//int id = 0;
	//float c = 0.0f;
	//float math = 0.0f;
	//float eng = 0.0f;
	//// 输入
	//scanf("%d;%f;%f;%f",&id,&c,&math,&eng);
	//printf("The each subject score of No.%d is %.2f, %.2f, %.2f.\n",id, c, math, eng);



	/*int n = printf("Hello world!");
	printf("\n%d",n);*/



	int arr[4] = { 0 }; // 先初始化一个数组，赋值4个0
	int i = 0;
	while (i<4)
	{
		scanf("%d",&arr[i]);
		i++;
	}
	int max = arr[0];
	i = 1;
	while (i<4)
	{
		if (arr[i] > max) {
			max = arr[i];
		}
		i++;
	}
	printf("%d\n",max);
	return 0;
}