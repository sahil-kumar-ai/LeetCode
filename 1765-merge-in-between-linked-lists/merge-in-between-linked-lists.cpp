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
    using ll = ListNode;

    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ll* ans = new ll(list1->val);
        ll* dum = ans;
        ll* curr1 = list1->next;
        ll* curr2 = list2;
        int count = 1;

        while (curr1) {
            if (count == a) {
                dum->next = curr2;

                while (curr2->next) {
                    curr2 = curr2->next;
                }

                dum = curr2;

                while (curr1 && count <= b) {
                    curr1 = curr1->next;
                    count++;
                }

                dum->next = curr1;
                break;
            } else {
                dum->next = curr1;
                dum = dum->next;
                curr1 = curr1->next;
                count++;
            }
        }

        return ans;
    }
};
