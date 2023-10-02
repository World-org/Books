#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

pair<int, int> findMinMaxX(int n, int m, vector<int>& a, vector<int>& b) {
    int min_x = a[0];
    int max_x = a[0];

    int or_b = 0;
    for (int bj : b) {
        or_b |= bj;
    }

    min_x |= or_b;
    max_x |= or_b;

    return make_pair(min_x, max_x);
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<int> a(n), b(m);

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        for (int i = 0; i < m; ++i) {
            cin >> b[i];
        }

        pair<int, int> result = findMinMaxX(n, m, a, b);

        cout << result.first << " " << result.second << endl;
    }

    return 0;
}
