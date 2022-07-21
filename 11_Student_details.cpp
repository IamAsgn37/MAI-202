/*11.	Write a program to store and display records of MCA II semester students
 with following attributes using class. Roll Number, Name, Branch, Semester, 
 Marks (M1, M2, M3, M4, M5) (Note: Roll number is primary and must be generated
  automatically; avoid entering repetitive data).*/
  #include<iostream>
  #include<string.h>
  using namespace std;
  int roll_no(){
  	static int i=0;
  	i+=1;
  	return i;
  }
  class student_details{
  	int roll;
  	string name;
  	string branch;
  	string semester;
  	float marks[5];
  	public:
  		void get_data(){
  			roll=roll_no();
  			cout<<"Enter your Name : ";cin>>name;
  			cout<<"Enter your Branch : ";cin>>branch;
  			cout<<"Enter your semester : ";cin>>semester;
  			cout<<"Enter your marks : ";
  			for(int i=0;i<5;i++){
  			cout<<"Subject "<<i+1<<" = ";
  			cin>>marks[i];
  			}
		  }	
		void show_data(){
			cout<<"\n\nRoll = "<<roll<<endl;
			cout<<"Name = "<<name<<endl;
			cout<<"Branch = "<<branch<<endl;
			cout<<"Semester = "<<semester<<endl;
			cout<<" Marks = ";
			for(int i=0;i<5;i++)
				cout<<"\n\t\tM"<<i+1<<" = "<<marks[i];
		}
  };
  int main(){
  	student_details s[5];
  	for(int i=0;i<5;i++)
  		s[i].get_data();
  	for(int j=0;j<5;j++)
  		s[j].show_data();
  }