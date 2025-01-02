class Solution
{
public:
    bool isSorted(vector<int> &arr)
    {
        int n = arr.size();
        for (int i = 1; i < n; i++)
        {
            if (arr[i] <= arr[i - 1]) // Allow non-decreasing order
                return false;
        }
        return true;
    }

    int incremovableSubarrayCount(vector<int> &nums)
    {
        int cnt = 0;
        int n = nums.size();

        for (int i = 0; i < n; i++)
        {
            for (int j = i; j < n; j++)
            {
                vector<int> arr = nums;

                // Remove elements from i to j
                arr.erase(arr.begin() + i, arr.begin() + j + 1);

                // Check if remaining array is sorted
                if (isSorted(arr))
                {
                    cnt++;
                }
            }
        }

        return cnt;
    }
};
