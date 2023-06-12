#include <bits/stdc++.h>
using namespace std;

vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
    for(int i=0; i<n; i++){
    // cout<<i<<" "<<i+m-n;
		arr1[m+i]= arr2[i];
		// cout<<" "<<arr2[i]<<endl;
	}
	if(m>0 && arr1[m-1] > arr1[m])
	sort(arr1.begin(), arr1.end());
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
