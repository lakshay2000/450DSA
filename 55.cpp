// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// Function to find square root
// x: element to find square root
class Solution
{
private:
    long long int binarysearch(long long int n)
    {
        int s = 0;
        int e = n;
        long long int mid = (s + e) / 2;
        long long int ans = -1;

        while (s <= e)
        {
            long long int square = mid * mid;

            if (square == n)
            {
                return mid;
            }
            else if (square < n)
            {
                ans = mid;
                s = mid + 1;
            }
            else
            {
                e = mid - 1;
            }
            mid = (s + e) / 2;
        }
        return ans;
    }

public:
    long long int floorSqrt(long long int x)
    {
        // Your code goes here
        return binarysearch(x);
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        Solution obj;
        cout << obj.floorSqrt(n) << endl;
    }
    return 0;
}
// } Driver Code Ends