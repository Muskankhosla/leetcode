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
    int getDecimalValue(ListNode* head) 
    {
        vector<int> helper;
        ListNode* temp = head;
        while(temp!=NULL)
        {
            helper.push_back(temp->val);
            temp=temp->next;
        }
        int result = 0;
        int n = helper.size();
        for(int i=n-1 ; i>=0 ; i--)
        {
            result+=helper[i]*pow(2,n-i-1);
        }
        return result;
    }
};