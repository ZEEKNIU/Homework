#include <iostream.h>
#define N 3
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

	
		 else if (a[i]>max)
		{
			max=a[i];
			p=i;
		}
	}
   
	cout<<"��С����Ϊ��"<<min<<","<<"λ��Ϊ��"<<k+1<<endl;
	cout<<"������Ϊ��"<<max<<","<<"λ��Ϊ��"<<p+1<<endl;
	 if(k!=p)
	{
		int t ;
	    t=a[k];
		a[k]=a[p];
		a[p]=t;
	}
	cout<<"�����������Ϊ��";
	for (j=0;j < N;j++)
	{
		cout<<a[j]<<"  ";
	}
}

		