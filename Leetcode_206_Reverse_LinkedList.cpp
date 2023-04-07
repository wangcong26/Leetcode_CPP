#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
	ListNode* reverseList(ListNode* head)
	{
        if (head == nullptr || head->next == nullptr)
        {
            return head;
        }
        ListNode* prev = nullptr;
        ListNode* curr = head;
        ListNode* next = curr->next;

        while (curr != nullptr)
        {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
	}
};

//int main()
//{
//    ListNode* head = new ListNode(1);
//    //cout << head->val << endl;
//    head->next = new ListNode(2);
//    head->next->next = new ListNode(3);
//
//    Solution sol = Solution();
//    ListNode* res = sol.reverseList(head);
//    // After reversing, print values
//    cout << res->val << endl;
//    cout << res->next->val << endl;
//    cout << res->next->next->val << endl;
//    return 0;
//}