class MyStack {
   public:
    queue<int> queue1 = queue<int>();
    queue<int> queue2 = queue<int>();

    void push(int x) { queue1.push(x); }

    int pop() {
        if (queue1.size() == 0) {
            return -1;
        }

        while (queue1.size() > 1) {
            queue2.push(queue1.front());
            queue1.pop();
        }
        int popped = queue1.front();
        queue1.pop();

        while (!queue2.empty()) {
            queue1.push(queue2.front());
            queue2.pop();
        }
        return popped;
    }

    int top() {
        if (queue1.size() == 0) {
            return -1;
        }

        while (queue1.size() > 1) {
            queue2.push(queue1.front());
            queue1.pop();
        }
        int last = queue1.front();
        queue1.pop();
        queue2.push(last);

        while (!queue2.empty()) {
            queue1.push(queue2.front());
            queue2.pop();
        }
        return last;
    }

    bool empty() { return queue1.empty(); }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */