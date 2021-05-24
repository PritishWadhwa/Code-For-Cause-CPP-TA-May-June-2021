class Solution
{
public:

    vector<string> genCombos()
    {
        vector<string> ans;
        ans.push_back("");
        ans.push_back("");
        ans.push_back("abc");
        ans.push_back("def");
        ans.push_back("ghi");
        ans.push_back("jkl");
        ans.push_back("mno");
        ans.push_back("pqrs");
        ans.push_back("tuv");
        ans.push_back("wxyz");
        return ans;
    }

    void findCombo(string s, vector<string>& combos, vector<string>& ans, string curr, int i)
    {
        if (i == s.length())
        {
            if (curr.length() == s.length() && curr.length() > 0)
            {
                ans.push_back(curr);
            }
            return;
        }
        // cout<<stoi(s[i])<<" ";
        for (auto j : combos[int(s[i]) - 48])
        {
        // for(auto j: combos[stoi(s[i])]{
            // cout<<"hi";
            findCombo(s, combos, ans, curr + j, i + 1);
        }

    }

    vector<string> letterCombinations(string digits)
    {
        vector<string> combos = genCombos();
        vector<string> ans;
        findCombo(digits, combos, ans, "", 0);
        return ans;
    }
};