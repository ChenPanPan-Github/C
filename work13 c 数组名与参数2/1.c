#include<stdio.h>		

//��C�����У�����������Ϊ��������ʱ��ʵ�Σ�ʵ���ϴ��ݸ��βε���ʵ��������׵�ַ
int tmp1(int p[],int q)    //�β�pΪ������,qΪԪ�ظ���
{
	int i,j,m,l;
	m = (q-1)/2;
	for ( i=0; i<=m; i++)
	{
		j = q-1-i;
		l = p[i];
		p[i]=p[j];
		p[j]=l;

	}	
}

int tmp2(int *p,int q)
{
	int i,m,*j,*l;
    m = (q-1)/2;
	for (i=0; i<=m; i++)
	{
	 j=q-1-i;
	 l=p;
	 p=j;
	 j=l;
	}
}
void main( )    //����������ָ�������������鵹������
{
	int i;
	int a[10]={1,2,3,4,5,6};
	printf("ԭ����Ϊ��");
	for (i=0;i<6;i++)
	printf("%d ",a[i]);
	printf("\n");
	printf("��������Ϊ��");
    tmp2(a,6);
	for ( i=0; i<6; i++)
	{
	printf("%d ",a[i]);	 
	}
}