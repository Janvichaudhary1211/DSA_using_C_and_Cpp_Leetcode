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
        unordered_map<Node * , Node *> oldToNew;
        Node * original = head;
        Node * clone = cloneHead;
        while(original != NULL && clone != NULL){
            oldToNew[original] = clone;
            original = original->next;
            clone = clone->next;
        }
        original = head;
        clone = cloneHead;
        while(original != NULL){
           clone->random = oldToNew[original->random];
           original = original->next;
           clone = clone->next;
        }
        return cloneHead;
    }
};