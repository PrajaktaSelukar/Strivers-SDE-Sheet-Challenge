public class nextPermutation {
    public static void main(String[] args) {
        int[] nums = {3,4,2,1};
        nextPermutation(nums);
        for(int i=0; i<nums.length; i++){
            System.out.println(nums[i]);
        }
    }
    public static void nextPermutation(int[] nums) {
        int n = nums.length;

        if(n==1){
            return;
        } else if(n>1){
            int i=n-2;
            for(; i>=0; i--){
                if (i==0 && nums[i] >= nums[i + 1]) {
                    reverseArray(nums, n);
                    return;
                } else if(nums[i] < nums[i+1]){
                    break;
                }
            }
            int j=n-1;

            while(nums[i] >= nums[j]){
                j--;
            }
            swapNums(nums, j, i);
            int low=i+1, high=n-1;
            while(low<=high){
                swapNums(nums, low++, high--);
            }

            return;
        }
    }
    public static void reverseArray(int[] nums, int n){
        int low=0; int high=n-1;
        while(low<=high){
            swapNums(nums, low, high);
            low++;
            high--;
        }
        return;
    }
    public static void swapNums(int[] nums, int firstIndex, int lastIndex){
        int tempNo = nums[firstIndex];
        nums[firstIndex] = nums[lastIndex];
        nums[lastIndex] = tempNo;
        return;
    }
}
