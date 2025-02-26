#include <bits/stdc++.h>
using namespace std;
vector <int> moveZeros(vector<int> & a, int n){
int j=-1;
for(int i=0;i<n;i++){
if(a[i]==0){
    j=i;
    break;
}
}
//no non-zero elements:
if (j==-1) return a;

for(int i=j+1;i<n;i++){
    if(a[i]!=0){
       swap(a[i],a[j]);
       j++; 
    }
}
return a;
}
int main(){
    int n;
    vector <int> a={0,5,0,6,8,0,0,0,3,0,1,1};
    n=a.size();
    vector <int> k=moveZeros(a,n);
    cout<<"{ ";
    for(int i=0;i<n;i++){
        cout<<k[i]<<" ";
    }
    cout<<"}";

    return 0;
}