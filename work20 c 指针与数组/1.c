/*#include<stdio.h>

float max(float,float,float);
void main( )    //����ָ�루ָ������ָ�룩����ź�������ڵ�ַ
{
    float (*p)(float,float,float);
	float a,b,c,big;
	p=max;
	printf("��������������\n");
        scanf("%f%f%f",&a,&b,&c);
	big=(*p)(a,b,c);
	printf("���ֵΪ��%.2f",big);
}                  //ʵ�ã��ں����ڵ��ú�����������
float max(float x,float y,float z)    
{
    float tmp=x;
	if(tmp<y)  tmp=x;
	if(tmp>z)  tmp=z;
	return tmp;
}*/

/*#include<stdio.h>

void main( )     //ָ�������ָ�����������Ч�ʸߣ����
{
    int a[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
	int b[3][4]={{2,4,6,8},{10,12,14,16},{18,20,22,24}};
	int c[3][4]={0},i,j;
	int (*p)[4]=NULL,(*q)[4]=NULL,(*w)[4]=NULL;
	printf("�������a��\n");
    p=a;
	for (i=0; i<3; i++)
	{
	  for (j=0; j<4; j++)
		  printf("%4d",p[i][j]);
	      printf("\n");
	}
	printf("�������Ϊb:\n");
	q=b;
	for (i=0; i<3; i++)
	{
	  for (j=0; j<4; j++)
		  printf("%4d",q[i][j]);
	      printf("\n");
	}
	w=c;
	for (i=0; i<3; i++)
	for (j=0; j<4; j++)
		w[i][j]=p[i][j]+q[i][j];
	printf("�������Ϊc:\n");
		for (i=0; i<3; i++)
	{
	  for (j=0; j<4; j++)
		  printf("%4d",w[i][j]);
	  printf("\n");
	}
}*/

/*#include<stdio.h>

void main( )  //��ָ��������ʶ�ά����Ԫ��
{
    int a[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
	int i,j,*p[3];
	for (i=0; i<3; i++)
		p[i]=a[i];
	for (i=0; i<3; i++)
	{
	    for (j=0;j<4;j++)
			printf("%4d",p[i][j]);
			printf("\n");
	}

}*/
#include<stdio.h>

int main(int argc, char* argv[ ])

{
int data[4] = {1,3,5,4};
int *iptr1 = &data[0];
int *iptr2 = &data[2];
int val;
 val = iptr2 - iptr1;
printf("Distrance is: %d\n", val);
return 0;

}
