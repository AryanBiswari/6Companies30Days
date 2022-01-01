#include <bits/stdc++.h>
using namespace std;

int doOverlap(int L1[], int R1[], int L2[], int R2[])
{
    if (L1[0] > R2[0] || L2[0] > R1[0])
        return false;
    if (R1[1] > L2[1] || R2[1] > L1[1])
        return false;
    return true;
}

int main()
{
    int arr1[] = {0, 10};
    int arr2[] = {10, 0};
    int arr3[] = {5, 5};
    int arr4[] = {15, 0};
    int ans = doOverlap(arr1, arr2, arr3, arr4);
    cout << ans << endl;
}