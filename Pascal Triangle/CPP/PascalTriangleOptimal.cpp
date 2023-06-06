#include <bits/stdc++.h>
using namespace std;

vector<vector<long long int>> printPascal(int n) 
{
  vector<vector<long long int>> final_result(n);
  long long int tempValue = 0;

  for (int row = 0; row < n; row++) {
      final_result[row].resize(row+1, 1);
      for (int column = 0; column <= row/2; column++) {
          if(row==0 || column==0 || column==row){
              tempValue = 1;
          } else {
              tempValue = final_result[row-1][column-1] + final_result[row-1][column];
          }
          final_result[row][column] = tempValue;
          final_result[row][row-column] = tempValue;
      }
  }
  return final_result;
}

int main() {
    vector<vector<long long int>> result = printPascal(8);
    for (int row = 0; row < result.size(); row++) {
      for (int column = 0; column <= row; column++) {
        cout<<result[row][column]<<" ";
      }
      cout<<endl;
    }
    return 0;
}