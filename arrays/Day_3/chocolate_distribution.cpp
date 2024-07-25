

// } Driver Code Ends
class Solution
{
public:
    long long findMinDiff(vector<long long> a, long long n, long long m)
    {
        if (n == 0 || m == 0)
            return 0;

        sort(a.begin(), a.end());

        if (n < m)
            return -1;

        long long min_diff = LLONG_MAX;

        for (int i = 0; i < n; i++)
        {
            long long diff = a[i + m - 1] - a[i];
            min_diff = min(min_diff, diff);
        }
        return min_diff;
    }
};
