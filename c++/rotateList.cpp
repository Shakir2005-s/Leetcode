class Solution
{
public:
    ListNode *rotateRight(ListNode *head, int k)
    {
        if (!head || !head->next || k == 0)
            return head;
        ListNode *temp = head;
        int node = 1;
        while (temp->next)
        {
            temp = temp->next;
            node++;
        }
        temp->next = head;
        k = k % node;
        int stepsToNewTail = node - k;
        while (stepsToNewTail--)
        {
            temp = temp->next;
        }
        head = temp->next;
        temp->next = nullptr;

        return head;
    }
};
