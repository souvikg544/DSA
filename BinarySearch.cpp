// BINARY SEARCH
/*Problem: Given a sorted array of size n and an integer k,find the position at which k is present in the array using binary search
Time Complexity: O(logn), where n is the size of the input array
Space Complexity: O(1)
*/
#include <bits/stdc++.h>
using namespace std;

int binarysearch(int arr[], int n, int k)
{
    int start = 0;
    int end = n - 1;
    int ans = -1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == k)
        {
            ans = mid;
            break;
        }
        else if (arr[mid] < k)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return ans;
}

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    cout << binarysearch(arr, 5, 40) << endl;

    return 0;
}