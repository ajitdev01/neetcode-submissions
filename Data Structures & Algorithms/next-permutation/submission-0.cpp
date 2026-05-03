#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution
{
public:
    void nextPermutation(vector<int> &A)
    {
        // find the Pivit
        int pivot = -1, n = A.size();
        for (int i = n - 2; i >= 0; i--)
        {
            if (A[i] < A[i + 1])
            {
                pivot = i;
                break;
            }
        }
        if (pivot == -1)
        {
            reverse(A.begin(), A.end());
            return;
        }
        // 2nd Step : next larger number
        for (int i = n - 1; i > pivot; i--)
        {
            if (A[i] > A[pivot])
            {
                swap(A[i], A[pivot]);
                break;
            }
        }
        //// 3rd Step : Revers (piv+1 to n-1)
        // reverse(A.begin() + pivot + 1, A.end());
        int i = pivot + 1, j = n - 1;
        while (i <= j)
        {
            swap(A[i], A[j]);
            i++;
            j--;
        }
    }
};