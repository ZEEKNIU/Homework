#include<iostream.h>
void main()
{
	int a,b;
	cout<<"����һ��������:"<<endl;
	cin>>a;
	b=0;
	while(a!=1)
	{
		b++;
			if(a%2==1)   //����
			a=3*a+1;
	else
		    if(a%2!=1)
		    a=a/2;
	}
	b=b-1;
	cout<<"�����ĽǹȲ��벽������:"<<b<<endl;
}