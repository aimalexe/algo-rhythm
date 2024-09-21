#include <iostream>
using namespace std;

/**
 * Definition for singly-linked list.
 */
struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
class Solution
{
public:
    /**
     * Function to find the intersection point of two linked lists.
     * @param headA: the head of the first linked list.
     * @param headB: the head of the second linked list.
     * @return the intersection node or NULL if no intersection exists.
     */
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
    {
        if (!headA || !headB)
            return nullptr;

        ListNode *ptrA = headA;
        ListNode *ptrB = headB;

        // Traverse both lists. When a pointer reaches the end, start at the other list's head.
        while (ptrA != ptrB)
        {
            ptrA = ptrA ? ptrA->next : headB;
            ptrB = ptrB ? ptrB->next : headA;
        }

        // This ptrA = ptrB will be the intersection node, or null if no intersection.
        return ptrA;
    }
};

// Test case
int main()
{
    Solution sol;
    // Creating intersection example
    ListNode *intersectNode = new ListNode(8);
    intersectNode->next = new ListNode(4);
    intersectNode->next->next = new ListNode(5);

    // List A
    ListNode *headA = new ListNode(4);
    headA->next = new ListNode(1);
    headA->next->next = intersectNode;

    // List B
    ListNode *headB = new ListNode(5);
    headB->next = new ListNode(6);
    headB->next->next = new ListNode(1);
    headB->next->next->next = intersectNode;

    ListNode *intersection = sol.getIntersectionNode(headA, headB);
    if (intersection)
        cout << "Intersected at node with value: " << intersection->val << endl;
    else
        cout << "No intersection." << endl;

    return 0;
}
