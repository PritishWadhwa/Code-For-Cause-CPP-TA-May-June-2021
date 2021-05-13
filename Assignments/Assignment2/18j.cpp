class Solution
{
public:
    vector<int> finalPrices(vector<int>& prices)
    {
        vector<int> minIndex(prices.size(), -1);
        stack<int> st;
        st.push(0);
        for (int i = 1; i < prices.size(); i++) {
            if (!st.empty()) {
                while (!st.empty() && prices[i] <= prices[st.top()]) {
                    minIndex[st.top()] = i;
                    st.pop();
                }
            }
            st.push(i);
        }
        for (int i = 0; i < prices.size(); i++) {
            if (minIndex[i] == -1) {
                minIndex[i] = prices[i];
            }
            else {
                minIndex[i] = prices[i] - prices[minIndex[i]];
            }
        }
        return minIndex;
    }
};