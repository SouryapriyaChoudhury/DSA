#include <bits/stdc++.h>
using namespace std;
int remove_duplicates(vector <int> &arr,int n){
    int i=0;
    for(int j=1;j<n;j++){
    if(arr[j]!=arr[i]){
        arr[i+1]=arr[j];
        i++;
    }
    }
    return (i+1);
} 
int main(){
    int n;
    cin>>n;
    vector <int> arr(n);
    for(int i=0;i<n;i++){
    cin>>arr[i];
    }
    int x=remove_duplicates(arr,n);
    cout<<"Number of unique elements are: "<<x;
    return 0;
}