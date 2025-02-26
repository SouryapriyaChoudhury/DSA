#include <bits/stdc++.h>
using namespace std;

pair<int, int> FindMaxConsecutiveElement(vector<int>& arr) {
    int count = 1, maxi = 1, maxElement = arr[0];

    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] == arr[i - 1]) {
            count++;
        } 
        else {
            count = 1;
        }
        if (count > maxi) {
            maxi = count;
            maxElement = arr[i];
        }
    }

    return {maxElement, maxi};
}

int main() {
    vector<int> arr = {1,1,2,2,2,2,0,0,0,1,1,1,1,1,1,6,5,5,5,9,0,0,9,0,1,1,9,9,9,9,9,9,9,9,9,9};
    auto ans = FindMaxConsecutiveElement(arr);
    cout << "Number with the maximum consecutive occurrence: " << ans.first 
         << ", occurring " << ans.second << " times consecutively." << endl;
    return 0;
}
