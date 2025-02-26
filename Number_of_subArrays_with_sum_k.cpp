//Array-{1,3,4,5,6}
//subarray-{1,3,4},{5,6} not {1,5,6} subarrays must be contigious..

/*
//count subarray with sum k brute
#include <bits/stdc++.h>
using namespace std;
int main(){
vector<int> v={2,2,1,3,5,-1,5}; 
int k=4;
int count=0;
int sum;
for(int i=0;i<v.size();i++){
    sum=0;
    for(int j=i;j<v.size();j++){
        sum+=v1[j];
        if(sum==k){
            count++;
        }
    }
}
cout<<count;
return 0;
}
*/

#include <bits/stdc++.h>
using namespace std;
int findAllsubArrayswithGivensum(vector <int> &a,int k){
    unordered_map<int,int> mpp;
    mpp[0]=1; //its important to store..
    int pre_sum=0;
    int count=0;
    for(int i=0;i<a.size();i++){ //T.C= O(nlogn) , S.C= O(N) ......
        pre_sum+=a[i]; 
        int remove=pre_sum-k;
        count+=mpp[remove];
        mpp[pre_sum]+=1;
    }
    return count;
}
int main(){
    int k=3;
    vector <int> a={1,2,3,-3,1,1,1,4,2,-3};
    int res=findAllsubArrayswithGivensum(a,k);
    cout<<"Count of subarrays with given sum: "<<res;
    return 0;
}