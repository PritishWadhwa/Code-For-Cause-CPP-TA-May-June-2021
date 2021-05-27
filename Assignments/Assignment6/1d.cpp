class CustomStack
{
public:

    vector<int> stack;
    int size;
    int currSize;

    CustomStack(int maxSize)
    {
        this->size = maxSize;
        this->currSize = 0;
    }

    void push(int x)
    {
        if (currSize < size)
        {
            stack.push_back(x);
            currSize++;
        }
    }

    int pop()
    {
        if (currSize == 0)
        {
            return -1;
        }
        int val = stack[currSize - 1];
        currSize--;
        stack.pop_back();
        return val;
    }

    void increment(int k, int val)
    {
        int lim = min(k, currSize);
        for (int i = 0; i < lim; i++)
        {
            stack[i] += val;
        }
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */