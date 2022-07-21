#include"bits/stdc++.h"
using namespace std;
int y=0;
inline int natural(int n){
	cout<<"Natural numbers are : ";
	for(int j=1;j<=n;j++){
		y=y+j;
		cout<<" "<< j;
	}cout<<"\nSum of N natural : ";
	return y;
}
int main(){
	cout<<"Enter any positive number : ";
	int k;
	cin>>k;
	cout<<natural(k);
	return 0;
}

/*
class number{
	private:
		int n,j,x=0;
	public:
	inline int natural(int a){
		for(j=1;j<=n;j++){
			x+=j;
			return x;
		}
	}
};

inline natu(int n){
	while(n!=0){
		x+=n;
		n--;
	}
	//cout<<"\nSum of number : "<<x;
	return x;
}
int main(){
	
	int k;
	//number n1;
	cout<<"Enter any number : ";
	cin>>k;
	cout<<"The sum of N natural no. : "<<natu(5);
	cout<<"\nSum :"<<natural(k);
	/*
	int n,j,x=0;
	cin>>n;
	cout<<"Natural numbers are : ";
	while(n!=0)
	{
		x+=n;
		cout<<" "<<n;
		n--;

	}
	cout<<"\nSum of natural number : "<<x;
	for(j=1;j<=n;j++)
	{
		x=x+j;
	}
	cout<<"\nSum : "<<x;
	*/