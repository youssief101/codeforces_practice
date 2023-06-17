#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    cout << (((a == b || a == b + 1 || b == a + 1) && (!(a == b && a == 0))) ? "YES" : "NO") << endl;
    return 0;
}