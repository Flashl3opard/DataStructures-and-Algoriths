#include<bits/stdc++.h>
using namespace std;

void bubblesort(vector<int>& arr){
    int n = arr.size();
    for (int i=1 ; i<n ; i++){
        for (int j=0 ; j<n ; j++){
            if (arr[j+1]<arr[j]){
                swap(arr[j+1],arr[j]);
            }
        }
    }
}
int main(){
    vector<int> ls = {4,1,2,7,5};

    bubblesort(ls);
    for(int i=0 ; i<ls.size() ; i++){
        cout<<ls[i]<<" ";
    }
    return 0;
}