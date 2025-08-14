#include <iostream>
using namespace std;

vector<int> countingSort(vector<int> arr) {
    vector<int> frequencyarr(100, 0);
    for (int i = 0; i < arr.size(); i++) {
        frequencyarr[arr[i]]++;
    }
    return frequencyarr;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    vector<int> result = countingSort(arr);
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;
    return 0;
}
