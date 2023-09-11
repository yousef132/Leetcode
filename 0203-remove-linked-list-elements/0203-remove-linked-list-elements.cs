/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     public int val;
 *     public ListNode next;
 *     public ListNode(int val=0, ListNode next=null) {
 *         this.val = val;
 *         this.next = next;
 *     }
 * }
 */
public class Solution {
    public ListNode RemoveElements(ListNode head, int val) {
     ListNode start=head,prev=start;
     while(start!=null&&start.val==val){
         prev=start;
         start=start.next;
     }
     ListNode tmp=start;
     while(tmp!=null){
         if(tmp.val!=val){
             prev=tmp;
             tmp=tmp.next;
            
         }
         else{
             prev.next=tmp.next;
             tmp=tmp.next;
         }

     }
     return start;
        
    }
}