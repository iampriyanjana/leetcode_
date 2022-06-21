class MyQueue {
public:
    stack<int> s1;
    stack<int> s2;
    MyQueue() {
        
    }
    
    void push(int x) {
        
        s1.push(x);
    }
    
    int pop() {
        if(s1.empty())
        {
            return 0;
        }
        while(!s1.empty()){
            int temp=s1.top();
            s2.push(temp);
            s1.pop();
        }
        int del=s2.top();
        s2.pop();
        
        while(!s2.empty()){
            int temp=s2.top();
            s1.push(temp);
            s2.pop();
        }
        return del;
    }
    
    int peek() {
        if(s1.empty()){
            return 0;
        }
         while(!s1.empty()){
            int temp=s1.top();
            s2.push(temp);
            s1.pop();
        }
        int val=s2.top();
        
        while(!s2.empty()){
            int temp=s2.top();
            s1.push(temp);
            s2.pop();
        }
        return val;
    }
    
    bool empty() {
        
        return s1.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */