//Majority element - element which occurs more than n/2 times..


//By hashing =>TC= O(NlogN)+O(N) , SC=O(N)..

/*#include <bits/stdc++.h>
using namespace std;
int majorityElement(vector <int> v){
    map<int,int>mpp;
    //NlogN
    for(int i=0;i<v.size();i++){
        mpp[v[i]]++;
    }
    //O(N)
for(auto it:mpp){
    if(it.second>(v.size()/2)){
        return it.first;
    }
}
return -1;
}
int main(){
    vector<int> v;
    v={2,2,1,3,1,1,3,1,1};
    int ans=majorityElement(v);
    cout<<"Majority Element(element which occur more than n/2 times is) : "<<ans<<endl;
    return 0;
}*/
  

//Solved by Moore's Voting Algorithm..(Optimal solution)..
//TC = O(N)..
//Variety1 (Only 1 element can occur more than n/2 in a n size array..)

#include <bits/stdc++.h>
using namespace std;
int majorityElement(vector<int> v){
    int count=0;
    int el;
    for(int i=0;i<v.size();i++){
        if(count==0){
            count=1;
            el=v[i];
        }
        else if(v[i]==el){
            count++;
        }
        else{
            count--;
        }
    }
    int cnt=0;
    for(int i=0;i<v.size();i++){
        if(v[i]==el){
            cnt++;
        }
    }
        if(cnt>(v.size()/2)){
            return el;
        }
    
    return -1;
}
int main(){
    vector<int> v;
    v={2,2,2,2,1,1,1,1,3,1,1,3,1,1};
    int ans=majorityElement(v);
    cout<<"Majority Element(element which occur more than n/2 times is) : "<<ans<<endl;
    return 0;
}
