//Brute better solution...(for postives,negatives and 0 integer)..

/*#include <bits/stdc++.h>
using namespace std;
int longestSubarraywithSumk(vector <int> &arr,int k){
map<long long ,int> preSumMap;
long long sum=0;
int maxLen=0;
for(int i=0;i<arr.size();i++){
    sum=sum+arr[i];
    if(sum==k){
        maxLen=max(maxLen,i+1);
    }
    long long rem=sum-k;
    if(preSumMap.find(rem)!=preSumMap.end()){
        int len=i-preSumMap[rem];
        maxLen=max(maxLen,len);
    }
    if(preSumMap.find(sum)==preSumMap.end()){
        preSumMap[sum]=i;
    }
}
return maxLen;
}
int main(){
int k=3;
vector<int> arr={1,2,4,1,0,1,0,1,5,7,3,1,1,1};
int res=longestSubarraywithSumk(arr,k);
cout<<"Longest sub array with sum "<<k<<" is: "<<res<<endl;
return 0;
}
*/

//Optimal solution..(for postives and 0 integer)..

#include <bits/stdc++.h>
using namespace std;
int longestSubarraywithSumk(vector <int> &arr,int k){
int maxLen=0;
int left=0,right=0;
long long sum=arr[0];
int n=arr.size();
while(right<n){
    while(left<=right && sum>k){
    sum-=arr[left];
    left++;
    }
    if(sum==k){
        maxLen=max(maxLen,right-left+1);
    }
    right++;
    if(right<n){ 
    sum+=arr[right];
    }
}
return maxLen;
}
int main(){
int k=3;
vector<int> arr={1,2,4,1,0,1,0,1,5,7,3,1,1,1};
int res=longestSubarraywithSumk(arr,k);
cout<<"The length of longest sub array with sum "<<k<<" is: "<<res<<endl;
return 0;
}