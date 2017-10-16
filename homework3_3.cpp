#include<iostream.h>
void main()
{
	int a;
	cout<<"请输入一个整数:"<<endl;
	cin>>a;
	if(a%3==0||a%7==0)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
}