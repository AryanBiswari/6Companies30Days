#include <bits/stdc++.h>
using namespace std;

string encode(string src)
{
    int count = 1, n = src.size();
    string ans = "";
    ans += src[0];
    for (int i = 1; i < n; i++)
    {
        if (src[i] == src[i - 1])
            count++;
        else
        {
            ans += count + '0';
            ans += src[i];
            count = 1;
        }
    }
    ans += to_string(count);
    return ans;
}

int main()

{
    string str = "aaaabbbbwwwwcccd";
    string ans = encode(str);
    for(int i = 0;i<ans.size();i++)
    {
        cout << ans[i] << "->";
    }
}