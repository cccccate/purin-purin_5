//�ļ�����circle_2
//��  �ߣ�ccate
//ʱ  �䣺2019.1
//��  ������Բ���ܳ���������������ķ���

#include "iostream" 
using namespace std;

//�Զ����������͡���Բ
/*
struct Circle
{
	double m_s;//Բ�����
	double m_r;//�뾶
	double m_l;//�ܳ�
};
*/

class MyCicle//���շ�������
{
public:
	double m_s;//Բ�����,����2��Ҳ�г�Ա����
	double m_r;//�뾶
	double m_l;//�ܳ�
public:
	void setR(double r)//��Ա����
	{
		m_r = r;
	}
	double getR()//��Ա����
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
};//���������ҲҪ�У�

void main()
{
	MyCicle c1,c2,c3;//���ඨ����������c1��c2��c3
	double r1,r2,r3;

	cout<<"����c1Բ�뾶:";
	cin>>r1;
	//��c1Բ�ε����Ը�ֵ
	c1.setR(r1);
	//���
	cout<<"c1Բ�������"<<c1.getS()<<endl;
	cout<<"c1Բ���ܳ���"<<c1.getL()<<endl;

	cout<<"����c2Բ�뾶:";
	cin>>r2;
	//��c1Բ�ε����Ը�ֵ
	c2.setR(r2);
	//���
	cout<<"c2Բ�������"<<c2.getS()<<endl;
	cout<<"c2Բ���ܳ���"<<c2.getL()<<endl;

	cout<<"����c3Բ�뾶:";
	cin>>r3;
	//��c1Բ�ε����Ը�ֵ
	c3.setR(r3);
	//���
	cout<<"c3Բ�������"<<c3.getS()<<endl;
	cout<<"c3Բ���ܳ���"<<c3.getL()<<endl;
	system("pause");


}