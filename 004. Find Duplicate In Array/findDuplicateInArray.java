import java.util.Arrays;

public class findDuplicateInArray {
    public static void main(String[] args) {
        int[] nums = {1, 3, 4, 2, 2};
        System.out.println(findDuplicate(nums));
    }
    public static int findDuplicate(int[] nums) {
        int numsLength = nums.length;
        Arrays.sort(nums);
        int i=0;
        while(i<numsLength){
            if(nums[i]==nums[i+1]){
                return nums[i];
            }
            i++;
        }
        return 0;
    }
}
