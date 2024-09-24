#include <iostream>

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution
{
public:
    /**
     * Reverses a singly linked list iteratively.
     * @param head The head of the singly linked list.
     * @return The new head of the reversed list.
     */
    ListNode *reverseList(ListNode *head)
    {
        ListNode *prev = nullptr;
        ListNode *curr = head;

        while (curr != nullptr)
        {
            ListNode *next = curr->next; // Temporarily store next node
            curr->next = prev;           // Reverse current node's pointer
            prev = curr;                 // Move prev forward
            curr = next;                 // Move curr forward
        }

        return prev; // Prev will be the new head
    }
};

void printList(ListNode *head)
{
    while (head)
    {
        std::cout << head->val << " ";
        head = head->next;
    }
    std::cout << std::endl;
}

// Test cases for the iterative approach
void runTests()
{
    Solution sol;

    // Create test case linked list: 1 -> 2 -> 3 -> 4 -> 5
    ListNode *head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    // Print original list
    std::cout << "Original List: ";
    printList(head);

    // Reverse the list
    ListNode *reversed = sol.reverseList(head);

    // Print reversed list
    std::cout << "Reversed List: ";
    printList(reversed);
}

int main()
{
    runTests();
    return 0;
}
