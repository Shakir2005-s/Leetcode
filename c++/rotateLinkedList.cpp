
class Solution
{
public:
    ListNode *rotateRight(ListNode *head, int k)
    {
        if (!head)
            return nullptr;
        ListNode *temp = head;
        int node{};
        while (temp)
        {
            ++node;
            temp = temp->next;
        }
        int shiftRequired = k % node;
        for (int i{}; i < shiftRequired; ++i)
        {
            ListNode *tail = head;
            ListNode *secondLast = nullptr;
            while (tail->next)
            {
                secondLast = tail;
                tail = tail->next;
            }
            secondLast->next = nullptr;
            tail->next = head;
            head = tail;
        }
        return head;
    }
};