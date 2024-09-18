#include<bits/stdc++.h>
using namespace std;

vector<int> leaderElement(vector<int> &arr){
    int i,j,flag=0;
    vector<int> v;
    for(i=0;i<arr.size();i++){
        flag=0;
        for(j=i;j<arr.size();j++){
            if(arr[i]<arr[j]){
                flag=1;
            }
        }
        if(flag==0){
            v.push_back(arr[i]);
        }
    }
    return v;
}

int main(){
    vector<int> arr={16,17,4,3,5,2};
    vector<int> leader=leaderElement(arr);
    for (int i = 0; i < leader.size(); i++){
        cout<<leader[i]<<" ";
    }
    cout<<endl;
    return 0;
}
