// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    long long findMinDiff(vector<long long> arr, long long n, long long m)
    {
        // code

        // int minw=INT_MAX;
        // int maxw=INT_MIN;
        int res = INT_MAX;

        sort(arr.begin(), arr.end());

        for (int i = 0; i <= n - m; i++)
        {
            int minw = arr[i];
            int maxw = arr[m + i - 1];

            int dff = maxw - minw;
            if (dff < res)
            {
                res = dff;
            }
        }
        return res;
    }
};

// { Driver Code Starts.
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        vector<long long> a;
        long long x;
        for (long long i = 0; i < n; i++)
        {
            cin >> x;
            a.push_back(x);
        }

        long long m;
        cin >> m;
        Solution ob;
        cout << ob.findMinDiff(a, n, m) << endl;
    }
    return 0;
} // } Driver Code Ends