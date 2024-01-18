public class Solution {
		public  int MinSteps(string s, string t)
		{
			Dictionary<char , int >	map = new Dictionary<char , int>();

			foreach(char c in s)
			{
				if (map.ContainsKey(c))
				{
					map[c]++;
				}
				else
				{
					map.Add(c, 1);
				}
			}

			foreach(char c in t)
			{
				if (map.ContainsKey(c))
				{
					if (map[c] >0)
					{

						map[c]--;
					}
				}
			}
			return  map.Values.Sum();
		}

}