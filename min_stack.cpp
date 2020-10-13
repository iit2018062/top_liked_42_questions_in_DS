class MinStack {
public:
    /** initialize your data structure here. */
  struct node
  {
    int m;
    int x;
  };
  stack<node>s;
    MinStack() {
      while(!s.empty())
        s.pop();
        
    }
    
  
    void push(int x) {
      node tmp;
      tmp.m = x;
      tmp.x=x;
      if(s.empty())
        s.push(tmp);
      else
      {
        tmp.m = min(tmp.m,(s.top()).m);
        s.push(tmp);
      }
        
    }
    
    void pop() {
        if(s.empty())return;
        s.pop();
    }
    
    int top() {
      if(s.empty())return -1;
      node tmp = s.top();
      return tmp.x;
        
    }
    
    int getMin() {
      if(s.empty())return -1;
      node tmp = s.top();
      return tmp.m;
        
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
