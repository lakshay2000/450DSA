#include <iostream>
using namespace std;

bool sumzero(int arr[], int n)
{
    bool flag = false;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            return true;
        }
    }
    for (int i = 0; i < n; i++)
    {
        int sum = arr[i];

        for (int j = i + 1; j < n; j++)
        {
            sum += arr[j];

            if (sum == 0)
            {
                return true;
            }
        }
    }
    return false;
}
int main()
{

    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int ans = sumzero(arr, n);

    if (ans)
    {
        cout << "mil gya";
    }
    else
    {
        cout << "nhi mila";
    }

    return 0;
}