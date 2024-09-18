#include <iostream>
using namespace std;

/**
 * Definition for singly-linked list.
 */
struct ListNode {
    int val;
    ListNode* next;
    
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};

class Solution {
public:
    /**
     * Function to delete duplicates from a sorted linked list.
     * 
     * @param head - The head of the sorted linked list.
     * @return The head of the modified linked list.
     */
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* current = head;
        
        // Traverse the linked list
        while (current && current->next) {
            if (current->val == current->next->val) {
                // Remove the duplicate node
                ListNode* temp = current->next;
                current->next = current->next->next;
                delete temp;  // Optional: free the memory
            } else {
                // Move to the next node
                current = current->next;
            }
        }
        
        return head;
    }
};

// Function to create and print a linked list for testing purposes
void printList(ListNode* head) {
    while (head != nullptr) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

// Test cases
int main() {
    Solution solution;
    
    // Test case 1: [1, 1, 2]
    ListNode* test1 = new ListNode(1, new ListNode(1, new ListNode(2)));
    test1 = solution.deleteDuplicates(test1);
    cout << "Test 1: ";
    printList(test1);  // Expected output: 1 2
    
    // Test case 2: [1, 1, 2, 3, 3]
    ListNode* test2 = new ListNode(1, new ListNode(1, new ListNode(2, new ListNode(3, new ListNode(3)))));
    test2 = solution.deleteDuplicates(test2);
    cout << "Test 2: ";
    printList(test2);  // Expected output: 1 2 3
    
    return 0;
}
