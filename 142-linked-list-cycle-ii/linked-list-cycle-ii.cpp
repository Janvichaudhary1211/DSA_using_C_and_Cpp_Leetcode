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
    ListNode * FloydAlgo( ListNode * head){
        if(head == NULL)
           return NULL;
      ListNode * slow = head;
      ListNode * fast = head;
      while( slow != NULL && fast != NULL && fast->next != NULL){
        fast = fast->next->next;
        slow = slow->next;
        if(slow == fast){
            return slow;
        }
      }
    return NULL;
    }
    ListNode *detectCycle(ListNode *head) {
       ListNode * intersection = FloydAlgo(head);
       if(intersection == NULL){
        return NULL;
       }
       ListNode * slow = head;
       while(slow != intersection && intersection != NULL){
        slow = slow->next;
        intersection = intersection->next;
       }
       
       return slow;   
    }
};