#include <iostream.h>
#include <iomanip.h>
void fun(double);
void main()
{
	double n;
	cout<<"请输入一个数：";
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
    cout<<"四舍五入结果为："<<setiosflags(ios::fixed)<<setprecision(2)<<m<<endl;  //保证保留两位小数

}