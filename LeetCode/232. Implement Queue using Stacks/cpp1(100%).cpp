class MyQueue {
        public:
                stack<int> main;
                stack<int> sec;
                MyQueue() {}
                
                void push(int x) {
                        main.push(x);
                }
                
                int pop() {
                        while(!main.empty()) {
                                sec.push(main.top());
                                main.pop();
                        }
                        int temp = sec.top();
                        sec.pop();
                        while(!sec.empty()) {
                                main.push(sec.top());
                                sec.pop();
                        }
                        return temp;
                }
                
                int peek() {
                        while(!main.empty()) {
                                sec.push(main.top());
                                main.pop();
                        }
                        int temp = sec.top();
                        while(!sec.empty()) {
                                main.push(sec.top());
                                sec.pop();
                        }
                        return temp;
                }
                
                bool empty() {
                        return main.empty();
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
