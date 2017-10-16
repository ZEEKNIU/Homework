#include<iostream.h>
void main()
{
	int a;
	cout<<"全部同构数为:";
	for(a=1;a<10;a++)
	{
	    if(a*a%10==a)
		    cout<<a<<",";
	}
	for(a=10;a<100;a++)
	{   
		if(a*a%100==a)   //因为是100以内的数，所以最高只能是后两位，对100取余。
			cout<<a<<",";
    }
	cout<<endl;
}