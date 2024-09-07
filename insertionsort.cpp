#include <bits/stdc++.h>
using namespace std;

void insertionsort(vector<int>&arr){
    int n = arr.size();
    for (int i=1 ; i<n ; i++){
        int temp = arr[i];
        for (int j=i-1 ; j>=0 ; j--){
            if (arr[temp]<arr[j]){
                swap(arr[j+1],arr[j]);
            }
            else{
                break;
            }
        }

    }
}
int main(){
    vector<int> ls = {4,1,2,7,5};

    insertionsort(ls);
    for(int i=0 ; i<ls.size() ; i++){
        cout<<ls[i]<<" ";
    }
    return 0;
}