class Solution
{
public:
    int numSpecial(vector<vector<int>> &mat)
    {
        int ans = 0;
        for (int i = 0; i < mat.size(); i++)
        {
            for (int j = 0; j < mat[i].size(); j++)
            {
                if (mat[i][j] == 1)
                {
                    int c1 = 0;
                    for (int k = 0; k < mat.size(); k++)
                    {
                        if (mat[k][j] == 1)
                        {
                            c1++;
                        }
                    }
                    if (c1 == 1)
                    {
                        c1 = 0;
                        for (int k = 0; k < mat[i].size(); k++)
                        {
                            if (mat[i][k] == 1)
                            {
                                c1++;
                            }
                        }
                    }
                    if (c1 == 1)
                    {
                        ans++;
                    }
                }
            }
        }
        return ans;
    }
};