#include <iostream>
using namespace std;

#include <ctime>

//struct Student {
//	string sName;
//	int sAge;
//	int score;
//};
//struct Teacher {
//	int id;
//	string tName;
//	int age;
//	struct Student sArray[5];
//
//};
//void cateTeacher(struct Teacher tArray[], int len) {
//	string nameSeed = "ABCDE";
//	for (int i = 0; i < len; i++)
//	{
//		tArray[i].tName = "Teacher_";
//		tArray[i].tName += nameSeed[i];
//		for (int j = 0; j < 5; j++)
//		{
//			tArray[i].sArray[j].sName = "Student_";
//			tArray[i].sArray[j].sName += nameSeed[j];
//
//			int random = rand() % 61 + 40;
//			tArray[i].sArray[j].score = random;
//		}
//	}
//}
//void printInfo(struct Teacher tArray[], int len) {
//	for (int i = 0; i < len; i++)
//	{
//		cout << "��ʦ�����ǣ�" << tArray[i].tName << endl;
//		for (int j = 0; j < 5; j++)
//		{
//			cout << "\tѧ�������ǣ�" << tArray[i].sArray[j].sName <<
//				" ���Է����ǣ�" << tArray[i].sArray[j].score <<
//				endl;
//		}
//	}
//}
//int main() {
//
//	// ���������
//	srand((unsigned int)time(NULL));
//	Teacher tArray[3];
//	int len = sizeof(tArray) / sizeof(tArray[0]);
//	cateTeacher(tArray, len);
//	printInfo(tArray, len);
//}