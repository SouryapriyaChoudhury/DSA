// Given an array of size n where each element is in
// the range [0, n-1] (inclusive), and there is exactly one
// duplicate. How would you find the duplicate without
// modifying the array and using O(1) extra space

#include <iostream>
using namespace std;

int findDuplicate(int arr[] , int n)
{
    int answer=0;
    //XOR all the elements with 0
    for(int i=0; i<n; i++){
       answer=answer^arr[i];
    }
      //XOR all the elements with no from 1 to n
      // i.e   answer^0 = answer
    for(int i=1; i<n; i++){
       answer=answer^i; //since elements ranging from [0,n-1]..
    }
    return answer;
}

//Driver code
int main() {
    int arr[] = { 1, 3, 2, 1 };
      int n = sizeof(arr) / sizeof(arr[0]);
    cout << findDuplicate(arr,n);
    return 0;
}