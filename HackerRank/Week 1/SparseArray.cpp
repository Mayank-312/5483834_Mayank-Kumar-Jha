#include <bits/stdc++.h>
using namespace std;

vector<int> matchingStrings(vector<string> strings, vector<string> queries) {
    unordered_map<string, int> mp;
    for (int i = 0; i < strings.size(); i++) {
        mp[strings[i]]++;
    }

    vector<int> result;
    for (int i = 0; i < queries.size(); i++) {
        if (mp.find(queries[i]) == mp.end()) {
            result.push_back(0);
        }
        else {
            result.push_back(mp[queries[i]]);
        }
    }
    return result;
}

int main() {
    int n;
    cout << "Enter number of strings: ";
    cin >> n;

    vector<string> strings(n);
    cout << "Enter the strings:\n";
    for (int i = 0; i < n; i++) {
        cin >> strings[i];
    }

    int q;
    cout << "Enter number of queries: ";
    cin >> q;

    vector<string> queries(q);
    cout << "Enter the queries:\n";
    for (int i = 0; i < q; i++) {
        cin >> queries[i];
    }

    vector<int> result = matchingStrings(strings, queries);

    cout << "Results:\n";
    for (int count : result) {
        cout << count << " ";
    }
    cout << endl;

    return 0;
}
