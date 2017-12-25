#include <iostream.h>
#include <string.h>
#define N 20
void fun(char a[N],char b[N],int n)
{
	int i;
	char c[N]={'\0'};//特别注意！要这么写，否则c的结尾没有‘\0’。
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
	cout<<"请输入字符串：";
	cin>>a;
	cout<<"请输入要插入的字符串：";
	cin>>b;
	cout<<"请输入要插入的位置：";
	cin>>n;
	fun(a,b,n);
}

