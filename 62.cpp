#include <bits/stdc++.h>
using namespace std;
bool shuffledsubstr(string s1, string s2, string res)
{
    if (s1.length() + s2.length() != res.length())
    {
        return false;
    }
    else
    {
        int i = 0;
        int j = 0;
        int k = 0;
        int f = 0;

        while (k < res.length())
        {
            if (i < s1.length() && s1[i] == res[k])
            {
                i++;
                k++;
            }
            else if (j < s2.length() && s2[j] == res[k])
            {
                j++;
                k++;
            }
            else
            {
                f = 1;
                break;
            }
        }
        if (i < s1.length() || j < s2.length())
        {
            return false;
        }
        return true;
    }
}

int main()
{
    string str1 = "XY";
    string str2 = "12";
    string res = "X1Y3";

    cout << shuffledsubstr(str1, str2, res);

    return 0;
}