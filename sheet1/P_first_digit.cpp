#include <iostream>
using namespace std;

int main() {
    int X, firstDigit;
    cin >> X;
    firstDigit = X / 1000;
    if ((firstDigit % 2 == 0) && X != 999) {
        cout << "EVEN" << endl;
    } else {
        cout << "ODD" << endl;
    }
}