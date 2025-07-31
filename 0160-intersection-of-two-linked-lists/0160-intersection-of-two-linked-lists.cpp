/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* temp = headA;
        int len1 = 0;
        while(temp!=NULL){
            temp=temp->next;
            len1++;
        }
        int len2 = 0;
        temp = headB;
        while(temp!=NULL){
            temp=temp->next;
            len2++;
        }

        ListNode* temp1 = headA;
        ListNode* temp2 = headB;

        if(len1 >= len2){
            int diff = len1 - len2;
            while(diff!=0){
                temp1 = temp1->next;
                diff--;
            }
            while(temp1!=NULL){
                if(temp1 == temp2) return temp1;
                temp1 = temp1->next;
                temp2 = temp2->next;
            }
        }
        else{
            int diff = len2 - len1;
            while(diff!=0){
                temp2 = temp2->next;
                diff--;
            }
            while(temp2!=NULL){
                if(temp1 == temp2) return temp2;
                temp1 = temp1->next;
                temp2 = temp2->next;
            }
        }

        return nullptr;
    }
};