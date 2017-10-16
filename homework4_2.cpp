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
		cout<<endl; //使得每10个闰年 换一次行
    }
    cout<<endl;
    cout<<"闰年的总年数为"<<y<<endl;
}