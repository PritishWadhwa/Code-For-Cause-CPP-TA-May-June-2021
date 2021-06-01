class MyCircularQueue
{
public:

    vector<int> q;
    int size;
    int front;
    int last;
    int currSize;

    MyCircularQueue(int k)
    {
        this->size = k;
        this->front = 0;
        this->last = -1;
        this->currSize = 0;
        q.reserve(k);
    }

    bool enQueue(int value)
    {
        if (currSize < size)
        {
            last = (last + 1) % size;
            q[last % size] = value;
            currSize++;
            return true;
        }
        return false;
    }

    bool deQueue()
    {
        if (currSize > 0)
        {
            front = (front + 1) % size;
            currSize--;
            return true;
        }
        return false;
    }

    int Front()
    {
        if (currSize == 0)
        {
            return -1;
        }
        return q[front % size];
    }

    int Rear()
    {
        if (currSize == 0)
        {
            return -1;
        }
        return q[last % size];
    }

    bool isEmpty()
    {
        return (currSize == 0);
    }

    bool isFull()
    {
        return (currSize == size);
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */