// Union

#include <iostream>
using namespace std;

void unions(int arr1[], int arr2[], int n, int m)
{
    int i = 0;
    int j = 0;

    while (i < n && j < m)
    {
        if (arr1[i] < arr2[j])
            cout << arr1[i++] << " ";

        else if (arr2[j] < arr1[i])
            cout << arr2[j++] << " ";

        else
        {
            cout << arr2[j++] << " ";
            i++;
        }
    }

    /* Print remaining elements of the larger array */
    while (i < n)
        cout << arr1[i++] << " ";

    while (j < m)
        cout << arr2[j++] << " ";
}

int main()
{

    int n;
    int m;
    cin >> n;
    cin >> m;

    int arr1[n];
    int arr2[m];

    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> arr2[i];
    }

    unions(arr1, arr2, n, m);

    return 0;
}