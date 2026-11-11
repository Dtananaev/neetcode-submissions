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
        // corner case 1
        if(current_ptr == nullptr){return false;}
        ListNode* next_ptr = head->next;

        // Corner case size 2
        if(next_ptr == nullptr){return false;}
        // Corner case size 3
        if(next_ptr->next == nullptr){return false;}




        while(next_ptr != nullptr){

            if (next_ptr == current_ptr){
                return true;
            }
            if(next_ptr-> next==nullptr || next_ptr-> next ->next == nullptr){
                break;
            }
            current_ptr = current_ptr->next;
            next_ptr = next_ptr->next->next;
        }

    return false;        
    }
};
