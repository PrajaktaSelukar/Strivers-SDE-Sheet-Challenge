#include <bits/stdc++.h> 
using namespace std;

long long getInversions(long long *arr, int n){
    long long count = 0;
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i] > arr[j]) count++;
        }
    }
    return count;
}

int main(){
    long long arr = [5, 1, 4, 3, 2];
    cout<<getInversions(arr, 5);
}