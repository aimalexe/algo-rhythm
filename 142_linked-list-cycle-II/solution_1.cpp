#include <iostream>
using namespace std;

/**
 * Definition for singly-linked list.
 */
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if (!head || !head->next) return nullptr;

        ListNode *slow = head;
        ListNode *fast = head;

        // Step 1: Detect if a cycle exists
        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast) {
                // Step 2: Reset one pointer to the head
                slow = head;
                
                // Step 3: Move both pointers one step at a time
                while (slow != fast) {
                    slow = slow->next;
                    fast = fast->next;
                }
                
                return slow;  // This is the starting node of the cycle
            }
        }

        return nullptr;  // No cycle
    }
};

// Test case can be created in a similar way as the previous solution

int main() {
    Solution solution;

    // Example linked list: 3 -> 2 -> 0 -> -4 -> cycle to 2
    ListNode* node1 = new ListNode(3);
    ListNode* node2 = new ListNode(2);
    ListNode* node3 = new ListNode(0);
    ListNode* node4 = new ListNode(-4);
    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node2;  // Cycle

    ListNode* result = solution.detectCycle(node1);
    if (result)
        cout << "Cycle starts at node with value: " << result->val << endl;
    else
        cout << "No cycle detected" << endl;

    return 0;
}
