class MinStack {
public:
    stack<int>st;
    stack<int>minStack;
    MinStack() {
    }
    
    void push(int val) {
        st.push(val);
        if(minStack.empty() || val<=minStack.top()){
            minStack.push(val);
        }
    }
    
    void pop() {
        if(!st.empty()  && minStack.top()==st.top()){
            st.pop();
            minStack.pop();
        }
        else if(!st.empty()){
            st.pop();
        }

    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return minStack.top();
    }
};
