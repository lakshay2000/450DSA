// { Driver Code Starts
#include <iostream>
#include <string.h>
using namespace std;

// } Driver Code Ends
/*Complete the function below*/
#include <bits/stdc++.h>
class Solution
{
private:
    bool ispali(int n)
    {
        string s = to_string(n);

        string rev = s;

        reverse(rev.begin(), rev.end());

        return (rev == s);
    }

public:
    int PalinArray(int a[], int n)
    {
        // code here
        for (int i = 0; i < n; i++)
        {
            if (!ispali(a[i]))
            {
                return 0;
            }
        }
        return 1;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        Solution obj;
        cout << obj.PalinArray(a, n) << endl;
    }
} // } Driver Code Ends