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
class Solution
{
public:
    int getDecimalValue(ListNode* head)
    {
        int len = 0;
        ListNode* temp = head;
        while (temp != NULL)
        {
            temp = temp->next;
            len++;
        }
        len--;
        int ans = 0;
        temp = head;
        while (temp != NULL)
        {
            if (temp->val == 1)
            {
                ans += (1 << len);
            }
            temp = temp->next;
            len--;
        }
        return ans;
    }
};