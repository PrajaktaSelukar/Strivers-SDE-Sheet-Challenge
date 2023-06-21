#include <bits/stdc++.h>
using namespace std;

int findMajorityElement(int arr[], int n) {
	map<int, int> cache;
	map<int, int>::iterator it;
	for(int i=0; i<n; i++){
		it = cache.find(arr[i]);
		if(it != cache.end()){
			it->second++;
		}else{
			cache.insert(make_pair(arr[i], 1));
		}
	}
	for(auto &e: cache){
		if(e.second > n/2){
			return e.first;
		}
	}
	return -1;
}

 int main() {
    int arr[] = [2, 3, 9, 2, 2]; 
    cout<<findMajorityElement(arr, 5);
    return 0;
 }