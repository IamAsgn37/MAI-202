
/*
class strong{
	private:
		int x;
	public:
		int st;
		void input(){
			cout<<"Enter any number : ";
			cin>>x;
		}
		void fact(int r){
			int fac=1;
			while(r>0){
				fac=fac*r;
				r--;
			}
			return fac;
		}
		void output(){
			int temp,r,res=0;
			while(temp){
				r=temp%10;
				res=res+fact(r);
				temp=temp/10;
			}
			if(res==x)
				cout<<st<<" Is A STRONG NUMBER."<<endl;
			else
				cout<<st<<" Is NOT A STRONG NUMBER."<<endl;
		}
};
*/
//Program to check whether given number is Strong number or not
#include<iostream>
using namespace std;
int factorial(int n){
    int fact=1;
    while(n>0){
	    fact=fact*n;
        n--;
    }
    return fact;
}
int main(){
    int num,numc,digit,sum=0;
    cout<<"ENTER NUMBER: ";
    cin>>num;
    numc=num;
    while(numc>0){
        digit=numc%10;
        sum=sum+factorial(digit);
        numc=numc/10;
    }
     if(num==sum)
        cout<<num<<" IS A STRONG NUMBER";
     else
        cout<<num<<" IS NOT A STRONG NUMBER";
     return 0;
}
