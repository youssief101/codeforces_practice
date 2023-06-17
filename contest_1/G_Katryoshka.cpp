#include <iostream>
using namespace std;

int main() {
    long long int n, m, k;
    cin >> n >> m >> k;

    long long int katryoshkas = 0;
    if (n <= m || k <= m) {
        katryoshkas = min(n, k);
    } else {
        katryoshkas = m + min((n - m) / 2, k - m);
    }

    cout << katryoshkas << endl;
    return 0;
}
