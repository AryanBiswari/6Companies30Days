#include <bits/stdc++.h>
#define ull unsigned long long
using namespace std;

ull getNthUglyNo(int n)
{
    long dp[n + 1];
    dp[1] = 1;
    int p1 = 1;
    int p2 = 1;
    int p3 = 1;
    for (int i = 2; i <= n; i++)
    {
        long val1 = dp[p1] * 2;
        long val2 = dp[p2] * 3;
        long val3 = dp[p3] * 5;
        long mini = min(val1, min(val2, val3));
        dp[i] = mini;
        if (mini == val1)
            p1++;
        if (mini == val2)
            p2++;
        if (mini == val3)
            p3++;
    }
    return dp[n];
}

int main()
{
    int num = 10;
    auto ans = getNthUglyNo(num);
    cout << ans << endl;
}