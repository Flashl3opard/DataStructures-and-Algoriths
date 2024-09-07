#include <bits/stdc++.h>
using namespace std;

void selectionsort(vector<int>& arr){
    int n = arr.size();
    for (int i=1 ; i<n ; i++){
        int minm = i;
        for (int j=i+1 ; j<n ; j++){
            if (arr[j]>arr[minm]){
                minm = j;
                
            }
        swap(arr[i],arr[minm]);
        
        }
    }
}
int main(){
    vector<int> ls = {4,1,2,7,5};

    selectionsort(ls);
    for(int i=0 ; i<ls.size() ; i++){
        cout<<ls[i]<<" ";
    }
    return 0;
}