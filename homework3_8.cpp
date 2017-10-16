#include<iostream.h>
#include<iomanip.h>
void main()
{
    int a,b;
	cout<<"请输入整数a和b"<<endl;
	cin>>a>>b;
	if(a%b==0)
		cout<<"算术商是:"<<a/b<<endl;
	else
    cout<<"算术商是:"<<(double)a/b<<","<<"整数商是:"<<a/b<<","<<"余数为"<<a%b<<endl;
}