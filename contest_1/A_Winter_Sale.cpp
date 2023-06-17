#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    float X, P, price;
    cin >> X >> P;
    cout << fixed << setprecision(2);
    price = P * (100 / (100 - X));
    cout << price << endl;
}