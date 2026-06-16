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
    int pairSum(ListNode *head)
    {
        int count{};
        ListNode *temp = head;
        stack<int> stk;
        while (temp)
        {
            count++;
            stk.push(temp->val);
            temp = temp->next;
        }
        int half = count / 2;
        int Max{};
        temp = head;
        while (half != 0)
        {
            int currSum = temp->val + stk.top();
            temp = temp->next;
            stk.pop();
            Max = max(currSum, Max);
            --half;
        }
        
        return Max;
    }
};