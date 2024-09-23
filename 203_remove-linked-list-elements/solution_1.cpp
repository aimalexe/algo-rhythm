#include <iostream>

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        // Create a dummy node that points to the head
        ListNode* dummy = new ListNode(-1);
        dummy->next = head;
        ListNode* current = dummy;
        
        // Traverse the list and remove nodes with the target value
        while (current->next != nullptr) {
            if (current->next->val == val) {
                ListNode* temp = current->next;
                current->next = current->next->next;
                delete temp;  // Free the memory of the removed node
            } else {
                current = current->next;
            }
        }
        
        // Return the updated list, starting from the original head
        ListNode* result = dummy->next;
        delete dummy;  // Free the memory of the dummy node
        return result;
    }
};

// Helper function to print the list
void printList(ListNode* head) {
    while (head != nullptr) {
        std::cout << head->val << " ";
        head = head->next;
    }
    std::cout << std::endl;
}

int main() {
    Solution sol;

    // Create linked list 1 -> 2 -> 6 -> 3 -> 4 -> 5 -> 6
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(6);
    head->next->next->next = new ListNode(3);
    head->next->next->next->next = new ListNode(4);
    head->next->next->next->next->next = new ListNode(5);
    head->next->next->next->next->next->next = new ListNode(6);

    std::cout << "Original list: ";
    printList(head);

    // Remove elements with value 6
    head = sol.removeElements(head, 6);

    std::cout << "Updated list: ";
    printList(head);

    return 0;
}
