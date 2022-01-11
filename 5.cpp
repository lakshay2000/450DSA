#include <iostream>
using namespace std;

void negative(int arr[], int n)
{
    int j = n - 1;
    int i = 0;

    while (i <= j)
    {

        if (arr[i] > 0 && arr[j] < 0)
        {
            swap(arr[i], arr[j]);
            j--;
            i++;
        }
        else if (arr[i] > 0 && arr[j] > 0)
        {
            j--;
        }
        else if (arr[i] < 0 && arr[j] < 0)
        {
            i++;
        }
        else if (arr[i] < 0 && arr[j] > 0)
        {

            j--;
        }
    }
}

int main()
{

    int n;
    cin >> n;
    // int *arr = new int[n];
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << endl;

    negative(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}