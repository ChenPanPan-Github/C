#include<iostream>
#include<cstring>
#include"1.h"
using namespace std;

void Cat::show()
{
	cout<<"name��"<<name<<endl;
	cout<<"num ��"<<num<<" ��"<<endl;
}
Cat::Cat(int newnum,char newname[])
	{
	 num=newnum;
	 strcpy(name,newname);
	}