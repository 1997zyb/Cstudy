#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	int age = 10;
	/*if (age > 18) {
		printf("����\n");
	}
	else {
		printf("δ����\n");
	}*/
	char first_name[20] = { 'z','h','a','n','g','\0' };
	//char first_name[20] = { "zhang"};
	//char first_name[20] = "zhang";
	//printf("%s\n", first_name);

	// �ж�����
	/*int num = 10;
	scanf("%d", &num);
	if (num % 2 == 1) {
		printf("������");
	}
	else {
		printf("��������");
	}*/


	// ���1-100֮�������
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
		printf("����һ");
	case 2:
		printf("���ڶ�");
	case 3:
		printf("������");
	case 4:
		printf("������");
	case 5:
		printf("������");
		break;
	case 6:
		printf("������");
		break;
	case 7:
		printf("������");
		break;
	default:
		printf("��������󣡣�");
		break;
	}
}