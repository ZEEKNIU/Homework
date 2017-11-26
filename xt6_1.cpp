#include <iostream.h>
#define N 3
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

	
		 else if (a[i]>max)
		{
			max=a[i];
			p=i;
		}
	}
   
	cout<<"最小的数为："<<min<<","<<"位置为："<<k+1<<endl;
	cout<<"最大的数为："<<max<<","<<"位置为："<<p+1<<endl;
	 if(k!=p)
	{
		int t ;
	    t=a[k];
		a[k]=a[p];
		a[p]=t;
	}
	cout<<"交换后的数组为：";
	for (j=0;j < N;j++)
	{
		cout<<a[j]<<"  ";
	}
}

		