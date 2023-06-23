#include <iostream>
using namespace std;

int main() {
    int n, X, Y;
    cin >> n;
    for (int i = 0; i < n; ++i) {

        cin >> X >> Y;

        int sum = 0;
        int start = (X < Y) ? X : Y;
        int end = (X > Y) ? X : Y;

        for (int k = start + 1; k < end; ++k) {
            if (k % 2 != 0)
                sum += k;        
        }
        cout << sum << endl;
    }

    return 0;
}