class Solution {
public  IList<IList<int>> FindMatrix(int[] nums)
{
	int Maxfreq = 0;
	Dictionary<int,int> freq = new Dictionary<int,int>();
	foreach (int i in nums)
	{
		if (freq.ContainsKey(i))
		{
			freq[i]++;
		}
		else
		{
			freq.Add(i, 1);
		}
		Maxfreq = Math.Max(Maxfreq, freq[i]);
	}

	IList<IList<int>>mat = new List<IList<int>>(Maxfreq);

	for(int i = 0; i < Maxfreq; i++)
	{
		IList<int> I = new List<int>();	
		foreach (int key in freq.Keys)
		{
			if (freq[key]>0)
			{
				freq[key]--;
				I.Add(key);
			}
		}
		mat.Add(I);
	}
	return mat;

}
};