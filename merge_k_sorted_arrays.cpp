class Solution {    
    struct NodeComp{
        bool operator()(const ListNode* a, const ListNode* b){ return a->val >= b->val; }
    };
    
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<ListNode*, std::vector<ListNode*>, NodeComp> pq; // minheap
        
        for(int i = 0; i < lists.size(); i++){
            if(lists[i]) pq.push(lists[i]);
        }        
        ListNode* ans = new ListNode(-1);
        ListNode* cur = ans;
        while(!pq.empty()){
            ListNode* top = pq.top();
            pq.pop();
            ListNode* next = top->next; 
            top->next = nullptr; // ground the top            
            cur->next = top; // connect it to ans
            cur = cur->next; // update cursor
            if(next)  pq.push(next);
        }
        return ans->next;
    }
};
