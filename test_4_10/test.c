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
	// 1.����һ�������
	int ret = rand()%100 + 1; // �������������
	
	// 2.������
	while (1)
	{
		printf("������֣�");
		scanf("%d", &guess);
		if (guess < ret) {
			printf("��С��\n");
		}
		else if (guess > ret) {
			printf("�´���\n");
		}
		else {
			printf("�¶���\n");
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
			printf("����\n");
		}
	}*/



	// ����n�Ľ׳�
	/*int i = 1;
	int n = 0;
	int ret = 1;
	scanf("%d",&n);
	for (int i = 1; i <= n;i++) {
		ret = ret * i;
	}
	printf("%d", ret);*/


	// ���� 1!+2!+3!+...+10!
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
			printf("�ҵ���,�±��ǣ�%d\n",i);
			break;
		};
		if (i == len-1 && arr[i] != key) {
			printf("û�ҵ�");
		}
	}*/


	//int len = sizeof(arr) / sizeof(arr[0]);
	//int left = 0; // ���±�
	//int right = len - 1; // ���±�
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
			printf("�ҵ��ˣ�%d\n", mid);
			break;
		}
	}
	if (left > right) {
		printf("�Ҳ���\n");
	}*/



	//while (left<=right)
	//{
	//	//int mid = (left + right) / 2;
	//	int mid = left + (right-left) / 2; // ��ֹԽ��
	//	if (arr[mid]<key) {
	//		left = mid + 1;
	//	}
	//	else if (arr[mid] > key) {
	//		right = mid - 1;
	//	}
	//	else {
	//		printf("�ҵ���,�±��ǣ�%d",mid);
	//		break;
	//	}
	//}
	//if (left > right) {
	//	printf("û�ҵ�");
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
		//	printf("���������룺");
		//	scanf("%s",password);
		//	// �Ƚ������ַ����Ƿ���ȣ�Ӧ��ʹ�ÿ⺯��strcmp������0 ����ʾ���
		//	if (strcmp(password,"abcdef") == 0) {
		//		printf("��½�ɹ�");
		//		break;
		//	}
		//}
		//if (i==3) {
		//	printf("��½ʧ��");
		//}
		


int input = 0;
srand((unsigned int)time(NULL));
do
{
	menu();
	printf("��ѡ��");
	scanf("%d",&input);
	switch (input)
	{
	case 1:
		game();
		break;
	case 0:
		printf("�˳���Ϸ\n");
		break;
	default:
		printf("ѡ���������ѡ��\n");
		break;
	}
} while (input);






	return 0;
}