#include <bits/stdc++.h> 
using namespace std;

int LongestSubsetWithZeroSum(vector < int > arr) {
  int arrSize = arr.size();
  int final_result=0;
  map<int, int> cache;

  vector<int> sumArr(arrSize, 0);
  sumArr[0]=arr[0];

  for(int i=1; i<arrSize; i++){
    sumArr[i]=sumArr[i-1]+arr[i];
  }

  cache.insert(make_pair(0, -1));
  auto temp = cache.begin();
    
  for(int i=0; i<arrSize; i++){
    if(sumArr[i]==0){
      final_result = max(final_result, i-0);
    } else {
      auto itr = cache.find(sumArr[i]);
      if(itr == cache.end()){
        cache.insert(make_pair(sumArr[i], i));
      } else {
        final_result = max(final_result, i - itr->second);
      }
    }
  }
//   for (auto it = cache.begin(); it != cache.end(); ++it) {
//         std::cout << "Key: " << it->first << ", Value: " << it->second << std::endl;
//     }
  cout<<endl;
  return final_result;
}

int main() {
    vector<int> arr = {1,3,-1,4,-4};
    cout<<LongestSubsetWithZeroSum(arr);
    return 0;
}