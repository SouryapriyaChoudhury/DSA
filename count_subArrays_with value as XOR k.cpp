
#include <bits/stdc++.h>
using namespace std;
//T.C = O(N) or O(NlogN) depends on mapping..
//S.C = O(N)..
int SubarrayswithsumK(vector<int> &arr,int k){
    map<int,int> mpp;
    int count =0;
    int XOR=0;
    mpp[XOR]++;  // to make sure to include {0,1}.. i.e 0 occur 1 times..
    for(int i=0;i<arr.size();i++){
        XOR=XOR^arr[i];
        int x= XOR^k;
        count+=mpp[x];
        mpp[XOR]++; //to go further we have to put it into the map..
    }
    return count;
}
int main(){
    int k=6;
    vector <int> arr={4,2,2,6,4};
    int res=SubarrayswithsumK(arr,k);
    cout<<"Number of subarrays with XOR k: "<<res<<endl;
    return 0;
}