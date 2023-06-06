#include <bits/stdc++.h>
using namespace std;

void setZeros(vector<vector<int>> &matrix)
{
	int rowSize = matrix.size();
	int columnSize = matrix[0].size();
	vector<int> horizontal(columnSize, 0);
	vector<int> vertical(rowSize, 0);

	for(int i=0; i<rowSize; i++){
		for(int j=0; j<columnSize; j++){
			if(matrix[i][j]==0){
				vertical[i]=1;
				horizontal[j]=1;
			}
		}
	}
	for(int i=0; i<rowSize; i++){
		if(vertical[i]==1)
		for(int j=0; j<columnSize; j++){
			matrix[i][j]=0;
		}
	}
	for(int j=0; j<columnSize; j++){
		if(horizontal[j]==1)
		for(int i=0; i<rowSize; i++){
			matrix[i][j]=0;
		}
	}
}

int main() {
    vector<vector<int>> matrix = {
        {1, 0, 3, 8, 0, 3},
        {1, 5, 6, 1, 2, 3},
        {7, 8, 9, 2, 5, 6},
        {1, 2, 3, 8, 6, 3},
        {4, 0, 6, 7, 0, 9},
        {7, 8, 9, 0, 6, 3}
    };
    setZeros(matrix);
    for(int i=0; i<matrix.size(); i++){
		for(int j=0; j<matrix[0].size(); j++){
			cout<<matrix[i][j]<<" ";
		}
        cout<<endl;
	}
    return 0;
}