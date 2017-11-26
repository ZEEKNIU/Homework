#include <iostream.h>
#include <stdio.h>
#include <string.h>
#define N 10
void main()
{
	char a[N];
	cout<<"请输入一个正整数：";
	cin>>(a);
	int l,s,i,f;
	f=1;
	l= strlen(a);
	s=l/2;
	for (i=0;i<=s;i++)
	{
		if(a[i]!=a[l-1-i])
		{
			f=0;
			break;
		}
	}
	if (f==1)
	cout<<"该数是回文数。"<<endl;
	else
		cout<<"该数不是回文数。"<<endl;
}

        
	

