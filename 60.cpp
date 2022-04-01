#include <bits/stdc++.h>
using namespace std;

void printduplicates(string s)
{
    unordered_map<char, int> map;

    for (int i = 0; i < s.size(); i++)
    {
        map[s[i]]++;
    }

    for (auto x : map)
    {
        if (x.second > 1)
        {
            cout << x.first << " " << x.second << endl;
        }
    }
}

int main()
{
    string s = "test string";

    printduplicates(s);

    return 0;
}