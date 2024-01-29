class MyQueue {
public:

    stack <int> pushStk, popStk;
    int front, firstPush;
    MyQueue() {
        
    }
    
    void push(int x) {
        if(pushStk.empty() && popStk.empty()) front = x;
        else if(pushStk.empty()) firstPush = x;
        pushStk.push(x);
        
    }
    
    int pop() {
        if(popStk.empty()){
            while(!pushStk.empty()){
                popStk.push(pushStk.top());
                pushStk.pop();
            }
        }
        int x = popStk.top();
        popStk.pop();
        if(popStk.empty()) front = firstPush;
        else front = popStk.top();

        return x;

    }
    
    int peek() {
        return front;
    }
    
    bool empty() {
        return (pushStk.empty() && popStk.empty());
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