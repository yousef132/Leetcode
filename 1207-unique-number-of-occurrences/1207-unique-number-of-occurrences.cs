public class Solution {
   public  bool UniqueOccurrences(int[] nums)
{
	Dictionary<int, int> map = new Dictionary<int, int>();
	HashSet<int> frequences = new HashSet<int>();	
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

	foreach(int v in map.Values)
	{
		frequences.Add(v);
	}
	return frequences.Count == map.Count;

}
}