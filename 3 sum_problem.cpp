//problem conditions- different unique triplets(3 elements ) which should sum up to zero (TARGET SUM)..
// and to return unique triplets..

//brute appraoch - 3 loops i=0->n,j=i+1->n,k=j+1->n.. and check the unique elements(by set DS)..
//better approach by hashing..Tc will be O(N^2)..

//optimal solution by 2 pointer appraoch..


#include<bits/stdc++.h>
using namespace std;
//T.C= O(N^2)+(NLOGN)
//S.C= O( number of unique triplets)..

vector<vector<int>> triplets(int n,vector<int> &num){
    vector<vector<int>> ans;
    
    sort(num.begin(),num.end());
    for(int i=0;i<n;i++){
        if(i>0 && num[i]==num[i-1]) continue; //continue will take you to the next iteration of loop..(we need unique elements)
        int j=i+1;
        int k=n-1;
        int sum=num[i]+num[j]+num[k];
        while(j<k){
            if(sum<0){
                j++;
            }
            else if(sum>0){
                k--;
            }
            else{ //when sum==0
                vector <int>temp={num[i],num[j],num[k]};
                ans.push_back(temp);
                j++; //after getting one triplet we must move on the j and k pointer ..
                k++;
                while(j<k &&num[j]==num[j-1]) j++;
                while(j<k &&num[k]=num[k+1]) k--;
            }
        }
    }
    return ans;
}


int main(){

    return 0;
}