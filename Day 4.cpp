#include<bits/stdc++.h>
using namespace std;
void arraySort(vector<int>&arr1,vector<int>&arr2){
    int i=0,j=0,i1;
    while(j<arr2.size()){
        if(arr1[i]<arr2[j] && i<(arr1.size()-1)){i++;}
        else if(arr1[i]>arr2[j]){
            swap(arr1[i],arr2[j]);
            if(i<(arr1.size()-1)){i++;}
        }
        if(i==(arr1.size()-1)){j++;}
    }
    sort(arr1.begin(),arr1.end());
    sort(arr2.begin(),arr2.end());
    for(i1=0;i1<arr1.size();i1++){
        cout<<arr1[i1]<<" ";
    }
    cout<<endl;
    for(i1=0;i1<arr2.size();i1++){
        cout<<arr2[i1]<<" ";
    }
    cout<<endl;
}

int main(){
    vector<int> arr1={1,3,5,7},arr2={2,4,6,8};
    arraySort(arr1,arr2);
    return 0;
}
