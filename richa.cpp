#include"bits/stdc++.h"
#include<math.h>
using namespace std;
float area(int side);
float area(int l, int w);
float area(float a,float b,float c);
float area(float r);
float pi=3.14;
// for squre

float areas(int side ){
	int ar=side*side;
	return ar;
}
//for rectangle
float area(float l,float w){
	float ar=l*w;
	return ar;
}
//for circle
float area(float r){
	float ar=pi*r*r;
	return ar;
}
// for triangle
float area(float a,float b,float c){
	float s=(a+b+c)/2;
	float ar=sqrt(s*(s-a)*(s-b)*(s-c));
	
}

int main(){
	int ch;
	float side,len,wid,a,b,c,r;
	cout<<"\nMENU";
	cout<<"\n1.Area of square";
	cout<<"\n2.Area of rectangle";
	cout<<"\n3.Area of triangle";
	cout<<"\n4.Area of circle";
	cout<<"\nEnter your choice < 1 to 4 > :";
	cin>>ch;
	switch(ch){
		case 1: cout<<"Enter side of squre : ";
				cin>>side;
				cout<<"Area of sqaure "<<areas(side);
		         break;
		case 2: cout<<"Enter the length of rectangle : ";
				cin>>len;
				cout<<"Enter the breadth of rectangle : ";
				cin>>wid; 
				cout<<"Area of rectangle : "<<area(len,wid);
		        break;
		case 3: cout<<"Enter a,b and c of triangle : ";
				cin>>a>>b>>c;
				cout<<"Area of triangle  : "<<area(a,b,c);
		         break;
		case 4: cout<<"Enter the radius of circle :";
				cin>>r;
				cout<<"Area of circle "<<area(r);
		         break;
		default: cout<<"Wrong Choice";
	}
}