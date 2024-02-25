public class Solution {
public  int MajorityElement(int[] nums)
{
	var result = new Dictionary<int, int>();

	for (int i = 0; i < nums.Length; i++)
	{
		if (result.ContainsKey(nums[i]))
			result[nums[i]]++;
		else
		{
			result.Add(nums[i], 1);
		}

	}

	return result.Where(x => x.Value >( nums.Count() / 2)).FirstOrDefault().Key;
}
}