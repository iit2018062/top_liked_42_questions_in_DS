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
      unordered_map<ListNode*,int>ump;
      ListNode*tmp = headA;
      while(tmp!=NULL)
      {
        ump[tmp]++;
        tmp = tmp->next;
        
      }
      ListNode*tmp1 = headB;
      while(tmp1!=NULL)
      {
        if(ump.find(tmp1)!=ump.end())
          return tmp1;
        tmp1=tmp1->next;
      }
      return NULL;
        
    }
};
