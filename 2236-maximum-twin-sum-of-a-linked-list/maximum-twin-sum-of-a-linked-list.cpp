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
    using ln = ListNode*;
    
    int pairSum(ListNode* head) {
        ln slow = head;
        ln fast = head;

        while (fast != NULL && fast -> next != NULL) {
            slow = slow -> next;
            fast = fast -> next -> next;
        };

        ln prev = NULL;
        ln curr = slow;
        
        while (curr) {
            ln nextNode = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = nextNode;
        };

        int ma = INT_MIN;

        while (prev) {
            ma = max(ma, prev -> val + head -> val);
            prev = prev -> next;
            head = head -> next;
        }

        return ma;
    }
};