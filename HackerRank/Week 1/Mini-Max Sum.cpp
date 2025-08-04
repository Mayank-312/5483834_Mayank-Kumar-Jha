#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector <int> v;
    for(int i=0;i<5;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    long long mini_Sum=0;
    long long max_Sum=0;
    for(int i=1;i<5;i++){
        max_Sum=max_Sum+v[i];
    }
    for(int i=0;i<4;i++){
        mini_Sum=mini_Sum+v[i];
    }
    cout<<mini_Sum<<" "<<max_Sum<<endl;
    
}
