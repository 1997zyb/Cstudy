#include <iostream>
using namespace std;


/*
数据类型 数组名[数组长度];   int arr[5];
数据类型 数组名[数组长度] = {值1,值2,...};   int arr[5] = {1,2,3,4,5};
数据类型 数组名[] = {值1,值2,...};   int arr[5] = {1,2,3,4,5};

特点：放在一块连续的内存空间中
	  数组中每个元素都是相同的数据类型
*/
int main() {
	int arr[] = { 1,2,3,4,5 };
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i]<<endl;
	}
}