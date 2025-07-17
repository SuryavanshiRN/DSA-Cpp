class MinStack {
private:
    stack<int> st;      // Main stack to store all elements
    stack<int> minSt;   // Stack to keep track of the minimum element

public:
    MinStack() {} // Constructor

    void push(int val) {
        st.push(val);
        // Push to minSt only if it is empty or val is <= current min
        if (minSt.empty() || val <= minSt.top()) {
            minSt.push(val);
        }
    }

    void pop() {
        if (st.top() == minSt.top()) {
            minSt.pop();  // Remove from minSt if it's the minimum
        }
        st.pop();
    }

    int top() {
        return st.top();
    }

    int getMin() {
        return minSt.top();
    }
};