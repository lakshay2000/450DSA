// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
public:
    int find_median(vector<int> arr)
    {
        // Code here.
        sort(arr.begin(), arr.end());

        int n = arr.size();
        int mid;
        if (n % 2 != 0)
        {
            mid = arr[n / 2];
        }
        else
        {
            mid = (arr[n / 2] + arr[n / 2 - 1]) / 2;
        }
        return mid;
    }
};

// { Driver Code Starts.
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        Solution ob;
        int ans = ob.find_median(v);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends