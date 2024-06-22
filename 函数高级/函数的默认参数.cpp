#include <iostream>
using namespace std;


/*
	返回值类型 函数行(参数=默认值){}
	注意：如果某个位置已经有了默认参数，那么从这个位置往后，从左到右都
	必须有默认参数
*/

/*
	如果函数声明有默认参数，那么函数实现就不能有默认参数
	声明和实现只能有一个有默认参数
*/
//int func2(int a, int b); // 函数声明
//int func2(int a = 10, int b = 10) {
//	return a + b;
//} // 函数实现
//
//int func(int a, int b, int c = 30) {
//	return a + b + c;
//}
//
//int main() {
//	//cout << "结果是：" << func(10, 20) << endl;
//	cout << "func2结果是：" << func2(10, 20) << endl;
//}