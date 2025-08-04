#include<iostream>
using namespace std;
int main(){
    int n,i;
    cin>>n;
    int arr[n];
    float p=0,q=0,z=0;
    for (i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]>0){
            p+=1;
        }else if(arr[i]<0){
            q+=1;
        }else
        z+=1;
    }
    cout<<p/n<<endl<<q/n<<endl<<z/n<<endl;
}