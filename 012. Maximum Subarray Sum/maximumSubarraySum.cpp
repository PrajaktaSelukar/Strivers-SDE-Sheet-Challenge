#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
    if(n==0) return 0;
    long long currentSum = 0;
    long long finalSum = 0;
    for(int i=0; i<n; i++){
        currentSum = currentSum+arr[i];
        
        if(finalSum < currentSum)
            finalSum = currentSum;
        
        if(currentSum<0)
            currentSum = 0;
    }
    return finalSum;
}

int main() {
    int n=4;
    int[] arr = [1,3,-2,7, -1];
    cout<<maxSubarraySum(arr, n)<<endl;
    return 0;
}