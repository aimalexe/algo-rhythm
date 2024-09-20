#include <iostream>
using namespace std;

/**
 * Definition for singly-linked list.
 * The ListNode structure represents a single node in the linked list.
 */
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    /**
     * Detects whether the linked list has a cycle. 
     * Floyd’s Cycle-Finding Algorithm, also known as the Tortoise and Hare algorithm, is used to detect cycles in a sequence of values or in a linked list. The algorithm operates in constant space and linear time, making it efficient for cycle detection.
     * @param head: pointer to the head of the linked list
     * @return true if a cycle is detected, false otherwise
     */
    bool hasCycle(ListNode *head)
    {
        if (!head || !head->next)
            return false;

        ListNode *slow, *fast;
        slow = fast = head;

        while (fast && fast->next)
        {
            slow = slow->next;       // move slow pointer by one step
            fast = fast->next->next; // move fast pointer by two steps

            if (slow == fast)
                return true; // cycle detected
        }

        return false; // no cycle
    }
};

// Test Cases for C++
int main()
{
    Solution solution;

    // Test Case 1: Cycle exists
    ListNode *node1 = new ListNode(3);
    ListNode *node2 = new ListNode(2);
    ListNode *node3 = new ListNode(0);
    ListNode *node4 = new ListNode(-4);
    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node2; // Cycle here
    cout << "Test Case 1: " << (solution.hasCycle(node1) ? "Passed ✅" : "Failed ❌") << endl;

    // Test Case 2: Single node, no cycle
    ListNode *node5 = new ListNode(1);
    cout << "Test Case 2: " << (solution.hasCycle(node5) ? "Failed ❌" : "Passed ✅") << endl;

    // Test Case 3: No cycle, two nodes
    ListNode *node6 = new ListNode(1);
    ListNode *node7 = new ListNode(2);
    node6->next = node7;
    cout << "Test Case 3: " << (solution.hasCycle(node6) ? "Failed ❌" : "Passed ✅") << endl;

    // Test Case 4: Cycle in two nodes
    ListNode *node8 = new ListNode(1);
    ListNode *node9 = new ListNode(2);
    node8->next = node9;
    node9->next = node8; // Cycle here
    cout << "Test Case 4: " << (solution.hasCycle(node8) ? "Passed ✅" : "Failed ❌") << endl;

    // Test Case 5: Empty list
    cout << "Test Case 5: " << (solution.hasCycle(nullptr) ? "Failed ❌" : "Passed ✅") << endl;

    return 0;
}
