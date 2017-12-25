#include <iostream.h>
void main()
{
	int a, b, c;
	c=0 ,b=1;
	cout<<"please input a!"<<endl;
	cin>>a;
	while(b)
	{
		b=a/10;
		a=b;
		c++;            //ÀûÓÃcÖµÅÐ¶ÏÊýµÄÀàÐÍ
	}
	switch(c)
	{
	case 1:cout<<"A"<<endl;break;
	case 2:cout<<"B"<<endl;break;
	case 3:cout<<"C"<<endl;break;
	default:cout<<"D"<<endl;
	}
	
}
