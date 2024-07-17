class Solution
{
public:
    void sortColors(vector<int> &nums)
    {
        int l = 0;
        int r = nums.size() - 1;

        int i = 0;
        while (i <= r)
        {
            if (nums[i] == 0)
            {
                swap(nums[i], nums[l++]);
                ++i;
            }
            else if (nums[i] == 2)
            {
                swap(nums[i], nums[r--]);
            }
            else
            {
                ++i;
            }
        }
    }
};

// When the current element is 2, and you swap it with the element at the r pointer, you should not increment i immediately. This is because the element that gets swapped into the current position (i.e., nums[i]) has not been processed yet. It could be a 0, 1, or another 2, and you need to check and handle it accordingly.