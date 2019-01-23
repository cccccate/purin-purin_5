//文件名：hello_
//作  者：ccate
//时  间：2019.1
//描  述：一个简单的c++程序与c语言程序进行对比

/*
#define _CRT_SECURE_NO_WARNING
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

void main()
{
	printf("hello\n");
	system("pause");
	return;//因为是void main()所以return 0时出错
}
*/

#include "iostream" //包含c++的头文件
using namespace std;//使用标准命名空间std（在这个命名空间中定义了很多标准定义）

void main()
{
	//cout:标准输出
	//<<:左移操作符
	//endl:相当于\n
	cout<<"hello"<<endl;
	system("pause");
}