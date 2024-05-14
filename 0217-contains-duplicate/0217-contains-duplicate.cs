public class Solution {
    public  bool ContainsDuplicate(int[] nums)
 {
     var freq = new Dictionary<int, int>();
     foreach (var item in nums)
     {
         if (freq.ContainsKey(item))
             freq[item]++;
         else
             freq.Add(item, 1);
     }
     return freq.Any(x => x.Value >= 2);
 }
}