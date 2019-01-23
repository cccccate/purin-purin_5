//文件名：circle_2
//作  者：ccate
//时  间：2019.1
//描  述：求圆的周长和面积：面向对象的方法

#include "iostream" 
using namespace std;

//自定义数据类型——圆
/*
struct Circle
{
	double m_s;//圆的面积
	double m_r;//半径
	double m_l;//周长
};
*/

class MyCicle//大驼峰命名法
{
public:
	double m_s;//圆的面积,属性2，也叫成员变量
	double m_r;//半径
	double m_l;//周长
public:
	void setR(double r)//成员函数
	{
		m_r = r;
	}
	double getR()//成员函数
	{
		return m_r;
	}
	double getS()
	{
		return m_s = 3.14*m_r*m_r;
	}
	double getL()
	{
		return m_l = 2*3.14*m_r;
	}
};//定义类后面也要有；

void main()
{
	MyCicle c1,c2,c3;//用类定义三个对象c1，c2，c3
	double r1,r2,r3;

	cout<<"输入c1圆半径:";
	cin>>r1;
	//给c1圆形的属性赋值
	c1.setR(r1);
	//输出
	cout<<"c1圆的面积是"<<c1.getS()<<endl;
	cout<<"c1圆的周长是"<<c1.getL()<<endl;

	cout<<"输入c2圆半径:";
	cin>>r2;
	//给c1圆形的属性赋值
	c2.setR(r2);
	//输出
	cout<<"c2圆的面积是"<<c2.getS()<<endl;
	cout<<"c2圆的周长是"<<c2.getL()<<endl;

	cout<<"输入c3圆半径:";
	cin>>r3;
	//给c1圆形的属性赋值
	c3.setR(r3);
	//输出
	cout<<"c3圆的面积是"<<c3.getS()<<endl;
	cout<<"c3圆的周长是"<<c3.getL()<<endl;
	system("pause");


}