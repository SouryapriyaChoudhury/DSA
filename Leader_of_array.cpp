//Leaders in an array - everthing of the right is smalllest
//eg- arr={2,4,8,22,9,1,6}- 22,9,6 is a leader as every element in the right of 22 is smaller than 22.... 

#include <bits/stdc++.h>
using namespace std;
vector <int> leader(vector<int> &arr,int n){
    vector <int> sol;
    int maxi=INT_MIN;
    for(int i=n-1;i>=0;i--){
        if(arr[i]>maxi){
        sol.push_back(arr[i]);
        //maxi=arr[i]; this also can be used instead of max function
        }
        maxi=max(maxi,arr[i]);
    }
    sort(sol.begin(),sol.end());
    return sol;
}
int main(){
    vector<int> arr={2,4,8,22,9,1,6};
    int n=arr.size();
    vector <int> ans=leader(arr,n);
    for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<" ";
    }
    return 0;
}
/*
From an interviewer's perspective, understanding the difference between maxi = arr[i]; and maxi = max(maxi, arr[i]); comes down to both clarity and efficiency.
Here’s a breakdown:
Correctness and Efficiency: In this specific code, maxi = arr[i]; is sufficient and efficient. Since we only update maxi inside the if condition where arr[i] > maxi, assigning maxi = arr[i]; directly is not only correct but also clearer and slightly more efficient. Using max(maxi, arr[i]); here would be redundant because we’re already checking arr[i] > maxi in the if statement.
Clarity: Interviewers generally appreciate code that’s simple and direct. Setting maxi = arr[i]; directly after the condition (if (arr[i] > maxi)) shows clear intent, which is often valued. It also demonstrates an understanding of conditional logic — that if a condition is true, we can confidently assign a value without an extra check.
Why max(maxi, arr[i]); Might Seem Tempting: Sometimes, candidates might overuse max() because it feels like a “safe” approach. However, using max() here would imply we might expect arr[i] to be less than or equal to maxi, which we’ve already excluded by the if condition.
What an Interviewer Looks For:
An interviewer is typically looking for:
Code Simplicity and Purposefulness: If a condition guarantees an outcome, then a straightforward assignment (like maxi = arr[i];) is often better than a call to max() which performs an unnecessary comparison.
Performance Awareness: While the performance difference is minimal here, avoiding an unnecessary max() shows attention to micro-optimizations that accumulate in larger codebases.
Confidence in Logic: Using maxi = arr[i]; shows you understand when a simple assignment is sufficient and that you've thought through the logic rather than relying on a function to handle all cases.
Final Takeaway
For this code, maxi = arr[i]; is the better choice. It’s efficient, clear, and logically correct within the context of the if condition.
*/