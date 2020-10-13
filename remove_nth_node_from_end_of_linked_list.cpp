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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
      int c=0;
      ListNode*tmp = head;
      while(tmp)
      {
        c++;
        tmp=tmp->next;
      }
      int len = c-n;
      ListNode*dummy = new ListNode(-1);
      dummy->next = head;
      if(len<0)return head;
      tmp = dummy;
      while(tmp!=NULL && len!=0)
      {
        tmp=tmp->next;
        len--;
      }
      if(tmp==NULL)return dummy->next;
      if(tmp->next==NULL)
      {
        tmp=NULL;
        return dummy->next;
      }
      tmp->next = tmp->next->next;
        return dummy->next;
    }
};
