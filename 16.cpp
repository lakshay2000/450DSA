// long long int second[len2];

// { Driver Code Starts
// Initial Template for C

#include <stdio.h>
#include <stdlib.h>

// } Driver Code Ends
// User fun9ction Template for C

long long int merge(int arr[], int s, int e, int mid)
{
    long long int inv = 0;

    long long int len1 = mid - s + 1;
    int len2 = e - mid;

    int first[len1];
    int second[len2];

    // copying values to 2 arrays

    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[s + i];
    }

    for (int i = 0; i < len2; i++)
    {
        second[i] = arr[mid + 1 + i];
    }

    // merge 2 sorted arrays

    int index1 = 0;
    int index2 = 0;

    int k = s;
    while (index1 < len1 && index2 < len2)
    {
        if (first[index1] < second[index2])
        {
            arr[k] = first[index1];
            k = k + 1;
            index1 = index1 + 1;
        }
        else
        {
            arr[k] = second[index2];
            k = k + 1;
            index2 = index2 + 1;
            inv += (mid - index1);
        }
    }

    while (index1 < len1)
    {
        arr[k++] = first[index1++];
    }
    while (index2 < len2)
    {
        arr[k++] = second[index2++];
    }
    return inv;
}

long long int mergeSort(int arr[], int s, int e)
{

    long long int inv = 0;
    if (s < e)
    {

        long long int mid = (s + e) / 2;

        inv += mergeSort(arr, s, mid);

        inv += mergeSort(arr, mid + 1, e);

        inv += merge(arr, s, e, mid);
    }
    return inv;
}

// arr[]: Input Array
// N : Size of the Array arr[]
// Function to count inversions in the array.
long long int inversionCount(long long arr[], long long n)
{
    // Your Code Here
    long long int s = 0;
    long long int e = n - 1;

    long long int ans = mergeSort(arr, s, e);

    return ans;
}

// { Driver Code Starts.

int main()
{

    long long T;
    scanf("%ld", &T);

    while (T--)
    {
        long long N;
        scanf("%ld", &N);

        long long A[N];
        for (long long i = 0; i < N; i++)
        {
            scanf("%ld", &A[i]);
        }

        printf("%ld\n", inversionCount(A, N));
    }

    return 0;
}
// } Driver Code Ends