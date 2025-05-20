#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	int age = 10;
	/*if (age > 18) {
		printf("成年\n");
	}
	else {
		printf("未成年\n");
	}*/
	char first_name[20] = { 'z','h','a','n','g','\0' };
	//char first_name[20] = { "zhang"};
	//char first_name[20] = "zhang";
	//printf("%s\n", first_name);

	// 判断奇数
	/*int num = 10;
	scanf("%d", &num);
	if (num % 2 == 1) {
		printf("是奇数");
	}
	else {
		printf("不是奇数");
	}*/


	// 输出1-100之间的奇数
	/*int num = 1;
	while (num<=100)
	{
		if (num % 2 == 1) {
			printf("%d ",num);
		}
		num++;
	}*/


	int day = 0;
	scanf("%d",&day);
	switch (day){
	case 1:
		printf("星期一");
	case 2:
		printf("星期二");
	case 3:
		printf("星期三");
	case 4:
		printf("星期四");
	case 5:
		printf("星期五");
		break;
	case 6:
		printf("星期六");
		break;
	case 7:
		printf("星期日");
		break;
	default:
		printf("你输入错误！！");
		break;
	}
}