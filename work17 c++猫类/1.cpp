#include<iostream>
#include<cstring>
using namespace std;


class Cat{
public:
 Cat(int newage,char newname[],char newkind[])
 {
   age=newage;
   strcpy(name,newname);
   strcpy(kind,newkind);
   numOfCats++;
 }
 Cat(Cat &p)
 {
   age=p.age;
   strcpy(name,p.name);
   strcpy(kind,p.kind);
   numOfCats++;
 }
 ~Cat()
 {
	numOfCats--;
   cout<<"��������������"<<endl;
 }
 void showdown()
 {
 cout<<"���� ��"<<name<<endl;
 cout<<"���� ��"<<age<<" ��"<<endl;
 cout<<"Ʒ�� ��"<<kind<<endl;
 }
 void getnumOfCats()
 {
	 cout<<"Cat�ĸ�����Ŀ:"<<numOfCats<<endl;
 }
private:
 int age;
 char name[10];
 char kind[30];
 static int numOfCats;
}
int Cat::numOfCats=0;
int main( )
{
	Cat a(3,"��ķ","Ӣ����ëè");
    a.showdown();
    a.getnumOfCats;
    return 0;
}