#include <bits/stdc++.h>
using namespace std;
vector <int> sortedArray(vector<int> a,vector<int> b){
    int n1=a.size();
    int n2=b.size();
    int i=0;
    int j=0;
    vector <int> unionArr;
    while(i<n1 && j<n2){
        if(a[i]<=b[j]){
            if(unionArr.size()==0 || unionArr.back()!=a[i]){
            unionArr.push_back(a[i]);
          }
          i++;
        }
        else{
            if(unionArr.size()==0||unionArr.back()!=a[i]){
            unionArr.push_back(a[i]);
          }
          j++;
        }
    }
   while(j<n2){
   if(unionArr.size()==0||unionArr.back()!=b[j]){
     unionArr.push_back(b[j]);
          }
          j++;
   }
   while(i<n1){
   if(unionArr.size()==0||unionArr.back()!=a[i]){
     unionArr.push_back(a[i]);
          }
          i++;
   }
   return unionArr;
   }
int main(){
    vector <int> a,b;
    int n1 = a.size();
    int n2 = b.size();
    
    cout<<"Enter the first array :";
    for(int i=0;i<n1;i++){
        cin>>a[i];
    }
    cout<<"Enter the second array :";
    for(int j=0;j<n2;j++){
        cin>>b[j];
    }
    vector<int> k=sortedArray(a,b);
    int n=k.size();
    cout<<"After union: ";
    for(int i=0;i<n;i++){
    cout<<k[i]<<" ";
    }
    return 0;
}