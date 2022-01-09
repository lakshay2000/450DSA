// Reverse the array

#include <iostream>
using namespace std;

void reversearray(int *arr, int n)
{

    for (int i = 0; i < n - i - 1; i++)
    {
        swap(arr[i], arr[n - i - 1]);
    }
}
int main()
{

    int n;
    cin >> n;

    int *arr = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    reversearray(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
