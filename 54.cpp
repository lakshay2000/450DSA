class Solution
{
public:
    int search(vector<int> &arr, int target)
    {
        int s = 0;
        int e = arr.size() - 1;

        while (s <= e)
        {
            int mid = (s + e) / 2;

            if (arr[mid] == target)
            {
                return mid;
            }
            if (arr[s] < arr[mid])
            {
                // left part sorted
                if (arr[s] <= target && arr[mid] > target)
                {
                    e = mid - 1;
                }
                else
                {
                    s = mid + 1;
                }
            }
            else
            {
                // right part sorted

                if (arr[mid] < target && arr[e] >= target)
                {
                    s = mid + 1;
                }
                else
                {
                    e = mid - 1;
                }
            }
        }
        return -1;
    }
};