#include <iostream>
using namespace std;

void positive(int *arr, int n)
{
    int i = 0;
    int j = n - 1;

    while (i < j)
    {
        if (arr[i] > 0 && arr[j] < 0)
        {
            i++;
            j--;
        }
        else if (arr[i] > 0 && arr[j] > 0)
        {
            i++;
        }
        else if (arr[i] < 0 && arr[j] > 0)
        {
            swap(arr[i], arr[j]);
        }
        else
        {
            j--;
        }
    }
}

void alternate(int *arr, int n)
{
    int i = 0;
    int j = n - 1;

    while (i < n && j > 0)
    {
        if (arr[i] > 0 && arr[j] < 0)
        {
            swap(arr[i], arr[j]);
            i = i + 2;
            j = j - 1;
        }
        else
        {
            i++;
            // j--;
        }
    }
}

int main()
{
    int arr[] = {-5, -2, 5, 2, 4, 7, 1, 8, -8};

    positive(arr, 9);

    for (int i = 0; i < 9; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
    cout << endl;

    alternate(arr, 9);

    for (int i = 0; i < 9; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}