#include <iostream.h>
#include <string.h>
#define N 20
void fun(char a[N],char b[N],int n)
{
	int i;
	char c[N]={'\0'};//�ر�ע�⣡Ҫ��ôд������c�Ľ�βû�С�\0����
	char *p;
	p=a;
	for(i=0;i<n;i++)
	{
		c[i]=*p++;
	}
	strcat(b,p);
	strcat(c,b);
	cout<<c<<endl;
}

void main()
{
	char a[N],b[N];
	int n;
	cout<<"�������ַ�����";
	cin>>a;
	cout<<"������Ҫ������ַ�����";
	cin>>b;
	cout<<"������Ҫ�����λ�ã�";
	cin>>n;
	fun(a,b,n);
}

