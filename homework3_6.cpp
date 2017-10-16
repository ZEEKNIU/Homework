#include<iostream.h>
#include<iomanip.h>
void main()
{
	double r,k,s,q;
	cout<<"请输入圆的半径r和一个整型数k"<<endl;
	cin>>r>>k;
	s=3.1415926*r*r;
	q=2*3.1415926*r; 
	if(k==1)     
        cout<<"该圆的面积是"<<s<<endl;
	else
		if(k==2)
		    cout<<"该圆的周长是"<<q<<endl;
		else
			cout<<"该圆的面积是"<<s<<","<<"周长是"<<q<<endl;
}