#include<iostream.h>
#include<math.h>
#include<iomanip.h>
void main()
{
float a,b,c,i,s;
cout<<"请输入三角形的三边"<<endl;
cin>>a>>b>>c;
i=(a+b+c)/2;
s=sqrt(i*(i-a)*(i-b)*(i-c));
cout<<"该三角形的面积是"<<s<<endl;
}