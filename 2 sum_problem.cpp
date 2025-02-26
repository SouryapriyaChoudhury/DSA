//Brute solution
/*for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        //initialise j=i+1
       and remove if(i==j) continue;
       if(i==j) continue; //because we dont need to pick the same element..
       if(arr[i]+arr[j]==target){
            cout<<"["<<i<<","<<j<<"]"; //returns the index which sums upto the target sum
        }
    }
}*/


//Better soltuion will be by hashing..
//T(NlogN)..

//it is best solution when the given array is unsorted..
/*#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(int n, vector<int> &arr, int target) {
    unordered_map<int, int> mpp;
    for (int i = 0; i < n; i++) {
        int num = arr[i];
        int moreNeeded = target - num;
        if (mpp.find(moreNeeded) != mpp.end()) {
            return {mpp[moreNeeded], i};
        }
        mpp[num] = i;
    }
    return { -1, -1};
}

int main(){
    int n = 5;
    vector<int> arr = {2, 6, 5, 8, 11};
    int target = 14;
    vector<int> ans = twoSum(n, arr, target);
    cout << "This is the answer for variant 2: [" << ans[0] << ", "
         << ans[1] << "]" << endl;
    return 0;
}*/


// variety not the optimal solution as time complexity is
//T((n)+(nlogn))..
#include <bits/stdc++.h>
using namespace std;
int twoSum(int n, vector<int> &arr, int target){
int left=0;
int right=n-1;
while(left<right){
    int sum=arr[left]+arr[right];
    if(sum==target){
      return 1;
    }
    if(sum>target){
        right--;
    }
    if(sum<target){
        left++;
    }
}
    return -1;
}
int main()
{
    int n = 5;
    vector<int> arr = {2, 6, 5, 8, 11};
    int target = 140;
    sort(arr.begin(),arr.end());
    cout<<twoSum(n,arr,target);
    return 0;
}