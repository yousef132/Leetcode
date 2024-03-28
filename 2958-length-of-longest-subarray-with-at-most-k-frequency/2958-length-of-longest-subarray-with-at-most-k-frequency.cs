public class Solution {
      public  int MaxSubarrayLength(int[] nums, int k)
    {
		int  r = 0, ans = 0;

		var freq = new Dictionary<int, int>();
        for (int i = 0; i < nums.Length; i++)
		{
            while (r < nums.Length && (!freq.ContainsKey(nums[r]) || freq[nums[r]] < k  ))
			{
				if (!freq.ContainsKey(nums[r]))
					freq.Add(nums[r], 1);
				else
					freq[nums[r]]++;
				r++;
			}
			freq[nums[i]]--;
			ans = Math.Max(ans, r - i);

		}
		return ans;
    }
}