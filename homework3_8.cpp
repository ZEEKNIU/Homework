#include<iostream.h>
#include<iomanip.h>
void main()
{
    int a,b;
	cout<<"����������a��b"<<endl;
	cin>>a>>b;
	if(a%b==0)
		cout<<"��������:"<<a/b<<endl;
	else
    cout<<"��������:"<<(double)a/b<<","<<"��������:"<<a/b<<","<<"����Ϊ"<<a%b<<endl;
}