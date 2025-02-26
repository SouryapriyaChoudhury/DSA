//The subarray which gives maximum sum..
// brute better solution

/*maxi=INT_MIN;
for(int i=0;i<n;i++){
    sum=0;
  for(int j=0;j<n;j++){
    sum+=arr[i];
    maxi=max(sum,maxi);
   }
}*/


//Optimal solution ..
//Kadane's Algorithm..

#include <bits/stdc++.h>
using namespace std;
long long maxSubarraySum(int arr[],int n){
long long maxi=LONG_MIN;
long long sum=0;
for(int i=0;i<n;i++){
    sum+=arr[i];
    if(sum>maxi){
        maxi=sum;
    }
    if(sum<0){
        sum=0;
    }
}
    // To consider the sum of the empty subarray
    // uncomment the following check:
    //if (maxi < 0) maxi = 0;
    return maxi;
}
int main(){
    int arr[]={-2,1,-3,4,-1,2,1,-5,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    long long maxSum =maxSubarraySum(arr,n);
    cout<<"The maximum subarray sum is: "<<maxSum<<endl<<"if asked to print the subarray the soln given below";
    return 0;
}

//Follow up question.. 
//to print the subarray..
/*#include <bits/stdc++.h>
using namespace std;
void printMaxSubarray(int arr[], int start, int end) {
    for (int i = start; i <= end; i++) {
        cout << arr[i] << ",";
    }
}
long long maxSubarraySum(int arr[], int n) {
    long long maxi = LONG_MIN;
    long long sum = 0;
    int ansStart = -1;
    int ansEnd = -1;
    int start;
    for (int i = 0; i < n; i++) {
        if (sum == 0) {
            start = i;
        }
        sum += arr[i];
        if (sum > maxi) {
            maxi = sum;
            ansStart = start;
            ansEnd = i;
        }
        if (sum < 0) {
            sum = 0;
        }
    }
    printMaxSubarray(arr, ansStart, ansEnd);
    return maxi;
}
int main() {
    int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    long long maxSum = maxSubarraySum(arr, n);
    cout << "\nThe maximum subarray sum is: " << maxSum << endl;
    return 0;
}*/