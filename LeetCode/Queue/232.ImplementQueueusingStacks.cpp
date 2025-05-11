#include <iostream>
#include <stack>
using namespace std;

typedef stack<int> stk_i;

class MyQueue
{
private:
    stk_i stk_queue;
    stk_i stk_helper;

    void _move(stk_i &from, stk_i &to)
    {
        while (!from.empty())
		{
            to.push(from.top());
            from.pop();
        }
    }

public:
    MyQueue() {}

    void push(int x)
    {
        _move(stk_queue, stk_helper);
        stk_queue.push(x);
        _move(stk_helper, stk_queue);
    }

    int pop()
    {
        if (stk_queue.empty()) return -1;
        int val = stk_queue.top();
        stk_queue.pop();
        return val;
    }

    int peek()
    {
        if (stk_queue.empty()) return -1;
        return stk_queue.top();
    }

    bool empty()
    {
        return stk_queue.empty();
    }
};

