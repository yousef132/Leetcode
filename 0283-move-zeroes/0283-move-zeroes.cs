public class Solution {
        public void MoveZeroes(int[] nums) {
            for(int i = 0; i < nums.Length; i++)
{
	if (nums[i] == 0)
	{
		int cur = i;

		while(cur < nums.Length && nums[cur] == 0)
		{
			cur++;
		}
		if(cur<nums.Length)
		{
			nums[i] = nums[cur];
			nums[cur] = 0;
		}
		
	}

}
        }
}