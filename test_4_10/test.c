#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>
void menu() {
	printf("*****************************\n");
	printf("********   1. play   ********\n");
	printf("********   0. exit   ********\n");
	printf("*****************************\n");
}
void game() {
	int guess = 0;
	// 1.生成一个随机数
	int ret = rand()%100 + 1; // 生成随机数函数
	
	// 2.猜数字
	while (1)
	{
		printf("请猜数字：");
		scanf("%d", &guess);
		if (guess < ret) {
			printf("猜小了\n");
		}
		else if (guess > ret) {
			printf("猜大了\n");
		}
		else {
			printf("猜对了\n");
			break;
		}
	}
}
int main() {
	/*int i = 0;
	int j = 0;
	for (; i < 3; i++)
	{
		for (; j < 3; j++)
		{
			printf("哈哈\n");
		}
	}*/



	// 计算n的阶乘
	/*int i = 1;
	int n = 0;
	int ret = 1;
	scanf("%d",&n);
	for (int i = 1; i <= n;i++) {
		ret = ret * i;
	}
	printf("%d", ret);*/


	// 计算 1!+2!+3!+...+10!
	/*int i = 1;
	int n = 0;
	int ret = 1;
	int sum = 0;*/
	//scanf("%d", &n);
	/*for ( n = 1; n <= 3; n++) {
		ret = 1;
		for ( i = 1; i <= n;i++) {
			ret = ret * i;
		}
		sum = sum + ret;
	}*/
	/*for ( n = 1; n <=3; n++)
	{
		ret = ret * n;
		sum = sum + ret;
	}
	printf("%d\n", sum);*/


	/*int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int key = 37;*/
	/*int len = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < len; i++)
	{
		if (arr[i] == key) {
			printf("找到了,下标是：%d\n",i);
			break;
		};
		if (i == len-1 && arr[i] != key) {
			printf("没找到");
		}
	}*/


	//int len = sizeof(arr) / sizeof(arr[0]);
	//int left = 0; // 左下标
	//int right = len - 1; // 右下标
	/*while (left<=right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] < key) {
			left = mid + 1;
		}
		else if (arr[mid] > key) {
			right = mid - 1;
		}
		else {
			printf("找到了，%d\n", mid);
			break;
		}
	}
	if (left > right) {
		printf("找不到\n");
	}*/



	//while (left<=right)
	//{
	//	//int mid = (left + right) / 2;
	//	int mid = left + (right-left) / 2; // 防止越界
	//	if (arr[mid]<key) {
	//		left = mid + 1;
	//	}
	//	else if (arr[mid] > key) {
	//		right = mid - 1;
	//	}
	//	else {
	//		printf("找到了,下标是：%d",mid);
	//		break;
	//	}
	//}
	//if (left > right) {
	//	printf("没找到");
	//}


 

	/*char arr1[] = "welcome to bit!!!!";
	char arr2[] = "##################";
	int left = 0;
	int right = strlen(arr1)-1;
	
	while (left<=right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		Sleep(1000);
		left++;
		right--;
	}*/




		//int i = 0;
		//char password[20] = { 0 };
		//for ( i = 0; i < 3; i++)
		//{
		//	printf("请输入密码：");
		//	scanf("%s",password);
		//	// 比较两个字符串是否相等，应该使用库函数strcmp，返回0 ，表示相等
		//	if (strcmp(password,"abcdef") == 0) {
		//		printf("登陆成功");
		//		break;
		//	}
		//}
		//if (i==3) {
		//	printf("登陆失败");
		//}
		


int input = 0;
srand((unsigned int)time(NULL));
do
{
	menu();
	printf("请选择：");
	scanf("%d",&input);
	switch (input)
	{
	case 1:
		game();
		break;
	case 0:
		printf("退出游戏\n");
		break;
	default:
		printf("选择错误，重新选择\n");
		break;
	}
} while (input);






	return 0;
}