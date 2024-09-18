#include<bits/stdc++.h>
using namespace std;

int dupNum(vector<int> &nums){
    int hsh[nums.size()]={0},i;
    for(i=0;i<nums.size();i++){
        hsh[nums[i]]++;
    }
    for(i=1;i<nums.size();i++){
        if(hsh[i]>1){
            return i;
        }
    }
}

int main(){
    vector<int> nums={3,1,3,4,2};
    int x=dupNum(nums);
    cout<<x<<endl;
    return 0;
}
