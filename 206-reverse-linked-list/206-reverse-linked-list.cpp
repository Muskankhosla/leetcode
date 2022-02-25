/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev=nullptr;
        ListNode* curr=head;
        ListNode* nex;
        while(curr!=nullptr)
        {
           nex= curr->next;
            curr->next=prev;
        
            prev=curr;
            curr=nex;
         }
        return prev;
    }
};
/*ListNode* reverseList(ListNode* head) {
        if (head == nullptr){
            return head;
        }
        ListNode* curr = head;
        if (curr->next == nullptr){
            return head;
        }
        ListNode* prev = nullptr;
        ListNode* nex = nullptr;
        
        while (curr != nullptr){
            nex = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nex;
        }
        head = prev;
        return head;
    }**/