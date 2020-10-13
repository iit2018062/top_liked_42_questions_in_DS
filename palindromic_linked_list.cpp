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
    bool isPalindrome(ListNode* head) {
      vector<int>arr;
      ListNode*tmp = head;
      while(tmp)
      {
        arr.push_back(tmp->val);
        tmp=tmp->next;
      }
      vector<int>s = arr;
      reverse(s.begin(),s.end());
      for(int i=0;i<s.size();i++)
      {
        if(s[i]!=arr[i])
          return false;
      }
      return true;
        
    }
};
