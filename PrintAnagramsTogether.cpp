#include <bits/stdc++.h>
using namespace std;

vector<vector<string>> Anagrams(vector<string> &string_list)
{
    map<string, vector<string>> mp;
    for (int i = 0; i < string_list.size(); i++)
    {
        string str = string_list[i];
        sort(str.begin(), str.end());
        mp[str].push_back(string_list[i]);
    }
    vector<vector<string>> ans(string_list.size());
    for (auto x : mp)
    {
        ans.push_back(x.second);
    }

    return ans;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<string> string_list(n);
        for (int i = 0; i < n; i++)
        {
            cin >> string_list[i];
        }
        vector<vector<string>> result = Anagrams(string_list);
        sort(result.begin(), result.end());
        for (int i = 0; i < result.size(); i++)
        {
            for (int j = 0; j < result[i].size(); j++)
            {
                cout << result[i][j] << " ";
            }
            cout << endl;
        }
    }
}