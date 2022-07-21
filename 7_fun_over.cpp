#include<iostream>
using namespace std;
class function_overload{
protected:
	int x;
public:
	function_overload (int i):x(i) { }
	void function() const { cout << "function() const " << endl; }
	void function()	 { cout << "function() " << endl;	 }
};
int main(){
	function_overload fo1 (10);
	const function_overload fo2 (20);
	fo1.function();
	fo2.function();
	return 0;
}