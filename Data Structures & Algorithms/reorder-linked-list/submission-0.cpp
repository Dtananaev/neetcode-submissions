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

    void reorderList(ListNode* head) {
        ListNode* l = head;
        if (l == nullptr || l->next == nullptr) return;
        ListNode* prev = l;
        ListNode* r = l->next;
        while(r->next != nullptr) {
            prev = r;
            r = r->next;}

        if (l->next == r) return;
        prev->next = nullptr;
        r->next =  l->next;
        l->next = r;
        reorderList(l->next->next);
    }
};
