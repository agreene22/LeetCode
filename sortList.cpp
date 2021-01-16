/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 * Given the head of a linked list, return the list after sorting it in ascending order.
 * Follow up: Can you sort the linked list in O(n logn) time and O(1) memory (i.e. constant space)?
 */
class Solution {
public:
    ListNode* sortList(ListNode* head) {
      ListNode* prev;
      ListNode* curr;
      ListNode* prevParent;

      prev = head;
      curr = head->next;
      while(curr->next != NULL){
        if(curr->val < prev->val){
          prev->next = curr->next;
          curr->next = prev;
          if(prev == head){
            head = curr;
          }
        }
        prevParent = prev;
        prev = curr;
        curr = curr->next;
      }
      return head;
    }
};




class Solution {
public:
    ListNode* sortList(ListNode* head) {
      ListNode* prev;
      ListNode* curr;
      ListNode* prevParent;
      int count;

      prev = head;
      curr = head->next;
      while(curr->next != NULL){
        if(curr->val < prev->val){
            if(curr->next != NULL){
                prev->next = curr->next;
                if(count != 0){
                  prevParent->next = curr;
                }
            }else{
                prev->next = NULL;
            }

          curr->next = prev;
          if(prev == head){
            head = curr;
          }
        }
        prevParent = prev;
        prev = curr;
        // prevParent = prev;
        curr = curr->next;
        count++;
      }
      return head;
    }
};
