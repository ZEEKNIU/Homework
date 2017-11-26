#include <iostream.h>
#define N 10
void main()
{
	int a[N];
	int i,j;
	for (i=0;i < N;i++)
	{
		cout<<"请输入第"<<i+1<<"个数：";
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
	a[p]=t;     //互换位置
	cout<<"最小的数为："<<min<<","<<"位置为："<<k+1<<endl;
	cout<<"最大的数为："<<max<<","<<"位置为："<<p+1<<endl;
	
}

		