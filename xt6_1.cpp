#include <iostream.h>
#define N 10
void main()
{
	int a[N];
	int i,j;
	for (i=0;i < N;i++)
	{
		cout<<"�������"<<i+1<<"������";
	    cin>>a[i];
	}
	 int min,max;
     min = max = a[0];
	int k,p;
	for (i=0;i < N;i++)
	{
		if (a[i]<min)
		{
			min=a[i];
			k=i;
		}
	}
	for (j=0;j < N;j++)
	{
		if (a[j]>max)
		{
			max=a[j];
			p=j;
		}
	}
	int t;
	a[k]=t;
	a[k]=a[p];
	a[p]=t;     //����λ��
	cout<<"��С����Ϊ��"<<min<<","<<"λ��Ϊ��"<<k+1<<endl;
	cout<<"������Ϊ��"<<max<<","<<"λ��Ϊ��"<<p+1<<endl;
	
}

		