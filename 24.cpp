#include <bits/stdc++.h>

using namespace std;

void morethan(int *arr, int n, int k)
{

    int x = n / k;

    // cout << x;

    sort(arr, arr + n);

    for (int i = 0; i < n;)
    {
        int count = 1;

        while ((i + 1 < n) && (arr[i] == arr[i + 1]))
        {
            count++;
            i++;
        }
        if (count > x)
        {
            cout << arr[i] << " with count " << count;
        }
        i++;
    }
    {
        /* code */
    }
}

int main()
{
    int arr[] = {4, 5, 6, 7, 8, 4, 4};

    int n = 7;

    int k = 3;

    morethan(arr, n, k);

    return 0;
}