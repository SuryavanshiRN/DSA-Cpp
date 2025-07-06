/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if (!head) return nullptr; // If the list is empty, return null
        
        ListNode* dummy = new ListNode(0, head); // Dummy node before head
        ListNode* prev = dummy; // Pointer to track the last unique node
        
        while (head) {
            // If it's a start of duplicates
            if (head->next && head->val == head->next->val) {
                // Skip all nodes with this value
                while (head->next && head->val == head->next->val) {
                    head = head->next;
                }
                prev->next = head->next; // Connect prev to the next unique node
            } else {
                prev = prev->next; // Move prev forward if no duplicate
            }
            head = head->next; // Move head forward
        }
        
        return dummy->next; // Return the new head
    }
};
