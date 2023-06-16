#include <iostream>
using namespace std;

int main() {
    long long int A, B, C, max, min, mid;
    cin >> A >> B >> C;
    // determine max num
    max = A;
    if (B > max)
        max = B;
    if (C > max)
        max = C;
    
    // determine min num
    min = A;
    if (B < min)
        min = B;
    if (C < min)
        min = C;

    // determine mid num
    if (max == B && min == C) {
        mid = A;
    } else if (max == A && min == C) {
        mid = B;
    } else {
        mid = C;
    }
    cout << min << "\n" << mid << "\n" << max << "\n" << endl;
    cout << A << "\n" << B << "\n" << C << endl;
}