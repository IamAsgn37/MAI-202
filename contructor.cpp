#include<iostream>
using namespace std;
class student{
	int rno;
	char name[50];
	double fee;
	public:
	student(){
		cout<<"Enter the RollNo : ";
		cin>>rno;
		cout<<"Enter the Name : ";
		cin>>name;
		cout<<"Enter the Fee : ";	
		cin>>fee;
	}		
	void display()
	{
		cout<<endl<<"STUDENT DETAILS\n";
		cout<<" Roll : "<<rno<<"\n Name : "<<name<<"\n Fee : "<<fee;
	}
};
int main()
{
	student s;
	s.display();
	return 0;
}
