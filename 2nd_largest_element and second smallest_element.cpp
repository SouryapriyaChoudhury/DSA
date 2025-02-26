//Arrays - It is a data structure with similar elements(int,char,float...).
#include <bits/stdc++.h>
using namespace std;
int second_largest(vector<int> &a, int n) {
    int largest = a[0];
    int secondLargest = -1;
    for (int i = 1; i < n; i++) { //2 4 6 8 9
        if (a[i] > largest) {
            secondLargest = largest;
            largest = a[i];
        } else if (a[i] < largest && a[i] > secondLargest) {
            secondLargest = a[i];
        }
    }
    return secondLargest;
}
int second_smallest(vector<int> &a, int n) {
    int smallest = a[0];
    int secondSmallest = INT_MAX;
    for (int i = 1; i < n; i++) {
        if (a[i] < smallest) {
            secondSmallest = smallest;
            smallest = a[i];
        } else if (a[i] != smallest && a[i] < secondSmallest) {
            secondSmallest = a[i];
        }
    }
    return secondSmallest;
}
vector<int> getSecondOrderElements(vector<int> a, int n) {
    int secondLargest = second_largest(a, n);
    int secondSmallest = second_smallest(a, n);
    return {secondLargest, secondSmallest};
}

int main() {
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    vector<int> ANS = getSecondOrderElements(a, n);
    cout << "Second largest element: " << ANS[0] << endl;
    cout << "Second smallest element: " << ANS[1] << endl;
    return 0;
}
