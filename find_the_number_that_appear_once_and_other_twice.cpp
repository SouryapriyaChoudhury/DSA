#include <bits/stdc++.h>
using namespace std;
int numberAppearOnce(vector<int> &arr){
    int XOR=0;
    for(int i=0;i<arr.size();i++){
        XOR=XOR^arr[i];
    }
    return XOR;
}
int  main(){
    vector <int> arr={1,1,7,3,3,4,4,5,5}; //this array is given in the problem statement
    int res=numberAppearOnce(arr);
    cout<<"Number that appear once is :"<<res<<endl;
    return 0;
}