public class Solution {
    public int CaptureForts(int[] forts) {
         int  ans = 0;
 for (int i = 0; i < forts.Length; i++)
 {
     //1 0, 0, 0, 1, -1, 1, 1, 0, 0, 0, -1, 0, 0, 0, 0, 1
     //1, 0, 0, -1, 0, 0, 0, 0, 1
     if (forts[i] == 1 || forts[i] == -1)
     {
         int tmp = forts[i];
         int k = i + 1;
         while (k < forts.Length && forts[k] == 0)
         {
             k++;
         }
         if(k < forts.Length &&forts[k] != forts[i]  )
         {
             ans=Math.Max(ans, k-i-1);
         }
         i = k-1 ;
     }
 }
 return ans;
    }
}