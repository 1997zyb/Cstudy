#include <iostream>
using namespace std;



// ��װһ��������ʵ�ֶ������������������
//void bubble(int* arr, int length) {
//	for (int i = 0; i < length - 1; i++)
//	{
//		for (int j = 0; j < length - 1 - i; j++) {
//			if (arr[j] > arr[j + 1]) {
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//}
//
//// ��ӡ����
//void print(int* arr, int length) {
//	for (int i = 0; i < length; i++)
//	{
//		cout << arr[i] << endl;
//	}
//}
//
//int main() {
//	int arr[10] = { 4,3,7,5,1,2,0,9,8,6 };
//	int length = sizeof(arr) / sizeof(arr[0]);
//	bubble(arr, length);
//	print(arr, length);
//}