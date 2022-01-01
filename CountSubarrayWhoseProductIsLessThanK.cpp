#include <bits/stdc++.h>
using namespace std;

int countSubArrayProductLessThanK(const vector<int> &a, int n, long long k)
{
    if (k <= 1)
    {
        return 0;
    }
    long long int prod = 1;
    int result = 0;
    int left = 0;
    int right = 0;
    while (right < n)
    {
        prod = prod * a[right];
        while (prod >= k)
        {
            prod /= a[left];
            left++;
        }
        result += right - left + 1;
        right++;
    }
    return result;
}

int main()
{
    vector<int> arr{1, 2, 3, 4};
    int n = 4;
    long long k = 10;
    int ans = countSubArrayProductLessThanK(arr, n, k);
    cout << ans << endl;
}