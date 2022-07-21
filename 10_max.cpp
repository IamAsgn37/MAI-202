//10.	Write a program to call a function max(a, b) = c.
#include<iostream>
using namespace std;
int main(){
	cout<<"Enter any two numbeers : ";
	int x,y,c;
	cin>>x>>y;
	c=max(x,y);
	cout<<"Maximum number is : "<<c;
}