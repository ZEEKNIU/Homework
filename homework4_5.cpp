#include<iostream.h>
void main()
{
	int a;
	cout<<"ȫ��ͬ����Ϊ:";
	for(a=1;a<10;a++)
	{
	    if(a*a%10==a)
		    cout<<a<<",";
	}
	for(a=10;a<100;a++)
	{   
		if(a*a%100==a)   //��Ϊ��100���ڵ������������ֻ���Ǻ���λ����100ȡ�ࡣ
			cout<<a<<",";
    }
	cout<<endl;
}