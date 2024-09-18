#include<bits/stdc++.h>
using namespace std;

vector<multiset<int> > subArray(vector<int> &nums){
    int i,j,sum;
    vector<multiset<int> > v;
    for(i=0;i<nums.size();i++){
        sum=nums[i];
        if(nums[i]==0){
            for(j=i;j<nums.size();j++){
                if(sum==0){
                    multiset<int> s;
                    s.insert(i);
                    s.insert(j);
                    v.push_back(s);
                }
            }
        }
        else{
            for(j=i+1;j<nums.size();j++){
                sum+=nums[j];
                if(sum==0){
                    multiset<int> s;
                    s.insert(i);
                    s.insert(j);
                    v.push_back(s);
                }
            }
        }
    }
    return v;
}

int main(){
    vector<int> nums={-3,1,2,-3,4,0};
    vector<multiset<int> > v1=subArray(nums);
    cout<<"[";
    int flag=0;
    for(auto it : v1){
        if(flag==0){
            cout<<"(";
            flag++;
        }
        else{
            cout<<",(";
        }
        int cnt=0;
        for(auto ele : it){
            if(cnt==0){
                cout<<ele<<",";
                cnt++;
            }
            else{
                cout<<ele;
            }
        }
        cout<<")";
    }
    cout<<"]";
    return 0;
}
