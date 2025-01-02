class Solution
{
public:
    int minMoves2(vector<int> &arr)
    {

        // make all elements equal to the median

        int n = arr.size();

        sort(arr.begin(), arr.end());

        int med = -1;

        if (n % 2 == 1)
        {

            med = arr[n / 2];
        }

        else
        {
            med = (arr[n / 2] + arr[n / 2 - 1]) / 2;
        }

        int ans = 0;

        for (auto x : arr)
        {

            ans += abs(med - x);
        }

        return ans;
    }
};