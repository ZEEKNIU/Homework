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
		c++;            //利用c值判断数的类型
	}
	if (c==1)
		cout<<"A"<<endl;
	else
		if (c==2)
			cout<<"B"<<endl;
		else
			if (c==3)
				cout<<"C"<<endl;
			else
				cout<<"D"<<endl;
}

	