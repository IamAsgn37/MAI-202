#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,d=1,temp;
	cout<<"ENTER ANY TWO NUMBERS : ";
	cin>>a>>b;
	int c=a,e=b;
	while(d!=0)
	{
		d=b%a;
		b=a;
		temp=a;
		a=d;
	}
	cout<<"GCD : "<<temp<<"\n";
	//cout<<"LCM : "<<(c*e)/temp;
}