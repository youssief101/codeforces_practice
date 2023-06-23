#include <iostream>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;
    int ans{1};
    for (int i{1}; i <= A; ++i) {
        if (A % i == 0 && B % i == 0)
            ans = i;
    }
    cout << ans << endl;
    return 0;
}