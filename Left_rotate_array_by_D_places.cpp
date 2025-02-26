#include <bits/stdc++.h>
#include<iostream>
using namespace std;
void rotate(int arr[],int n,int d){
    reverse(arr,arr+d);  //inbuilt STL (reverse), you can create a manual reverse function ..
    reverse(arr+d,arr+n);
    reverse(arr,arr+n);
}
int main(){
  int n,d;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  cout<<"enter d:";
  cin>>d;
  rotate(arr,n,d);
  for(int i=0;i<n;i++){
  cout<<arr[i]<<" ";
  }
    return 0;
}