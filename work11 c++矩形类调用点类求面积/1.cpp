#include<iostream>
#include<cmath>
using namespace std;

class Point{
public:
      Point (double newx,double newy)
	  {
	   x=newx;
	   y=newy;
	   cout<<"���๹�캯�������ã�"<<endl;
	  }
	  Point (Point &p)
	  {
	   x=p.x;
	   y=p.y;
	   cout<<"���ิ�ƹ��캯�������ã�"<<endl;
	  }
	  ~Point( )
	  {
	   cout<<"�����������������ã�"<<endl;
	  }
      void show( )
      {
	   cout<<"("<<x<<","<<y<<")"<<endl;
	  }
	  double getX( )
	  {
	   return x;
	  }
	  double getY( )
	  {
	   return y;
	  }
private:
      double x,y;
};

class Rectangle{
public:
      Rectangle(Point newp1,Point newp2):p1(newp1),p2(newp2)
	  {
	   double px=newp1.getX( )-newp2.getX( );
	   double py=newp1.getY( )-newp2.getY( );
	   area=px*py;
	   cout<<"ƽ���๹�캯�������ã�"<<endl;
	  }
	  Rectangle(Rectangle &q):p1(q.p1),p2(q.p2)
	  {
	   area=q.area;
	   cout<<"ƽ���ิ�ƺ��������ã�"<<endl;
	  }
	  ~Rectangle( )
	  {
	   cout<<"ƽ�����������������ã�"<<endl;
	  }
	  void show( )
	  {
	   cout<<"����������Ϊ��"<<area<<endl;
	  }
private:
	  Point p1,p2;
	  double area;
};

int main( )
{
    Point my(0,0),your(3,3);
	Rectangle myarea(my,your);
	myarea.show( );
	return 0;
}
���๹�캯�������ã�
���๹�캯�������ã�
���ิ�ƹ��캯�������ã�
���ิ�ƹ��캯�������ã�
���ิ�ƹ��캯�������ã�
���ิ�ƹ��캯�������ã�
ƽ���๹�캯�������ã�
�����������������ã�
�����������������ã�
����������Ϊ��9
ƽ�����������������ã�
�����������������ã�
�����������������ã�
�����������������ã�
�����������������ã�
Press any key to continue