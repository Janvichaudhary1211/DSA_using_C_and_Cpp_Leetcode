/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
      // floyd cycle detection algorithm
      if(head == NULL)
         return false;
      ListNode * slow = head;
      ListNode * fast = head;
      
      while( slow != NULL && fast != NULL && fast->next != NULL){
        fast = fast->next->next;
        //if(fast != NULL)
          //fast = fast->next;
        
        slow = slow->next;
        if(slow == fast)
          return true;
      } 
      return false;
    }
};