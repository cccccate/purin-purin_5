//�ļ�����const__
//��  �ߣ�ccate
//ʱ  �䣺2018.2
//��  ����const��ʹ��

#include <iostream>
using namespace std;

struct Teacher
{
	char name[64];
	int age;
};
int operatorTeacher01(const Teacher *pT)
{
	//pT->age = 10;ָ��ָ����ڴ�ռ䲻�ܱ��޸�
	return 0;
}
int operatorTeacher02(Teacher * const pT)
{
	//pT = NULL;ָ����������ܱ��޸�
	return 0;
}
int operatorTeacher03(const Teacher * const pT)
{
	//�����ܱ��޸ģ����ǿ���ʹ��
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