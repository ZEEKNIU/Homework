#include <iostream.h>
double fun(int n)
{
	int i,j=0;
	double s=0;
	for(i=1;i<=n;i++)
	{
		j+=i;
	    s+=(double)1/j;
	}
	return(s);
}
void main()
{
	int n;
	cout<<"请输入n:";
	cin>>n;
	cout<<"结果为："<<fun(n)<<endl;
}


