#include <iostream>
#include<bits/stdc++.h>
using namespace std;

vector<int> nextPermutation(vector<int> &permutation, int n)
{
    if(n==1){
        cout<<"1"<<endl;
        return permutation;
    } else if(n>1){
        int i=n-2;
        for(; i>=0; i--){
          if (i==0 && permutation[i] > permutation[i + 1]) {
            reverse(permutation.begin(), permutation.end());
            cout<<"2"<<endl;
            return permutation;
          } else if(permutation[i] < permutation[i+1]){
            break;
          }
        }
        cout<<i<<endl;
        int j=n-1;
        
        while(permutation[i] > permutation[j]){
            j--;
        }
        cout<<j<<endl;
        swap(permutation[j], permutation[i]);
        int low=i+1, high=n-1;
        while(low<=high){
            swap(permutation[low++], permutation[high--]);
        }
        
        return permutation;
    }
}

int main() {
    vector<int> permutation = {1,4,3,2 };
    nextPermutation(permutation,4);
    for(int i=0; i<6; i++){
        cout<<permutation[i]<<" ";
    }
    return 0;
}