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

	int arr[10] = {11,12,13,14,15,16,17,18,19,20};
	int i = 0;
	while (i<10)
	{
		printf("%d\n", arr[i]);
		i++;
	}
	return 0;
}
