#include <bits/stdc++.h>
using namespace std;

vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
    for(int i=0; i<n; i++){
        arr1[m+i]= arr2[i];
        
        int temp=m+i-1;
        int storeCompElement = arr2[i];
        while(temp>=0 && arr1[temp] > storeCompElement){
            arr1[temp+1] = arr1[temp];
            temp--;
        }
        arr1[temp+1]=storeCompElement;
    }
    return arr1;
}

int main() {
    vector<int> arr1 = {1,2,3,0,0};
    vector<int> arr2 = {4,5};
    vector<int> result = ninjaAndSortedArrays(arr1, arr2, 5, 2);
    for(int i=0; i<5; i++){
        cout<<result[i]<<" ";
    }
    
    return 0;
}