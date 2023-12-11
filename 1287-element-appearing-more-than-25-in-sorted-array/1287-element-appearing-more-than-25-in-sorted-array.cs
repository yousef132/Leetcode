public class Solution {
public int FindSpecialInteger(int[] arr)
{
	Dictionary<int, int> freq = new Dictionary<int, int>();
	foreach (var i in arr)
	{
		if (!freq.ContainsKey(i))
		{
			freq.Add(i, 1);
		}
		else
		{
			freq[i]++;
		}
	}
	foreach (KeyValuePair<int,int> i in freq)
	{
		if(i.Value>arr.Length/4)
		{
			return i.Key;
		}
	}
	return 0;
}
}