//most optimal solution
//Dutch national flag Algorithm (Three pointer approach)

#include <bits/stdc++.h>
using namespace std;
void sortArray(vector<int> &arr,int n){
    int high=n-1,low=0,mid=0;
    while(mid<=high){
        if(arr[mid]==0){
            swap(arr[low],arr[mid]);
            low++;
            mid++;
            }
            else if(arr[mid]==1){
               mid++;
            }
            else{
                swap(arr[mid],arr[high]);
                high--;
            }
        }
    }

int main(){
    vector<int> arr={1,2,2,0,0,1,0,0,2,2,0,1,1}; 
    int n=arr.size(); 
    sortArray(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}