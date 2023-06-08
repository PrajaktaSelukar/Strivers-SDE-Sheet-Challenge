#include <bits/stdc++.h>
using namespace std;

int findDuplicate(vector<int> &arr, int n){
	sort(arr.begin(), arr.end());
	int i=0;
	while(i<n){
		if(arr[i]==arr[i+1]){
			return arr[i];
		}
		i++;
	}
}

int main() {
    vector<int> nums = {1, 3, 4, 2, 2};
    
    cout<<findDuplicate(&nums, 5);
    
    return 0;
}