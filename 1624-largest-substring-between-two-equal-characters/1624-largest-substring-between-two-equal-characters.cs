public class Solution {
		public  int MaxLengthBetweenEqualCharacters(string s)
		{
			Dictionary<char, Tuple<int, int>> d = new Dictionary<char, Tuple<int, int>>();
			for (int i = 0; i < s.Length; i++)
			{
				if (!d.ContainsKey(s[i]))
				{
					d[s[i]] = Tuple.Create(i, i);
				}
				else
				{
					Tuple<int, int> tuple = d[s[i]];
					d[s[i]] = Tuple.Create(tuple.Item1, Math.Max(tuple.Item2, i));
				}
			}
			int ans = -1;
			foreach(KeyValuePair<char,Tuple<int,int>> keyValuePair in d)
			{
				ans = Math.Max(ans,(keyValuePair.Value.Item2 - keyValuePair.Value.Item1-1));
				
			}
			return ans;
		}

}