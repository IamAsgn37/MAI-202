//a.)  IF STATEMENT
#include<iostream>
using namespace std;

	int a;
	void getdata(){
		cout<<"Enter any number to check even or odd : ";
		cin>>a;
	}
	void showdata(){
		if(a&2!=0)
			cout<<a<<" is Odd number."<<endl;
		else
			cout<<a<<" is Even number."<<endl;
	}
int main(){
	getdata();
	showdata();
	getdata();
	showdata();
	return 0;
	
}