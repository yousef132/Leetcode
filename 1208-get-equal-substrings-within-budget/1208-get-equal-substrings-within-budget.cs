public class Solution {
 public  int EqualSubstring(string s, string t, int maxCost)
 {
     // s -> zxatbcd
     // t -> aubtcdf
     //abs-> 1 2 1 0 1 1 2 
     //prefix-> 1 3 4 4 5 6 8
     int ans = 0;

     var pref = Enumerable.Repeat(0, s.Length+1).ToList();

     for (int i = 0; i < s.Length; i++)
         pref[i + 1] = Math.Abs(s[i] - t[i]);


     // prefix sum
     for (int i = 1; i < pref.Count; i++)
         pref[i] += pref[i - 1];

     int k = 1, I = 1;
     // 1 1 1 2
     // 0 1 2 3 5
     while(k<=pref.Count-1)
     {
         if (pref[k] - pref[I - 1] <= maxCost)
         {
             k++;
             ans = Math.Max(ans, k - I);
         }
         else
         {
             I++;
         }
     }
     return ans;
 }
}