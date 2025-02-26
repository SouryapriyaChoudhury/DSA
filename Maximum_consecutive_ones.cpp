#include <bits/stdc++.h>
using namespace std;
int FindMaxconsecutiveOnes(vector <int>&arr){
int count=0,maxi=0;
for(int i=0;i<arr.size();i++){
    if(arr[i]==1){
        count++;
        maxi=max(maxi, count);
    }
    else{
        count=0;
    }
}
return maxi;
}
int main(){
    vector <int>arr={1,1,0,0,0,1,1,1,1,1,1,0,0,1,1};
    int ans=FindMaxconsecutiveOnes(arr);
    cout<<"Maximum consecutive ones are: "<<ans<<endl;
    return 0;
}