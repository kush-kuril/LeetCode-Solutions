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
        ListNode* length{head};
        ListNode* Slow{head};
        ListNode* Fast{head};
        bool cycle{false};
        while(Fast && Fast !=nullptr)
        {
            
            Slow=Slow->next;
            if (Slow==nullptr)
            {
                break;
            }
            if(Fast->next==nullptr)
            {
                break;
            }
            Fast=Fast->next->next;
            if (Slow==Fast)
            {
                return true;
            }
        }
        return false;
        
    }
};