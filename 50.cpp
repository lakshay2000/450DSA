#include <bits/stdc++.h>
using namespace std;

int getMedian(int *arr1, int *arr2, int n)
{
    int i = n - 1;
    int j = 0;

    while (i < n)
    {

        if (arr1[i] > arr2[j])
        {
            swap(arr1[i], arr2[j]);
            i--;
            j++;
        }
        else
        {
            break;
        }
    }

    sort(arr1, arr1 + n);
    sort(arr2, arr2 + n);

    int ans = (arr1[n - 1] + arr2[0]) / 2;
    return ans;
}

int main()
{

    int ar1[] = {1, 12, 15, 26, 38};
    int ar2[] = {2, 13, 17, 30, 45};

    int n = 5;

    cout << getMedian(ar1, ar2, n);

    return 0;
}