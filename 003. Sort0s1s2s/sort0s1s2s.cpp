#include<bits/stdc++.h>
using namespace std;
class Solution {
    public void sortColors(int[] nums) {
        int numsLen = nums.length;
        int low=0, high=numsLen-1;
        int temp=0;
        int i=0;
        while(i <= high)
        {
            if(nums[i]==0)
            {
                temp = nums[i];
                nums[i] = nums[low];
                nums[low] = temp;
                i++;
                low++;
            }  
            
            else if(nums[i]==2)
            {
                temp = nums[i];
                nums[i] = nums[high];
                nums[high] = temp;
                high--;
            }
            
            else if(nums[i]==1)
                i++;
            
            
        }
    }
    int main() {
    int nums[6] = [0, 1, 2, 2, 1, 0];
       sortColors(&nums, 6);
       for(int i=0; i<6; i++){
           cout<<nums[i]<<" ";
       }
        return 0;
    }
};