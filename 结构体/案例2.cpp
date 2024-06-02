#include <iostream>
using namespace std;


struct Hero {
	string name;
	int age;
	string sex;
};
void bubble(struct Hero* hero, int len) {
	for (int i = 0; i < len; i++)
	{
		for (int j = 0; j < len - 1 - i; j++)
		{
			if (hero[j].age > hero[j + 1].age) {
				struct Hero temp = hero[j];
				hero[j] = hero[j + 1];
				hero[j + 1] = temp;
			}
		}
	}
}
void printInfo(struct Hero* hero, int len) {
	for (int i = 0; i < len; i++)
	{
		cout << "名字是：" << hero[i].name << " 年龄是：" << hero[i].age << endl;
	}
}
int main() {
	Hero heroArray[5] = {
		{"刘备",56,"男"},
		{"关羽",48,"男"},
		{"张飞",37,"男"},
		{"吕布",36,"男"},
		{"貂蝉",19,"女"},
	};
	int len = sizeof(heroArray) / sizeof(heroArray[0]);
	bubble(heroArray, len);
	printInfo(heroArray, len);
}