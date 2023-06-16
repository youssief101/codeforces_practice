#include <iostream>
#include <cmath>

using namespace std;

int main() {
    long long A, B, C, D;
    cin >> A >> B >> C >> D;
    cout << ((B * log(A)) > (D * log(C)) ? "YES" : "NO");
    return 0;
}
