#include <iostream.h>
void fun(int);
void main()
{
	int m;
	cout<<"please import m:";
	cin>>m;
	fun(m);
}
void fun(int n)
{
	int i,a=0;
	for(i=1;i<=n;i++)
	{
		if(i%7==0||i%11==0)
		{
			cout<<i<<" ";
			a++;
		}
	}
	cout<<"n="<<a<<endl;
}