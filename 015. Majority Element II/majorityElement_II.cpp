#include <bits/stdc++.h>
using namespace std;

vector<int> majorityElementII(vector<int> &arr){
    int n= arr.size();
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
    vector<int> result;
	for(auto &e: cache){
		if(e.second > n/3){
			result.push_back(e.first);
		}
	}
	return result;
}

 int main() {
    int arr[] = [3, 2, 2, 1, 5, 2, 3]; 
    vector<int> result = majorityElementII(arr, 5);
    for(auto& e: result){
        cout<<e<<" ";
    }
    return 0;
 }