#include<iostream.h>
void main()
{
	int a,b;
	cout<<"输入一个正整数:"<<endl;
	cin>>a;
	b=0;
	while(a!=1)
	{
		b++;
			if(a%2==1)   //奇数
			a=3*a+1;
	else
		    if(a%2!=1)
		    a=a/2;
	}
	b=b-1;
	cout<<"该数的角谷猜想步骤数是:"<<b<<endl;
}