#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main() {
//	int a = 10; // ���ڴ�����4���ֽڣ��洢10��
//
//	//&a; // ȡ��ַ
//	// printf("%p\n", &a);
//
//
//	// ���ָ�루��ַ���ı�������ָ�����
//	int* pi = &a; // pi����ָ�����
//
//	//*pi�������ò�������ͨ��pi�д�ŵĵ�ַ���ҵ�p��ָ��Ķ���*p����pָ��Ķ���
//	printf("%d\n",*pi);
//
//	*pi = 100;
//	printf("%d\n",a);
//
//
//	// ָ������Ĵ�Сȡ����һ����ַ���ʱ��Ҫ���ռ�
//	// 32λ�����ϣ�32bitλ - 4byte
//	// 64λ�����ϣ�64bitλ - 8byte
//	printf("%zu\n",sizeof(int*));
//	printf("%zu\n",sizeof(char*));
//	printf("%zu\n",sizeof(short*));
//	printf("%zu\n",sizeof(float*));
//	printf("%zu\n",sizeof(double*));
//
//
//	//char s = 'w';
//	//char* pc = &s; // pc����ָ�����
//	return 0;
//}


struct Stu {
	// ��Ա
	char name[20];
	int age;
	char sex[10];
	char tel[12];
};
print(struct Stu* ps) {
	printf("%s %d %s %s\n", (*ps).name, (*ps).age, (*ps).sex, (*ps).tel);
	printf("%s %d %s %s\n", ps->name, ps->age, ps->sex, ps->tel);
}
int main() {

	struct Stu s = { "����",20,"��","18339696454"};
	//printf("%s %d %s %s\n",s.name,s.age,s.sex,s.tel);
	print(&s);
	return 0;
}