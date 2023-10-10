public class Solution {
     public IList<int> MajorityElement(int[] nums)
 {
          IList<int> result = new List<int>();
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
     foreach(KeyValuePair<int,int> pair in map)
     {
         if (pair.Value > nums.Length / 3)
         {
             result.Add(pair.Key);
         }
     }
     return result;

 }


 
}