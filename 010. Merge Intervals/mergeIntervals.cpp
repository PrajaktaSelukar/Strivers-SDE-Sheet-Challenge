#include <bits/stdc++.h>
using namespace std;

bool compareStart(vector<int> &row1, vector<int> &row2){
    return row1[0] < row2[0];
}

void sortBasedOnStartInterval(vector<vector<int>> &intervals){
    sort(intervals.begin(), intervals.end(), compareStart);
}

vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals)
{
    vector<vector<int>> result;
    
    if(intervals.size()==1) return result;
    
    sort(intervals.begin(), intervals.end());
    vector<int> currentPair = intervals[0];
    
    for(int i=0; i<intervals.size(); i++){
        if(currentPair[1] >= intervals[i][0]){
            currentPair[1] = max(currentPair[1], intervals[i][1]);
        }else{
            result.push_back(currentPair);
            currentPair= intervals[i];
        }
    }
    result.push_back(currentPair);
    return result;
}

int main() {
    vector<vector<int>> intervals = {
        {3, 5},
        {1, 4},
        {13, 16},
        {8,12},
        {11, 19},
        {20, 23}
    };
    vector<vector<int>> result = mergeIntervals(intervals);
    for(int i=0; i<result.size(); i++){
        for(int j=0; j<result[0].size(); j++)
        cout<<result[i][j]<<" ";
        cout<<endl;
    }

    return 0;
}