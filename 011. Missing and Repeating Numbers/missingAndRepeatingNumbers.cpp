#include <bits/stdc++.h>
using namespace std;

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	pair<int, int> result;
	for(int i=0; i<n; i++){
		if(arr[abs(arr[i])-1] < 0){
			result.second = abs(arr[i]);
		} else {
			arr[abs(arr[i])-1] = -(arr[abs(arr[i])-1]);
		}
	}
	int temp=0;
	while(arr[temp]<0){
		temp++;
	}
	result.first = temp+1;
	
	return result;
}

int main() {
    vector<int> arr= {2,3,2};
    int n=3;

    pair<int, int> result = missingAndRepeating(arr, n);
    cout<<result.first<<" "<<result.second<<endl;

    return 0;
}