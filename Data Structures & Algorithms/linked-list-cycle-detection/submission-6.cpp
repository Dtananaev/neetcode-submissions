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
    bool hasCycle(ListNode* head) {
        ListNode* current_ptr = head;
        ListNode* next_ptr = head;

        while(next_ptr != nullptr && next_ptr->next !=nullptr){

            current_ptr = current_ptr->next;
            next_ptr = next_ptr->next->next;
            if (next_ptr == current_ptr){
                return true;
            }

        }

    return false;        
    }
};
