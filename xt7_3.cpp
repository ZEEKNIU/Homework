#include <iostream.h>
#include <iomanip.h>
void main()
{
	int a[10];
	int max,min,c,b,i,t;
	int *p;
	p=a;
	for (i=0;i<10;i++)
	{
		cout<<"请输入第"<<(i+1)<<"个数：";
		cin>>a[i];
	}
	min=max=a[0];
	for (i=0;i<10;i++)
	{
		if(*(p+i)>max)
		{
			max=*(p+i);
			c=i;
		}
		if(*(p+i)<min)
		{
			min=*(p+i);
			b=i;
		}
	}
	t=*(p+c);
	*(p+c)=*(p+b);
	*(p+b)=t;
	for(i=0;i<10;i++)
	{
		cout<<setw(5)<<*(p++);
		cout<<endl;
	}
}