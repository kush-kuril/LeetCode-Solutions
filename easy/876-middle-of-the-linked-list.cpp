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
    ListNode* middleNode(ListNode* head) {

        ListNode* ptr{head};
        int count{};

        while (ptr != nullptr) {
            count++;
            ptr = ptr->next;
        }

        if (count % 2 == 0) {
            count = count / 2;
        } else {
            count += 1;
            count = count / 2 - 1;
        }
        
        for(int c2{};c2<count;c2++)
        {
            head=head->next;
        }

        return head;
    }
};