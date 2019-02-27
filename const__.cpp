//文件名：const__
//作  者：ccate
//时  间：2018.2
//描  述：const的使用

#include <iostream>
using namespace std;

struct Teacher
{
	char name[64];
	int age;
};
int operatorTeacher01(const Teacher *pT)
{
	//pT->age = 10;指针指向的内存空间不能被修改
	return 0;
}
int operatorTeacher02(Teacher * const pT)
{
	//pT = NULL;指针变量本身不能被修改
	return 0;
}
int operatorTeacher03(const Teacher * const pT)
{
	//都不能被修改，但是可以使用
	printf("age:%d",pT->age);
	return 0;
}

void main()
{
	Teacher t1;
	t1.age = 33;
	operatorTeacher03(&t1);
	system("pause");
	return;
}