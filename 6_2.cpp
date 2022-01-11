// Intersection

#include <iostream>
using namespace std;

void intersection(int arr1[], int arr2[], int n, int m)
{
    int i = 0;
    int j = 0;

    while (i < n && j < m)
    {
        if (arr1[i] < arr2[j])
        {
            i++;
        }
        else if (arr1[i] > arr2[j])
        {
            j++;
        }
        else
        {
            if (arr1[i] == arr2[j - 1])
            {
                i++;
                j++;
            }
            else
            {
                cout << arr2[j] << " ";
                i++;
                j++;
            }
        }
    }
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

    intersection(arr1, arr2, n, m);

    return 0;
}