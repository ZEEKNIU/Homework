#include <iostream.h>
#include <iomanip.h>
void main()
{
	int a[10];
    int *p;
	int t,i;
	for(i=0;i<10;i++)
	{
		cout<<"请输入第"<<(i+1)<<"个数：";
		cin>>a[i];
	}
	for(i=0;i<6;i++)
	{
		t=*(p+i);
		*(p+i)=*(p+9-i);
		*(p+9-i)=t;
	}
	cout<<"变换之后的数组为：";
    for(i=0;i<10;i++)
	{
		cout<<setw(5)<<*p++;
	}
	cout<<endl;
}
