#include<iostream.h>
#include<iomanip.h>
void main()
{
	double r,k,s,q;
	cout<<"������Բ�İ뾶r��һ��������k"<<endl;
	cin>>r>>k;
	s=3.1415926*r*r;
	q=2*3.1415926*r; 
	if(k==1)     
        cout<<"��Բ�������"<<s<<endl;
	else
		if(k==2)
		    cout<<"��Բ���ܳ���"<<q<<endl;
		else
			cout<<"��Բ�������"<<s<<","<<"�ܳ���"<<q<<endl;
}