
// 1st approach - hash set - naive

class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        set<int> st;
        int i = 0;
        for (auto num : nums)
        {
            st.insert(num);
        }
        for (auto ele : st)
        {
            nums[i++] = ele;
        }
        return st.size();
    }
};

// 2nd approach - two pointers - optimal

class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        int i = 0;
        int j = 1;
        while (j < nums.size())
        {
            if (nums[i] == nums[j])
            {
                ++j;
            }
            else
            {
                ++i;
                nums[i] = nums[j];
                j++;
            }
        }
        return i + 1;
    }
};