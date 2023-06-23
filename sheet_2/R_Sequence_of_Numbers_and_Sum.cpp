#include <iostream>
using namespace std;

int main() {
    int N, M;
    while (cin >> N >> M) {
        if (N <= 0 || M <= 0)
            break;
            
        int sum = 0;
        int start = (N < M) ? N : M;
        int end = (M > N) ? M : N;

        for (int i = start; i <= end; ++i) {
            cout << i << " ";
            sum += i;
        }

        cout << "sum =" << sum << endl;
    }

    return 0;
}