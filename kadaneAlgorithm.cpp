#include <bits/stdc++.h>

using namespace std;

void kadaneAlgo(int a[], int n)
{
    int maxSum = INT_MIN;
    int currSum = 0;

    for (int i = 0; i < n; i++)
    {
        currSum += a[i];
        if (currSum <= 0)
        {
            currSum = 0;
        }
    }

    maxSum = max(currSum, maxSum);

    cout << maxSum;

    // Time complexity: O(n)
}

int main()
{
    int a[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int n = sizeof(a) / sizeof(a[0]);

    kadaneAlgo(a, n);

    return 0;
}