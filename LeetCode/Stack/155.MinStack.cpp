#include <iostream>
#include <cassert>
#include <climits>
using namespace std;

class MinStack
{
private:
    struct Node
    {
        int data;
        int minSoFar;
        Node *next;
        Node(int val, int minVal, Node *nextNode) : data(val), minSoFar(minVal), next(nextNode) {}
    };

    Node *head;

    bool isEmpty()
    {
        return head == nullptr;
    }

public:
    MinStack() : head(nullptr) {}

    void push(int val)
    {
        if (head == nullptr)
        {
            head = new Node(val, val, nullptr);
        }
        else
        {
            int currentMin = (val < head->minSoFar) ? val : head->minSoFar;
            head = new Node(val, currentMin, head);
        }
    }

    void pop()
    {
        assert(!isEmpty());
        Node *temp = head;
        head = head->next;
        delete temp;
    }

    int top()
    {
        assert(!isEmpty());
        return head->data;
    }

    int getMin()
    {
        assert(!isEmpty());
        return head->minSoFar;
    }

    ~MinStack()
    {
        while (!isEmpty())
        {
            pop();
        }
    }
};

int main()
{
    MinStack stk;
    stk.push(10);
    stk.push(20);
    stk.push(5);
    stk.push(30);

    cout << "Top: " << stk.top() << endl;    // 30
    cout << "Min: " << stk.getMin() << endl; // 5

    stk.pop();
    cout << "Top after pop: " << stk.top() << endl;    // 5
    cout << "Min after pop: " << stk.getMin() << endl; // 5

    return 0;
}