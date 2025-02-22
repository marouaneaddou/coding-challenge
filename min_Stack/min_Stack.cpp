
# include <iostream>
# include <stack>

using namespace std;

class MinStack {
    std::stack<int> stk;
    std::stack<int> minStk;
public:
    MinStack() {
    }
    
    void push(int val) {
        if ( minStk.empty() || minStk.top() >= val ) minStk.push( val );
        stk.push( val );
    }
    
    void pop() {
        if ( minStk.top() == stk.top() ) minStk.pop();
        stk.pop();
    }
    
    int top() {
        return stk.top();
    }
    
    int getMin() {
        return minStk.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */