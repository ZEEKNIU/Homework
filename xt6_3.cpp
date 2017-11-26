#include <iostream.h>
#define N 4
#define M 4
void main()
{
	int i,j,s;
	s=0;
	int a[N][M]={1,1,1,1,2,2,2,2,3,3,3,3,4,4,4,4};
    for(i=0;i<N;i++)
	{
		for(j=0;j < M;j++)
		{
			if(i==j)
			{
				s=s+a[i][j];
			}
			else if(i>j)
			{
				a[i][j]-=1;
			}
			    else if(i<j)
				{
					a[i][j]+=1;
				}
		}
	}
	cout<<"对角线元素之和为："<<s<<endl;
	cout<<"改变之后的矩阵为："<<endl;
	for(i=0;i < N;i++)
	{
		for(j=0;j < M;j++)
			cout<<a[i][j]<<"  ";
		    cout<<endl;
	}
}
