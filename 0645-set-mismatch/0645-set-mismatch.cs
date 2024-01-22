public class Solution {
    public int[] FindErrorNums(int[] nums) {
        Dictionary<int,int> map = new Dictionary<int,int>();

foreach(int i in nums)
{
	if (map.ContainsKey(i))
	{
		map[i]++;
	}
	else
	{
		map.Add(i, 1);
	}
}

int[]arr = new int[2];

for(int i = 1; i <= nums.Length; i++)
{
	if (map.ContainsKey(i))
	{
		if (map[i] > 1)
		{
			arr[0] = i;
		}
	}
	else
	{
		arr[1] = i;
	}
}
return arr;
    }
}