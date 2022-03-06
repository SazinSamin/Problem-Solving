// Follow-up: Can you implement the queue such that each operation is amortized O(1) time complexity? In other words, 
// performing n operations will take overall O(n) time even if one of those operations may take longer.



#include<iostream>
#include<stack>
#include<climits>
using namespace std;

class MyQueue {
public:
    stack<int> s1;
    stack<int> s2;    
    MyQueue() {}
    
    void push(int x) {
        s1.push(x);
    }
    
    int pop() {
        if(s2.empty()) {
                while(!s1.empty()) {
                        s2.push(s1.top());
                        s1.pop();
                }
        }
        int temp = s2.top();
        s2.pop();
        return temp;
    }
    
    int peek() {
        if(s2.empty()) {
                while(!s1.empty()) {
                        s2.push(s1.top());
                        s1.pop();
                }
        }
        return s2.top();
    }
    
    bool empty() {
        return (s1.empty() && s2.empty()) ? true : false;
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
