public class Solution {
public  bool CloseStrings(string word1, string word2)
{
	if(word1.Length!= word2.Length)
	{
		return false;
	}
	Dictionary<char,int> map1 = new Dictionary<char,int>();
	Dictionary<char,int> map2 = new Dictionary<char,int>();

	foreach(char ch in word1)
	{
		if(map1.ContainsKey(ch))
		{
			map1[ch]++;
		}
		else
		{
			map1.Add(ch, 1);
		}
	}
	
	foreach(char ch in word2)
	{
		if(map2.ContainsKey(ch))
		{
			map2[ch]++;
		}
		else
		{
			map2.Add(ch, 1);
		}
	}
	if(map1.Keys.OrderBy(x => x).SequenceEqual(map2.Keys.OrderBy(x => x)))
	return map1.Values.OrderBy(v => v).SequenceEqual(map2.Values.OrderBy(v => v));
	return false;
}
}