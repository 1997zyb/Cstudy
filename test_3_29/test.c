#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef unsigned int uint;

// �����ⲿ����
extern int g_val;


// define�����ʶ������
#define NUM 100
//define����꣬�����������͵�
#define ADD(x,y) ((x)+(y))







//test() {
//	static int a = 1;
//	a++;
//	printf("%d\n", a);
//}

int main() {
	// typedef ���Ͷ���
	/*unsigned int num = 10;
	uint num2 = 20;*/

	// static ���α����ͺ���
	// ���ξֲ���������Ϊ��̬�ֲ�����
	// static���ξֲ�����ʱ���ֲ��������������򣬲����ٵġ�
	// �����ϣ�static�ı��˱����Ĵ洢λ��
	// ����ȫ�ֱ�������Ϊ��̬ȫ�ֱ���
	// ���κ�������Ϊ��̬����

	//int i = 0;
	/*while (i<10)
	{
		test();
		i++;
	}*/


	int a = 10, b = 20;
	int sum = ADD(a, b);
	printf("%d\n", sum);
	printf("%d\n", g_val);
	register int num = 10; // ���������������ڼĴ�����
	return 0;
}