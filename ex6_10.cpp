#include <iostream.h>
#include <iomanip.h>
void fun(double);
void main()
{
	double n;
	cout<<"������һ������";
	cin>>n;
	fun(n);
}
void fun(double h)
{
	int n;
	double m;
	n=(int)h*1000;
	if (n%10>4)
		m=(h*100+1)/100;
	else
		m=h*100/100;
    cout<<"����������Ϊ��"<<setiosflags(ios::fixed)<<setprecision(2)<<m<<endl;  //��֤������λС��

}