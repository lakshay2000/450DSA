// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// Function to return minimum number of jumps to end of array

class Solution
{
public:
    int minJumps(int a[], int n)
    {
        // Your code here

        int jumps = 0;
        bool visit = false;

        for (int i = 0; i < n;)
        {
            cout << "I" << i << endl;
            if (a[i] == 0)
            {
                return -1;
            }
            else if (i >= n - 1)
            {
                return jumps;
            }
            else
            {
                i = i + a[i];
                jumps++;
            }
            cout << "jumps" << jumps << endl;
        }
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, i, j;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        Solution obj;
        cout << obj.minJumps(arr, n) << endl;
    }
    return 0;
}
// } Driver Code Ends