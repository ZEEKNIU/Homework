#include<iostream.h>
void main()
{
	int x,y;
	x=2000,y=0;
	while(x<=3000)
	{
		cout<<x<<"    ";
		x=x+4;
	    y++;
		if(y%10==0)
		cout<<endl; //ʹ��ÿ10������ ��һ����
    }
    cout<<endl;
    cout<<"�����������Ϊ"<<y<<endl;
}