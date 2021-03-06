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
    Node* copyRandomList(Node* head) {
        unordered_map<Node*, Node*> mp;
        // mp[nullptr] = nullptr;
        
        Node* copyHead = new Node(0);
        Node* copyPrevious = copyHead;
        Node* copyCurrent;
        
        Node* current = head;
        
        while(current!=nullptr) {
            copyCurrent = new Node(current->val);
            mp[current] = copyCurrent;
            
            current = current->next;
            
            copyPrevious->next = copyCurrent;
            copyPrevious = copyPrevious->next;
        }
        copyPrevious->next = nullptr;
        
        current = head;
        while(current!=nullptr) {
            copyCurrent = mp[current];
            copyCurrent->next = mp[current->next];
            copyCurrent->random = mp[current->random];
            
            current = current->next;
        }
        
        return copyHead->next;
    }
};