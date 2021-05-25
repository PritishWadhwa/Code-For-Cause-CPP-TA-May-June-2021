class Solution
{
public:

    bool isValid(vector<vector<char>>& board, int i, int j, int n, char val)
    {
        for (int k = 0; k < n; k++)
        {
            if (board[i][k] == val || board[k][j] == val)
            {
                return false;
            }
        }
        int div = n / 3;
        int down = i / div;
        down *= div;
        int across = j / div;
        across *= div;
        for (int k = down; k < down + div; k++)
        {
            for (int l = across; l < across + div; l++)
            {
                if (board[k][l] == val)
                {
                    return false;
                }
            }
        }
        return true;
    }

    void solve(vector<vector<char>>& board, int i, int j, int n, vector<vector<char>>& ans)
    {
        if (i == n && j == 0)
        {
        // cout<<"hi";
            ans = board;
            return;
        }
        else if (j == n)
        {
            solve(board, i + 1, 0, n, ans);
            // return;
        }
        // else if(i == n){
        //     return;
        // }
        else if (board[i][j] == '.')
        {
            for (char k = '1'; k <= '9'; k++)
            {
                if (isValid(board, i, j, n, k))
                {
                    board[i][j] = k;
                    solve(board, i, j + 1, n, ans);
                    board[i][j] = '.';
                }
            }
        }
        else
        {
            solve(board, i, j + 1, n, ans);
        }
    }

    void solveSudoku(vector<vector<char>>& board)
    {
        vector<vector<char>> ans;
        solve(board, 0, 0, board.size(), ans);
        board = ans;
    }
};