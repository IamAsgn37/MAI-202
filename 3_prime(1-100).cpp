
/*
int main(){
	for(int m=1;m<100;m++){
		for(int i=1;i*i<=m;i++){
			if(m%i==0)
				break;
			else if(i+1>sqrt(i)){
				cout<<i<<" ";
			}
		}
	}
return 0;
}
*/
/*
int main () 
{
    for (int i=1; i<100; i++) 
        for (int j=2; j*j<=i; j++)
        {
            if (i % j == 0) 
                break;
            else if (j+1 > sqrt(i)) {
                cout << i << " ";

            }

        }   

    return 0;
}
*/
#include<iostream>
using namespace std;
int main () {
    for (int i=2; i<100; i++) 
        for (int j=2; j<i; j++){
            if (i % j == 0) 
                break;
            else if (i == j+1)
                cout << i << " ";
        }   
    return 0;
}