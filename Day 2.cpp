#include<bits/stdc++.h>
using namespace std;

int missNum(vector<int> &nums){
    int s;
    s=nums.size()+1;
    int hsh[s]={0},i;
    for(i=0;i<nums.size();i++){
        hsh[nums[i]]=1;
    }
    for(i=1;i<s;i++){
        if(hsh[i]==0){
            return i;
        }
    }
}

int main(){
    vector<int> nums={4,2,1,5,3,8,6,9};
    int x=missNum(nums);
    cout<<x<<endl;
}
