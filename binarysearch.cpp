#include <bits/stdc++.h>
using namespace std;

int binarysearch(vector<int>& arr , int k){
    int s=0;
    int e=arr.size();
    int mid = (s+e)/2;
    while (s<e){
        if (arr[mid] == k){
            return mid;
        }
        else if (arr[mid]<k){
            s = mid;
        }
        else{
            e = mid;
        }
        mid = (s+e)/2;
    } 
    return -1;
    
}

int main(){
    vector<int> ls = {3,6,9,12,15};
    int key;
    
    int t=5;
    while (t--){
        cin>>key;
        cout<<binarysearch(ls,key)<<endl;
    }
    
}