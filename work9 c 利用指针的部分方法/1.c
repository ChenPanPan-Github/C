#include<stdio.h>

/*void main( )              //�±귨
{  
    int i,a[10]={0,1,2,3,4,5,6,7,8,9};
	for (i=0;i<10;i++)
		printf ("%d ",a[i]);
		printf ("\n");

}

void main( )
{
    int i,*p;
	int a[10]={0,1,2,3,4,5,6,7,8,9};//ָ�뷨
    p=&a;	//����&a��a�����ã�ǰ���������׵�ַ������Ϊ��ֵַ;
	for (i=0;i<10;i++)
		printf ("%d ",*(a+i));
		printf ("\n");
}*/

void main( )
{
    int i,*p;
    int a[10]={0,1,2,3,4,5,6,7,8,9};
	for (p=a;p<(a+10);p++)
		printf ("%d ",*p);    //�����ʵ�ʵ�ַ���4����������1���㣨ϵͳ�Զ�������һ����4������
	    printf ("\n");
}