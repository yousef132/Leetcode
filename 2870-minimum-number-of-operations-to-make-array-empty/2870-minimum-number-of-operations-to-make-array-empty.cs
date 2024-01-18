public class Solution {
  public  int MinOperations(int[] nums)
{
	int ans = 0;
	Dictionary<int,int> map = new Dictionary<int,int>();	

	for (int i = 0; i < nums.Length; i++)
	{
		if (map.ContainsKey(nums[i]))
		{
			map[nums[i]]++;
		}
		else 
		{
			map.Add(nums[i], 1);
		}
	}

	foreach(int k in map.Keys)
	{
		if (map[k] == 1)
		{
			return -1;
		}
		if (map[k]%3==0)
		{
			ans += map[k] / 3;
		}
		else
		{
			ans += map[k] / 3 + 1;
		}
	}
	return ans;
}
}