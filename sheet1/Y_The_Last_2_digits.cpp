#include <iostream>
using namespace std;

int main() {
    unsigned long long int A, B, C, D, result;
    cin >> A >> B >> C >> D;
    result = ((A % 100) * (B % 100) * (C % 100) * (D % 100)) % 100;
    if (result <= 9 && result >= 0)
        cout << "0" << result << endl;
    else
        cout << result << endl;
    return 0;
}
