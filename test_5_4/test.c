#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>





int isLeapYear(int year) {
	// ���꣺�ܱ�4�������Ҳ��ܱ�100����������
		// �ܱ�400����������
	if (year % 4 == 0 && year % 100 != 0) {
		return 1;
	}
	else if (year % 400 == 0) {
		return 1;
	}
	else {
		return 0;
	}
}


// ���鴫�Σ����ݵ�ʵ����������Ԫ�صĵ�ַ���������������飬
int binarySearch(int arr[], int key, int sz) {
	int left = 0;
	int right = sz;
	while (left <= right)
	{
		int mid = left + (right - left) / 2;
		if (arr[mid] < key) {
			left = mid + 1;
		}
		else if (arr[mid] > key) {
			right = mid - 1;
		}
		else {
			return mid;
		}
	}
	return -1;
}


void add(int* p) {
	(*p)++;
}



int main() {
	// �ж�һ�����ǲ�������
	//int i = 0;
	//for ( i = 101; i <= 200; i+=2)
	//{
	//	// ��2~i-1֮�������ȥ�Գ�i
	//	int flag = 1;//flag��1����ʾ������
	//	int j = 0;
	//	//i - 1
	//	for ( j = 2; j <= sqrt(i); j++)
	//	{
	//		if (i % j == 0) {
	//			flag = 0;
	//			break;
	//		}
	//	}
	//	if (flag == 1) {
	//		printf("%d ", i);
	//	}
	//}



	// �ж�����
	/*int year = 0;
	for (year = 1000; year <= 2000; year++)
	{
		if (isLeapYear(year)) {
			printf("%d ", year);
		}
	}*/







	// ���ֲ���
	/*int arr[] = {1,2,3,4,5,6,7,8,9};
	int key = 7;
	int sz = sizeof(arr) / sizeof(arr[0]) - 1;
	int ret = binarySearch(arr,key,sz);
	if(ret == -1) {
		printf("û���ҵ�����\n");
	}
	else {
		printf("�ҵ��ˣ����±��ǣ�%d\n",ret);
	}*/






	int num = 0;
	add(&num);
	printf("%d\n", num);
	add(&num);
	printf("%d\n", num);
	return 0;
}