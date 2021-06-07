class FrontMiddleBackQueue
{
public:

    deque<int> first, second;

    void checkSize()
    {
        if (first.size() == second.size())
        {
            return;
        }
        if (first.size() > second.size())
        {
            second.push_front(first.back());
            first.pop_back();
        }
        else if (first.size() < second.size() - 1)
        {
            first.push_back(second.front());
            second.pop_front();
        }
    }

    FrontMiddleBackQueue()
    {

    }

    void pushFront(int val)
    {
        first.push_front(val);
        checkSize();
    }

    void pushMiddle(int val)
    {
        first.push_back(val);
        checkSize();
    }

    void pushBack(int val)
    {
        second.push_back(val);
        checkSize();
    }

    int popFront()
    {
        if (first.empty() && second.empty())
        {
            return -1;
        }
        if (first.empty())
        {
            int val = second.front();
            second.pop_front();
            return val;
        }
        int val = first.front();
        first.pop_front();
        checkSize();
        return val;
    }

    int popMiddle()
    {
        int val;
        if (first.empty() && second.empty())
        {
            return -1;
        }
        if (first.size() >= second.size())
        {
            val = first.back();
            first.pop_back();
        }
        else
        {
            val = second.front();
            second.pop_front();
        }
        checkSize();
        return val;
    }

    int popBack()
    {
        if (first.empty() && second.empty())
        {
            return -1;
        }
        if (second.empty())
        {
            int val = first.back();
            first.pop_back();
            return val;
        }
        int val = second.back();
        second.pop_back();
        checkSize();
        return val;
    }
};

/**
 * Your FrontMiddleBackQueue object will be instantiated and called as such:
 * FrontMiddleBackQueue* obj = new FrontMiddleBackQueue();
 * obj->pushFront(val);
 * obj->pushMiddle(val);
 * obj->pushBack(val);
 * int param_4 = obj->popFront();
 * int param_5 = obj->popMiddle();
 * int param_6 = obj->popBack();
 */