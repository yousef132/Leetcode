public class Solution {
           public  int[] SearchRange(int[] nums, int target)
   {
       int[] arr =
       {
           -1,
           -1
       };
       int l = 0, r = nums.Length - 1;
       while (l <= r)
       {
           if (nums[l] < target)
           {
               l++;
           }
           else if (nums[r] > target)
           {
               r--;

           }
           else if (nums[l] == target && nums[r] == target)
           {
               arr[0] = l; arr[1] = r;
               return arr;
           }
       }
       return arr;

   }

}