#include <bits/stdc++.h>
using namespace std;
int linearSearch(vector<int> &arr,int num,int n){
for(int i=0;i<n;i++){
    if(arr[i]==num){
        return i;
    }
}
return -1;  //if there is no number which is to be found..
}
int main(){
    int num,n;
    cin>>n;
    vector <int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the number to be searched: ";
    cin>>num;
    int k=linearSearch(arr,num,n);
    cout<<"Index is:"<<k;


    return 0;
}