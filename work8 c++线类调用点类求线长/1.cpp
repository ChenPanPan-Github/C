#include<iostream>
#include<cmath>
using namespace std;

class Point{
public:
	Point(double newx,double newy)
	{
		x=newx;
		y=newy;
		cout<<"��Ĺ��캯��������"<<endl;
	}
	Point(Point &p)
	{
		x=p.x;
		y=p.y;
		cout<<"��ĸ��ƺ���������"<<endl;
	}
	~Point()
	{
		cout<<"�����������������"<<endl;
	}
	void show()
	{
		cout<<"("<<x<<","<<y<<")"<<endl;
	}
	double getX()
	{return x;}
	double getY()
	{return y;}
private:
	double x,y;
};

class Line{
public:
	Line(Point newp1,Point newp2):p1(newp1),p2(newp2)
	{
		double px=newp1.getX()-newp2.getX();
		double py=newp1.getY()-newp2.getY();
		len=sqrt(px*px+py*py);
		cout<<"�߶ι��캯��������"<<endl;
	}
	Line(Line &q):p1(q.p1),p2(q.p2)
	{
		len=q.len;cout<<"�߶θ��ƹ��캯��������"<<endl;
	}
	~Line()
	{
		cout<<"�߶��������������"<<endl;
	}
	void show()
	{
		cout<<"�߶γ����ǣ�"<<len<<endl;
	}
private:
	Point p1,p2;
	double len;
};

int main()
{
	Point my(1,2),your(3,4);
	Line myline(my,your);
	myline.show();
	return 0;
}

��(1,2)�Ĺ��캯���������� my
��(3,4)�Ĺ��캯���������� your
��(3,4)�ĸ��ƹ��캯����������your->newp2
��(1,2)�ĸ��ƹ��캯����������my->newp1
��(1,2)�ĸ��ƹ��캯����������newp1->p1
��(3,4)�ĸ��ƹ��캯����������newp2->p2
�߶εĹ��캯����������
��(1,2)������������������ newp1
��(3,4)������������������ newp2
�߶εĳ����ǣ�2.82843
�߶ε�����������������
��(3,4)������������������ p2
��(1,2)������������������ p1
��(3,4)������������������ your
��(1,2)������������������ my

