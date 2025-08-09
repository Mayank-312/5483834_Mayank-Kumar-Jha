#include <bits/stdc++.h>
using namespace std;

int lonelyinteger(vector<int> a) {
    sort(a.begin(), a.end());
    for (int i = 0; i < a.size(); i += 2) {
        if (i + 1 >= a.size() || a[i] != a[i + 1]) {
            return a[i];
        }
    }
    return -1;
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cout << lonelyinteger(a) << endl;
    return 0;
}
