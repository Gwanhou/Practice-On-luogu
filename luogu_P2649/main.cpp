#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    long long m, n;
    cin >> m >> n;
    long long deck[n + 1];
    int result = 0, max_re = 0;
    for (int i = 1; i <= n; i++) {
        cin >> deck[i];
    }
    sort(deck + 1, deck + 1 + n);
    for (int i = n, j = m * n; i > 0; i--, j--) {
        if (j == deck[i]) {
            result++;
        } else {
            result--;
            i++;
        }
        max_re = max(max_re, result);
    }
    cout << max_re;
    return 0;
}