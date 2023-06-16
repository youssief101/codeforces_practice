#include <iostream>
using namespace std;

int main() {
    long long int A, B, C;
    cin >> A >> B >> C;
    // get minimum value
    int minimum = A;
    if (B < minimum)
        minimum = B;
    if (C < minimum)
        minimum = C;

    // get maximum value
    int maximum = A;
    if (B > maximum)
        maximum = B;
    if (C > maximum)
        maximum = C;

    cout << minimum << " " << maximum << endl;
    return 0;
}