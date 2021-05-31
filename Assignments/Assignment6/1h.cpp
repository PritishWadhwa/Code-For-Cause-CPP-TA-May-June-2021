class MinStack
{
public:
    /** initialize your data structure here. */

    vector<int> stack;
    vector<int> minStack;
    int size;

    MinStack()
    {
        size = 0;
    }

    void push(int val)
    {
        if (stack.size() == 0)
        {
            stack.push_back(val);
            minStack.push_back(val);
        }
        else
        {
            minStack.push_back(min(minStack[size - 1], val));
            stack.push_back(val);
        }
        size++;
    }

    void pop()
    {
        minStack.pop_back();
        stack.pop_back();
        size--;
    }

    int top()
    {
        return stack[size - 1];
    }

    int getMin()
    {
        return minStack[size - 1];
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