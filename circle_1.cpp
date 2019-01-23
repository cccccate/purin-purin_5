//文件名：circle_1
//作  者：ccate
//时  间：2019.1
//描  述：求圆的周长和面积：面向过程的方法

#include "iostream" 
using namespace std;

void main02()
{
	double r,s,l = 0;
	cout<<"请输入圆的半径：";
	//cin代表标准输入
	cin>>r;
	s=3.14*r*r;
	l=2*3.14*r;
	cout<<"r="<<r<<endl;
	cout<<"s="<<s<<endl;
	cout<<"l="<<l<<endl;
	system("pause");
}