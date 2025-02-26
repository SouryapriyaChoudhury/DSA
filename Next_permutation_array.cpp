//An array have many permutations to arrange its elements
//Next permutation - eg- arr[3,1,2] its nextpermutation will be [3,2,1]..

#include <bits/stdc++.h>
using namespace std;
vector <int> next_greater_permutation(vector <int>& a,int n){
    int index=-1;
    for(int i=n-2;i>=0;i--){
        if(a[i]<a[i+1]){
            index=i;
            break;
        }
    }
    if(index==-1){
        reverse(a.begin(),a.end());
        return a;
    }
    for(int i=n-1;i>index;i--){
        if(a[i]>a[index]){
            swap((a[i]),a[index]);
        }
    }
    reverse(a.begin()+index+1,a.end());
    return a;
}
int main(){
    vector<int> a={3,1,2};
    int n=a.size();
    vector <int> ans=next_greater_permutation(a,n);
    for(int i=0;i<n;i++){
    cout<<ans[i]<<" ";
    }
    return 0;
}