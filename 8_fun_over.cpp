//function overloading
#include<iostream>
using namespace std;
int maxx(int a,int b){
	if(a>b)
	return a;
	else
	return b;
}
int maxx(int a,int b,int c,int d=5){
	if(a>b){
		if(a>c){
			if(a>d)
			return a;
			else
			return d;
		}
		else
		return c;
}
	else{
		if(b>c){
			if(b>d)
			return b;
			else
			return d;
		}
		else
		return c;
	}	
}
int main(){
	int x,y,z;
	cout<<"Input any two integer no\n";
	cin>>x>>y;
	cout<<"larger number between two nos ="<<maxx(x,y);
	cout<<"\n\nInput any three integer no\n";
	cin>>x>>y>>z;
	cout<<"Larger no from three interger="<<maxx(x,y,z);
	
}
