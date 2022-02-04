#include <bits/stdc++.h>
using namespace std;

// Method to find median
double Median(vector<int> &num1, vector<int> &num2)
{
    if (num2.size() > num1.size())
        return Median(num2, num1);

    int n1 = num1.size();
    int n2 = num2.size();

    int low = 0;
    int high = n1;
    while (low <= high)
    {

        int cut1 = (low + high) / 2;
        int cut2 = (n1 + n2 + 1) / 2 - cut1;

        int left1 = cut1 == 0 ? INT_MIN : num1[cut1 - 1];
        int left2 = cut2 == 0 ? INT_MIN : num2[cut2 - 1];

        int right1 = cut1 == n1 ? INT_MAX : num1[cut1];
        int right2 = cut2 == n2 ? INT_MAX : num2[cut2];

        if (left1 <= right2 && left2 <= right1)
        {
            if ((n1 + n2) % 2 == 0)
            {
                return (max(left1, left2) + min(right1, right2)) / 2;
            }
            else
            {
                return (max(left1, left2));
            }
        }
        else if (left1 > right2)
        {
            high = cut1 - 1;
        }
        else
        {
            low = cut1 + 1;
        }
    }
    return 0;
}

// Driver code
int main()
{
    vector<int> arr1 = {-5, 3, 6, 12, 15};
    vector<int> arr2 = {-12, -10, -6, -3, 4, 10};
    cout << "Median of the two arrays are" << endl;
    cout << Median(arr1, arr2);
    return 0;
}
