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
    ListNode *detectCycle(ListNode *head) {
      unordered_map<ListNode*,int>ump;
      ListNode*tmp = head;
      while(tmp!=NULL)
      {
        if(ump.find(tmp)!=ump.end())
          return tmp;
        ump[tmp]++;
        tmp=tmp->next;
      }
      return NULL;
        
    }
};
