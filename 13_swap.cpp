#include"iostream"
using namespace std;
class Child;
class Parent{
int num1;
public:
Parent(int n){
	num1=n;
}
void show(){
	cout<<"Value of Number 1 : "<<num1;
}
friend void swap(Parent &, Child &);
};
class Child{
	int num2;
	public:
		Child(int n){
		num2=n;
}
void show(){
	cout<<"Value of Number 2 : "<<num2;
}
friend void swap(Parent &, Child &);
};
void swap(Parent &x, Child &y){
	int temp = x.num1;
	x.num1 = y.num2;
	y.num2 = temp;
}
int main(){
	Parent p1(100);
	Child c1(200);
	cout<<"Before Swapping: "<<endl;
	p1.show();
	cout<<endl;
	c1.show();
	swap(p1,c1);
	cout<<endl;
	cout<<"After Swapping: "<<endl;
	p1.show();
	cout<<endl;
	c1.show();
return 0;
} 