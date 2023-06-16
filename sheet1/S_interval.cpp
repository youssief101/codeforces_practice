#include <iostream>
using namespace std;

int main() {
    double X;
    cin >> X;
    if (0 <= X && X <= 25) {
        cout << "Interval [0,25]" << endl;
    } else if (25 < X && X <= 50) {
        cout << "Interval (25,50]" << endl;
    } else if (50 < X && X <= 75) {
        cout << "Interval (50,75]" << endl;
    } else if (75 < X && X <= 100) {
        cout << "Interval (75,100]" << endl;
    } else {
        cout << "Out of Intervals" << endl;
    }
}