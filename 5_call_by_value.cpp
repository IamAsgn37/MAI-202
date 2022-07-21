#include<iostream>
using namespace std;
void swapValue(int m,int n){
	int temp;
	temp=m;
	m=n;
	n=temp;
	cout<<"The two numbers are(by value):-"<<m<<" "<<n<<endl;
}
void swapAddress(int *m,int *n){
	int temp;
	temp=*m;
	*m=*n;
	*n=temp;
	cout<<"The two numbers are(by address):-"<<*m<<" "<<*n<<endl;
}
void swapReference(int &m,int &n){
	 int temp;
	 temp=m;
	 m=n;
	 n=temp;
	 cout<<"The two numbers are(by reference):-"<<m<<" "<<n<<endl;
}
int main(){
	int a,b;
	cout<<"Enter the two number\n";
	cin>>a>>b;
	int c=a,d=b;
	swapValue(a,b);
	swapAddress(&a,&b);
	swapReference(c,d);
}