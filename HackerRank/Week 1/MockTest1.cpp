//first question's function code of mock test
int findMedian(vector<int> arr) {
    sort(arr.begin(),arr.end());
    int median=arr[arr.size()/2];
    return median;
}


//Second question's function code of mock test i.e flipping the matrix question
int flippingMatrix(vector<vector<int>> matrix) {
    int n = matrix.size() / 2; 
    int maxSum = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int a = matrix[i][j];
            int b = matrix[i][2*n - j - 1];
            int c = matrix[2*n - i - 1][j];
            int d = matrix[2*n - i - 1][2*n - j - 1];
            
            maxSum += max({a, b, c, d});
        }
    }

    return maxSum;
}