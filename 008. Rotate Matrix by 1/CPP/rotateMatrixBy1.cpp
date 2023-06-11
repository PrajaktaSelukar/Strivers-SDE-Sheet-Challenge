// Online C++ compiler to run C++ program online
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void rotateMatrix(vector<vector<int>> &mat, int n, int m)
{
    int row=0, column=0;
    int curr, prev;
    int top=0, left=0, bottom=n, right=m; 
    
    while(row<bottom && column<right){
        if (row + 1 == bottom || column + 1 == right)
            break;
        prev = mat[row+1][column];
        
        for(int i=column; i<right; i++){
            curr = mat[row][i];
            mat[row][i] = prev;
            prev = curr;
        }
        row++;
        
        for(int j=row; j<bottom; j++){
            curr = mat[j][right-1];
            mat[j][right-1] = prev;
            prev = curr;
        }
        right--;
        
        if(row<bottom){
            for(int i=right-1; i>=column; i--){
                curr = mat[bottom-1][i];
                mat[bottom-1][i] = prev;
                prev = curr;
            }
            bottom--;
        }
        
        if(column < right){
            for(int j=bottom-1; j>=row; j--){
                curr = mat[j][column];
                mat[j][column] = prev;
                prev = curr;
            }
            column++;
        }
    }
}

int main() {
    vector<vector<int>> mat = {
            {1, 2, 4 },
            {6, 7, 8},
            {9, 10, 34}
        };
    rotateMatrix(mat, 3, 3);
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}