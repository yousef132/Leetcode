public class Solution {
	public  int NumberOfBeams(string[] bank)
	{
		List<int> list = new List<int>();
		for (int i = 0; i < bank.Length; i++)
		{
			int count = 0;
			for (int j = 0; j < bank[i].Length; j++)
			{
				count += (bank[i][j]=='1') ? 1 : 0;
			}
			if(count>0)
			{
				list.Add(count);
			}
		}
		int ans = 0;
		for(int i = 0;i < list.Count-1;i++)
		{
			ans += (list[i] * list[i + 1]);
		}
		return ans;
	}
}