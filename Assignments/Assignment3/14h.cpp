class OrderedStream
{
public:
    int size;
    string *arr;
    int valReturned;

    OrderedStream(int n)
    {
        this->size = n;
        this->valReturned = 0;
        arr = new string[n];
        for (int i = 0; i < n; i++)
        {
            arr[i] = "NULL";
        }
    }

    vector<string> insert(int idKey, string value)
    {
        arr[idKey - 1] = value;
        vector<string> ans;
        while (valReturned < size && arr[valReturned] != "NULL")
        {
            ans.push_back(arr[valReturned]);
            valReturned++;
        }
        return ans;
    }
};

/**
 * Your OrderedStream object will be instantiated and called as such:
 * OrderedStream* obj = new OrderedStream(n);
 * vector<string> param_1 = obj->insert(idKey,value);
 */