
#include<iostream>
using namespace std;
class time{
private:
	int hr,min,sec;
public:
	void input(){
		cout<<"Enter Hours Minutes and Seconds"<<endl;
		cin>>hr>>min>>sec;
	}
	void output(){
		cout<<"Time: = "<<hr<<" hr :"<<min<<" min :"<<sec<<" Sec";
	}
};
int main(){
	time t;
	t.input();
	t.output();
}