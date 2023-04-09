#include <iostream>
using namespace std;


struct ListNode {
    int val;  // value of the node
    ListNode* next;  // point to next node
    ListNode(int x) : val(x), next(NULL) {}  // function
};

//int main()
//{
//    ListNode* head = new ListNode(5);
//    cout << head->val << endl;
//
//    //ListNode* head2 = new ListNode();
//    //head2->val = 6;
//    //cout << head2->val << endl;
//
//
//
//    return 0;
//}