#include <iostream>
using namespace std;

int main() {
    long long int n, m, k, katryoshkas{0}; 
    cin >> n >> m >> k;
    if (n <= m || k <= m)
        k < n ? katryoshkas = k : katryoshkas = n;
    else {
        n -= m; k -= m; katryoshkas += m;
        n / 2 >= k ? katryoshkas += k : katryoshkas += (n / 2);
    }
    cout << katryoshkas << endl;
    return 0;
}