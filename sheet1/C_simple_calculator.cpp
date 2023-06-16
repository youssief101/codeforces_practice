#include <iostream>
using namespace std;

int main() {
    long long int X, Y;
    cin >> X >> Y;

    int sum = X + Y;
    long long int product = X * Y;
    int difference = X - Y;

    cout << X << " + " << Y << " = " << sum << endl;
    cout << X << " * " << Y << " = " << product << endl;
    cout << X << " - " << Y << " = " << difference << endl;

    return 0;
}
