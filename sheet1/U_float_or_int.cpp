#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    float N, floatVal;
    int iVal;
    cin >> N;
    cout << fixed << setprecision(3);
    iVal = N;
    floatVal = N - iVal;
    if (floatVal > 0) {
        cout << "float " << iVal << " " << floatVal << endl;
    } else {
        cout << "int " << iVal << endl;
    }
}
