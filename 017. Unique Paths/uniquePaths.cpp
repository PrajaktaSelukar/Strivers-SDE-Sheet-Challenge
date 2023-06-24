#include <bits/stdc++.h> 
using namespace std;

int arr[15][15];
int calculatePath(int m, int n){
	if(arr[m-1][n-1] != -1){
		return arr[m-1][n-1];
	} else {
		if(m==1 || n==1){
			if(m==1) arr[0][n-1] = 1;
			if(n==1) arr[m-1][0] = 1;
			return 1;
		}

		arr[m-2][n-1] = calculatePath(m-1, n);
		arr[m-1][n-2] = calculatePath(m, n-1);

		return arr[m-2][n-1] + arr[m-1][n-2]; 
	}
}

int uniquePaths(int m, int n) {
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++)
			arr[i][j]=-1;
	}
	return calculatePath(m, n);
}

int main() {
    cout<<uniquePaths(1,6);
    return 0;
}