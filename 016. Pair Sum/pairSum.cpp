#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> pairSum(vector<int> &arr, int s){
   vector<vector<int>> result;
   sort(arr.begin(), arr.end());
   map<int, int> cache;

   for(int i=0; i<arr.size(); i++){
      auto itrOut = cache.find(s - arr[i]);
      if(itrOut != cache.end()){
         for(int j=0; j<(itrOut->second); j++)
            result.push_back({s-arr[i], arr[i]});
      }
      auto itrIns = cache.find(arr[i]);
      if (itrIns != cache.end()) {
         (itrIns->second)++;
      } else {
         cache.insert(make_pair(arr[i], 1));
      }
      
   }
   sort(result.begin(), result.end());
   return result;
}

int main() {
    int s = 5;
    vector<int> arr = {1, 2, 3, 4, 5};

    vector<vector<int>> result = pairSum(arr, s);
    for(auto& outer : result){
        for(auto& inner : outer){
            cout<<inner<<" ";
        }
        cout<<endl;
    }
}