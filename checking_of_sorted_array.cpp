#include <bits/stdc++.h>
using namespace std;
bool isSorted(vector<int> &arr,int n){
    for(int i=1;i<n;i++){
    if(arr[i]>=arr[i-1]){
    return true;
    }
}
    return false;
}
int main(){
    int n;
    vector <int> arr(n);
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>n;
    }
    int k=isSorted(arr,n);
    cout<<k;
    return 0;
}