#include<iostream.h>
#include<math.h>
#include<iomanip.h>
void main()
{
float a,b,c,i,s;
cout<<"�����������ε�����"<<endl;
cin>>a>>b>>c;
i=(a+b+c)/2;
s=sqrt(i*(i-a)*(i-b)*(i-c));
cout<<"�������ε������"<<s<<endl;
}