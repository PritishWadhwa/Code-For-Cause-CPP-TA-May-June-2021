class Solution
{
public:
    vector<int> asteroidCollision(vector<int>& asteroids)
    {
        stack<int> st;
        for (int i = 0; i < asteroids.size(); i++)
        {
            if (st.empty())
            {
                st.push(asteroids[i]);
            }
            else
            {
                if (asteroids[i] >= 0)
                {
                    st.push(asteroids[i]);
                }
                else
                {
                    if (st.top() < 0)
                    {
                        st.push(asteroids[i]);
                        continue;
                    }
                    while (!st.empty() && st.top() >= 0)
                    {
                        int prev = st.top();
                        if (prev == abs(asteroids[i]))
                        {
                            st.pop();
                            break;
                        }
                        else
                        {
                            if (prev < abs(asteroids[i]))
                            {
                                while (!st.empty() && st.top() > 0 && st.top() < abs(asteroids[i]))
                                {
                                    st.pop();
                                }
                                if (st.empty() || st.top() < 0)
                                {
                                    st.push(asteroids[i]);
                                }
                            }
                            else
                            {
                                break;
                            }
                        }
                    }

                }
            }
        }
        vector<int> ans;
        while (!st.empty())
        {
            int val = st.top();
            st.pop();
            ans.push_back(val);
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};