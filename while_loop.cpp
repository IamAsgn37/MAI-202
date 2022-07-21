#include <iostream>
using namespace std;
int main() {
    int number;
    int sum = 0;
    cout << "Take input untill enter negative \nEnter a number: ";
    cin >> number;
    while (number >= 0) {
        sum += number;
        cout << "Enter a number: ";
        cin >> number;
    }
    cout << "\nThe sum is " << sum << endl;
    return 0;
}