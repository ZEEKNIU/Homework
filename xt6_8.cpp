#include <iostream.h>
#include <stdio.h>
#include <string.h>
#define N 10
#define M 10
void main()
{
	char a[N],b[M];
	cout<<"请输入需要连接的两个字符串串:";
	cin>>a>>b;    //这里用gets语句程序就无法正常运行！只好用cin了。
	int l,s,i;
	l=strlen(a);
	s=strlen(b);
	for (i=0;i<s;i++)
	{
		a[l+i]=b[i];
	}
    cout<<"串起来之后的样子是：";
	for (i=0;a[i]!='\0';i++)
		cout<<a[i];
	cout<<endl; //不知为何一使用puts语句，程序就会报错！所以这里只好繁琐一点了。
}
