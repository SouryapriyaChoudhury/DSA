//Variety 2- element appearing more than n/3
//Solved by hashing..

/*
vector<int> Majorityelement(vector<int> v){
    vector <int> ls;
    int n=v.size();
    int min=(int)(n/3)+1;
    for(int i=0;i<=n-1;i++){
        mpp[v[i]]++;
        if(mpp[v[i]]==min){
            ls.push_back[v[i]];
        }
        if(ls.size==2)  break;  //since at maximun 2 elements can occur more than n/3 in an n size array..
    }
    O(2 x log 2)
    sort(ls.begin(),ls.end());
    return ls;
}
*/

//Variety 2 (At max of 2 elements can occur more than n/3 in a n size array)...
//T.C= O(2N)


#include <bits/stdc++.h>
using namespace std;
vector <int> majorityElement(vector<int> v) {
    int el1=INT_MIN;
    int el2=INT_MIN;
    int count1=0,count2=0;
    for(int i=0;i<v.size();i++){
    if(count1==0 && el2!=v[i]){
    count1=1;
    el1=v[i];
    }
    else if(count2==0 && el1!=v[i]){
        count2=1;
        el2=v[i];
    }
    else if(v[i]==el1) count1++;
    else if(v[i]==el2) count2++;
    else{
        count1--;
        count2--;
       }
    }
    vector <int> ls;
    count1=0,count2=0;
    for(int i=0;i<v.size();i++){
        if(el1==v[i]) count1++;
        if(el2==v[i]) count2++;
    }
    int min=(int)((v.size()/3))+1;
    if(count1>=min) ls.push_back(el1);
    if(count2>=min) ls.push_back(el2);
    sort(ls.begin(),ls.end());
    return ls;
}
int main(){
    vector <int> v={2,1,1,3,1,2,2,2};
    vector<int> k=majorityElement(v);
    for(auto it : k){
        cout<<it<<" ";
    }
    return 0;
}