#include<iostream>
#include<string>
using namespace std;

class dog{
public:
	dog(int newage,char newname[],char newkind[])
	{
	  age=newage;
	  strcpy(name,newname);
	  strcpy(kind,newkind);
	}
	dog(dog &p)
	{
	  age=p.age;
	  strcpy(name,p.name);
	  strcpy(kind,p.kind);
	}
	~dog()
	{
	  cout<<"��������������"<<endl;
	}
	void showdown()
	{
		cout<<"���� ��"<<name<<endl;
		cout<<"���� ��"<<age<<" ��"<<endl;
		cout<<"Ʒ�� ��"<<kind<<endl;
	}

private:
	int age;
	char name[10];
	char kind[30];
};

int main( )
{
	dog mydog(3,"����","�л���԰Ȯ");
	dog your(mydog);
	mydog.showdown();
	your.showdown();
	return 0;
}
