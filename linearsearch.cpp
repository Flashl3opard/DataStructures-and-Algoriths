#include<bits/stdc++.h>
using namespace std;

int linearsearch(vector<int>& arr , int k){
    int n = arr.size();
    for (int i=0; i<n;i++){
        if (arr[i]==k){
            return i;
        }
    }
    return -1;
    
}
int main(){
    vector<int> ls = {1,4,7,9,12,15};
    int key = 9;
    cout<< linearsearch(ls,key);
}