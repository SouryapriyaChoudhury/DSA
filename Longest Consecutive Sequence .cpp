#include <bits/stdc++.h>
using namespace std;
int longSuccessiveelements(vector <int> &a){
    //T.C= O(3N)....
    int n =a.size();
    if(n==0)return 0;
    int longest=1;
    unordered_set<int> st;
    for(int i=0;i<n;i++){
        st.insert(a[i]);
    }
    for(auto it : st){
        if(st.find(it-1)==st.end()){
        int cnt=1;
        int x=it;
        while(st.find(x+1)!=st.end()){
            x=x+1;
            cnt+=1;
        }
        longest=max(longest,cnt);
        }
    }
    return longest;
}
int main(){
    vector <int> a={6,5,1,100,102,3,4,101,2};
    int ans= longSuccessiveelements(a);
    cout<<"length of longest consecutive sequence: "<<ans;
    return 0;
}