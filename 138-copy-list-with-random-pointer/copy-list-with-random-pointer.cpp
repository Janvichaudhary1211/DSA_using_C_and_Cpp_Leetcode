/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
 void insertAtTail(Node * &head, Node * &tail, int data){
        Node * newNode = new Node(data);
        if(head == NULL){
            head = newNode;
            tail = head;
            return;
        }else{
            tail->next = newNode;
            tail = newNode;
        }
    }
    Node* copyRandomList(Node* head) {
        Node * cloneHead = NULL;
        Node * cloneTail = NULL;
        Node * temp = head;
        while(temp != NULL){
            insertAtTail(cloneHead, cloneTail, temp->val);
            temp = temp->next;
        }
        Node * original = head;
        Node * clone = cloneHead;
        while(original != NULL && clone != NULL){
            Node * next = original->next;
            original->next = clone;
            original = next;

            next = clone->next;
            clone->next = original;
            clone = next;
        }
         temp = head;
        while(temp != NULL){
            if(temp->next != NULL){
                temp->next->random = temp->random ? temp->random->next : temp->random;
            }
            temp = temp->next->next;
        }
           original = head;
          clone = cloneHead;
        while(original != NULL && clone != NULL){
            original->next = clone->next;
            original = original->next;
            if(original != NULL){
                clone->next = original->next;
            }
            clone = clone->next;
        }
        return cloneHead;
    }
};