#include <iostream>
using namespace std;
int main() {
  float num = 88.17;
  int x1 = (int) num;
  int x2 = int(num);
  int x3 = static_cast<int>(num);
  cout << "x1 = " << x1 << endl;
  cout << "x2 = " << x2 << endl;
  cout << "x3 = " << x3 << endl;
}