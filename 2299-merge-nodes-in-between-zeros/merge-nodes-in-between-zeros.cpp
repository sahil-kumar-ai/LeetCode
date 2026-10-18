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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* ans = NULL;
        ListNode* temp = NULL;
        ListNode* curr = head;

        int sum = 0;

        while (curr != NULL) {
            if (curr->val == 0) {
                if (sum != 0) {
                    ListNode* node = new ListNode(sum);

                    if (ans == NULL) {
                        ans = node;
                        temp = node;
                    } else {
                        temp->next = node;
                        temp = node;
                    }

                    sum = 0;
                }
            } else {
                sum += curr->val;
            }

            curr = curr->next;
        }

        return ans;
    }
};