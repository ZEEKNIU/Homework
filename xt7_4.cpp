#include <iostream.h>
#include <iomanip.h>
void main()
{
	int a[10];
    int *p;
	int t,i;
	for(i=0;i<10;i++)
	{
		cout<<"�������"<<(i+1)<<"������";
		cin>>a[i];
	}
	for(i=0;i<6;i++)
	{
		t=*(p+i);
		*(p+i)=*(p+9-i);
		*(p+9-i)=t;
	}
	cout<<"�任֮�������Ϊ��";
    for(i=0;i<10;i++)
	{
		cout<<setw(5)<<*p++;
	}
	cout<<endl;
}
