#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n)
    {
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        int length = 0;
        ListNode* first = head;
        while (first != NULL)
        {
            length++;
            first = first->next;
        }
        length -= n;
        first = dummy;
        while (length > 0)
        {
            length--;
            first = first->next;
        }
        first->next = first->next->next;
        return dummy->next;
    }

    ListNode* removeNthFromEnd2(ListNode* head, int n)
    {
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* first = dummy;
        ListNode* second = dummy;
        for (int i = 1; i <= n + 1; i++)
        {
            first = first->next;
        }
        while (first != NULL)
        {
            first = first->next;
            second = second->next;
        }
        second->next = second->next->next;
        return dummy->next;

    }
};

int main()
{
    ListNode* head = new ListNode(1);
    //cout << head->val << endl;
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);

    Solution sol = Solution();
    ListNode* res = sol.removeNthFromEnd2(head, 2);
    // After reversing, print values
    cout << res->val << endl;
    cout << res->next->val << endl;
    return 0;
}
