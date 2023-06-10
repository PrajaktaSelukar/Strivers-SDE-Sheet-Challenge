// Online C++ compiler to run C++ program online
#include<bits/stdc++.h>
using namespace std;

bool searchMatrix(vector<vector<int>>& mat, int target) {
    int rowSize = mat.size();
    int columnSize = mat[0].size();
    
    int currentRow = 0;
    int currentColumn = columnSize-1;

    while(currentRow<rowSize && currentColumn>=0){
        // cout<<mat[currentRow][currentColumn]<<" "<<currentRow<<" "<<currentColumn<<endl;
        if(mat[currentRow][currentColumn] == target)
            return true;

        else if(mat[currentRow][currentColumn] < target){
            currentRow++;
        }
        
        else if(mat[currentRow][currentColumn] > target) {
            currentColumn--;
        }
    }
    return false;   
}

int main() {
    vector<vector<int>> mat = {
            {1, 2, 4 },
            {6, 7, 8},
            {9, 10, 34}
        };
    cout<<searchMatrix(mat, 8);    

    return 0;
}