#include <iostream>
using namespace std;

void duplicate(int arr[], int n)
{

    int temp[n + 1] = {0};

    for (int i = 0; i < n; i++)
    {
        temp[arr[i]]++;
    }

    for (int i = 0; i < n; i++)
    {
        cout << temp[i] << " ";
    }

    for (int i = 0; i < n; i++)
    {

        if (temp[i] > 1)
        {
            cout << endl;
            cout << "ans is" << arr[i] << endl;
        }
    }
}

int main()
{

    int arr[] = {1, 3, 0, 0, 4};

    duplicate(arr, 5);

    return 0;
}