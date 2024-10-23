#include <iostream>
using namespace std;

//  Definition for singly-linked list.
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
private:
    // Function to reverse the linked list
    ListNode *reverseList(ListNode *head)
    {
        ListNode *prev = nullptr;
        ListNode *curr = head;
        while (curr)
        {
            ListNode *next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }

public:
    // Main function to check if the linked list is a palindrome
    bool isPalindrome(ListNode *head)
    {
        if (!head || !head->next)
            return true;

        // Step 1: Find the middle of the list using fast and slow pointers
        ListNode *slow = head;
        ListNode *fast = head;
        while (fast && fast->next)
        {
            slow = slow->next;
            fast = fast->next->next;
        }

        // Step 2: Reverse the second half of the list
        ListNode *secondHalf = reverseList(slow);
        ListNode *firstHalf = head;

        // Step 3: Compare both halves
        while (secondHalf)
        {
            if (firstHalf->val != secondHalf->val)
                return false;
            firstHalf = firstHalf->next;
            secondHalf = secondHalf->next;
        }

        return true;
    }
};

int main()
{
    // Test Case 1: [1,2,2,1] - Should return true
    ListNode *head1 = new ListNode(1);
    head1->next = new ListNode(2);
    head1->next->next = new ListNode(2);
    head1->next->next->next = new ListNode(1);
    Solution sol;
    cout << (sol.isPalindrome(head1) ? "Passed" : "Failed") << endl;

    // Test Case 2: [1,2] - Should return false
    ListNode *head2 = new ListNode(1);
    head2->next = new ListNode(2);
    cout << (sol.isPalindrome(head2) ? "Passed" : "Failed") << endl;
}
