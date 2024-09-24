#include <iostream>
#include <vector>
using namespace std;

/**
 * Definition for singly-linked list.
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
     * Add two numbers represented by linked lists.
     * @param l1 - Pointer to the first linked list.
     * @param l2 - Pointer to the second linked list.
     * @return Pointer to the resultant linked list representing the sum.
     */
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        ListNode *dummy = new ListNode();           // Dummy node to simplify code
        ListNode *current = dummy; // Pointer to the current node in the result
        int carry = 0;             // To store the carry value during addition

        // Loop until both lists are exhausted and there's no carry left
        while (l1 != nullptr || l2 != nullptr || carry != 0)
        {
            int sum = carry; // Start with carry from previous iteration

            // Add the values from the lists if available
            if (l1 != nullptr)
            {
                sum += l1->val;
                l1 = l1->next;
            }
            if (l2 != nullptr)
            {
                sum += l2->val;
                l2 = l2->next;
            }

            carry = sum / 10; // Compute new carry
            sum = sum % 10;   // Get the last digit for the current node

            // Create new node with sum and move to the next node
            current->next = new ListNode(sum);
            current = current->next;
        }

        return dummy->next; // Return the head of the resultant list
    }
};

/**
 * Helper function to create a linked list from an array.
 */
ListNode *createLinkedList(const vector<int> &nums)
{
    ListNode *dummyHead = new ListNode(0);
    ListNode *current = dummyHead;
    for (int num : nums)
    {
        current->next = new ListNode(num);
        current = current->next;
    }
    return dummyHead->next;
}

/**
 * Helper function to print a linked list.
 */
void printLinkedList(ListNode *head)
{
    while (head != nullptr)
    {
        cout << head->val;
        if (head->next != nullptr)
            cout << " -> ";
        head = head->next;
    }
    cout << endl;
}

/**
 * Test cases to validate the solution.
 */
void runTests()
{
    vector<pair<vector<int>, vector<int>>> testCases = {
        {{2, 4, 3}, {5, 6, 4}}, // Test case 1: Simple addition (342 + 465 = 807)
        {{0}, {0}},             // Test case 2: Adding zeros
        {{9, 9, 9}, {1}},       // Test case 3: Handling carry-over (999 + 1 = 1000)
        {{1, 8}, {0}},          // Test case 4: Adding with zero (81 + 0 = 81)
        {{5}, {5}}              // Test case 5: Single-digit addition with carry (5 + 5 = 10)
    };

    for (int i = 0; i < testCases.size(); i++)
    {
        ListNode *l1 = createLinkedList(testCases[i].first);
        ListNode *l2 = createLinkedList(testCases[i].second);

        cout << "Test Case " << i + 1 << ": " << endl;
        cout << "  Input: ";
        printLinkedList(l1);
        cout << " + ";
        printLinkedList(l2);
        Solution sol;
        ListNode *result = sol.addTwoNumbers(l1, l2);
        cout << "  Result: ";
        printLinkedList(result);
        cout << endl;
    }
}

int main()
{
    runTests();
    return 0;
}
