/*#include<stdio.h>

int exchange(int *a,int *b)
{	int p;
	p=*a;
	*a=*b;
	*b=p;
}
int main()
{
	int a,b,*p1,*p2;
	scanf("%d%d",&a,&b);
	p1=&a;
	p2=&b;
	if(a<b)
	{
		exchange(p1,p2);
	}
	printf("�ɴ�С��%d,%d\n",a,b);
}*/
#include<stdio.h>

int compare(int *p1,int *p2,int *p3)
{
	if(*p1<*p2)			//��һ���ҳ����С��ֵ��
		exchange(p1,p2);
	if(*p1<*p3)
		exchange(p1,p3);
	if(*p2<*p3)			//�ڶ����ҳ���һ����ֵand�м�ֵ��
		exchange(p2,p3);
}
int exchange(int *q1,int *q2)
{
	int p;
	p=*q1;
	*q1=*q2;
	*q2=p;
}
void main()
{
	int a,b,c,*p1,*p2,*p3;
	scanf("%d%d%d",&a,&b,&c);
	p1=&a;
	p2=&b;
	p3=&c;
	compare(p1,p2,p3);
	printf("�ɴ�С��%d,%d,%d\n",a,b,c);
}
/*#include<stdio.h>

void main()		//д��������������С�������
{
	int a,b;
	int *point_1,*point_2,*p;
	scanf("%d %d",&a,&b);
	point_1=&a;
	point_2=&b;
	if(a<b)
	{	p=point_1;
		point_1=point_2;
		point_2=p;
	}
	printf("a = %d,b = %d\n",a,b);
	printf("max = %d,min = %d\n",*point_1,*point_2);
}*/