#include <iostream>

/**
 * Definition for singly-linked list.
 */
struct ListNode {
    int val;
    ListNode *next;

    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    /**
     * Recursively merges two sorted linked lists into one sorted list.
     * @param list1 First sorted linked list.
     * @param list2 Second sorted linked list.
     * @return Returns the head of the merged sorted linked list.
     */
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        // Base cases:
        // If either list1 or list2 is empty, return the non-empty list.
        if (!list1) return list2;
        if (!list2) return list1;

        // Recursive case:
        // Determine which list has the smaller head,
        // and recursively merge the rest.
        if (list1->val < list2->val) {
            list1->next = mergeTwoLists(list1->next, list2);
            return list1;
        } else {
            list2->next = mergeTwoLists(list1, list2->next);
            return list2;
        }
    }
};

/**
 * Helper function to print the linked list.
 * @param head Pointer to the head of the list.
 */
void printList(ListNode* head) {
    while (head) {
        std::cout << head->val << " -> ";
        head = head->next;
    }
    std::cout << "NULL\n";
}

int main() {
    // Test cases
    Solution solution;
    ListNode* list1 = new ListNode(1, new ListNode(2, new ListNode(4)));
    ListNode* list2 = new ListNode(1, new ListNode(3, new ListNode(4)));
    ListNode* mergedList = solution.mergeTwoLists(list1, list2);
    printList(mergedList);  // Expected Output: 1 -> 1 -> 2 -> 3 -> 4 -> 4 -> NULL

     // Additional test case: testing with negative numbers and zeros
    ListNode* list3 = new ListNode(-3, new ListNode(-1, new ListNode(0)));
    ListNode* list4 = new ListNode(-2, new ListNode(4, new ListNode(5)));
    ListNode* result2 = solution.mergeTwoLists(list3, list4);
    printList(result2); // Expected: -3 -> -2 -> -1 -> 0 -> 4 -> 5 -> NULL

    return 0;
}
