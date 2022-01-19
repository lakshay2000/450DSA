// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
// User function template for C++
class Solution
{
public:
    // Function to find maximum product subarray
    long long maxProduct(vector<int> arr, int n)
    {
        // code here
        long long maxp = arr[0];
        long long minp = arr[0];
        long long product = arr[0];
        for (int i = 1; i < n; i++)
        {
            if (arr[i] == 0)
            {
                maxp = 1;
                minp = 1;
                continue;
            }
            if (arr[i] < 0)
            {
                std::swap(maxp, minp);
            }
            long long currentelement = (long long)arr[i];
            maxp = max(currentelement, (maxp * currentelement));
            minp = min(currentelement, (minp * currentelement));

            if (product < maxp)
            {
                product = maxp;
            }
        }
        return product;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, i;
        cin >> n;
        vector<int> arr(n);
        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.maxProduct(arr, n);
        cout << ans << "\n";
    }
    return 0;
} // } Driver Code Ends