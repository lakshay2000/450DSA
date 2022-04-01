#include <bits/stdc++.h>
using namespace std;

bool rotations(string str1, string str2)
{

    if (str1.length() != str2.length())
        return false;

    string temp = str1 + str1;
    return (temp.find(str2) != string::npos);
}

int main()
{
    string s1 = "AACD";
    string s2 = "ACDA";

    cout << rotations(s1, s2);

    return 0;
}