#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

// 1.���泣��
// ����3��3.14��'w'��"hellow"

// 2.const���εĳ�����
// ����const int a = 10;

// 3.#define����ı�ʶ������
#define MAX 100
#define STR "ZHANG"

// 4.ö�ٳ���
enum Color { RED, GREEN, BLUE };
enum Sex { MALE, FEMALE, SECRET };

//int main() {
//	//const int a = 10;
//	/*printf("%d\n", MAX);
//	printf("%s\n", STR);*/
//	enum Color c = RED;
//	return 0;
//}





//int main() {
//	// �ַ���
//	// �ַ����Ľ�����־��һ��\0��ת���ַ����ڼ����ַ������ȵ�ʱ��\0�ǽ�����־��
//	// �������ַ�������
//	char ch[] = "zhang";
//	char ch2[] = {'z','h','a','n','g','\0','y'}; // ����\0����ͣ����
//	printf("%s\n", ch);
//	printf("%s\n", ch2);
//
//
//	int len = strlen(ch2);
//	printf("%d\n", len);
//
// }


int Max(int x,int y) {
	if (x > y) {
		return x;
	}
	else {
		return y;
	}
}

int main() {
	// %d ��ӡ���ͣ�%c ��ӡ�ַ���%s ��ӡ�ַ�����%f ��ӡfloat���͵�����
	// %lf ��ӡdouble���͵�����

	// \n
	//printf("abc\nd\n");

	// \0
	//printf("abc\0d");

	// \?

	// \' \"
	//printf("%c\n",'\'');

	// \\
	printf("abc\\0ef");

	// \a
	//printf("\a");

	// \t
	//printf("abc\tdefg");

	// \v
	//printf("abc\vdefg");

	// \ddd 8���Ƶ�130��
	//printf("\131");

	// \xdd
	//printf("%c\n",'\x63');


	/*int input = 0;
	printf("Ҫ�ú�ѧϰ��1/0����");
	scanf("%d", &input);
	if (input == 1) {
		printf("��offer\n");
	}
	else {
		printf("������\n");
	}*/

	//int arr[20] = { 1,2,3};  // ȫ�����ʼ��Ϊ'\0'
	//int len = sizeof(arr)/sizeof(arr[0]);
	//printf("%d\n",len );
	//char arr[10] = {'z','y','b'}; // ����ȫ��ʼ��
	//int len = strlen(arr);
	//printf("%d\n", len);


	/*char ch[10] = "zhangyabo\0";
	printf("%d\n", strlen(ch));

	int a = 0, b = 0;
	scanf("%d%d", &a, &b);
	int r = Max(a, b);
	printf("%d\n", r);*/
	/*int i = 0;
	while (i<10)
	{
		printf("%d\n", arr[i]);
		i++;
	}*/


	// �������˶���������ʱ��ִ�е�������������
	// �������ֻҪ��һ����������ִ�еľ��Ǹ������ĳ���
	//int a = 7 / 2;
	//float b = 7 / 2.0;
	//printf("%d\n", a);
	//printf("%.1f\n", b);

	//// ȡģ������������������ֻ��������
	//int c = 7 % 2; // ȡģ
	//printf("%d\n",c);





	int a = 10;
	/*a = a + 3;
	a += 3;*/
	//int b = a++; // �ȸ�ֵ����++
	int b = ++a; // ��++����ֵ
	printf("%d\n", a); // 11
	printf("%d\n", b); // 11

	int c = (int)3.14; // ǿ��ת��
	printf("%d\n", c);
	return 0;
}
