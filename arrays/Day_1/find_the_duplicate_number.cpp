#include<iostream>
#include<vector>
#include<set>
// 1st method - set approch
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_set<int> st;
        for(int i=0; i<nums.size(); i++){
            if(st.find(nums[i]) == st.end()){
                st.insert(nums[i]);
            }else{
                return nums[i];
            }
        }
        return -1;
    }

};

//2nd method - tortoise and hare method / fast and slow pointers

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int fast = nums[0];
        int slow = nums[0];

        fast = nums[nums[fast]];
        slow = nums[slow];

        while(fast != slow){
            fast = nums[nums[fast]];
            slow = nums[slow];

        }

        fast = nums[0];
        while(fast != slow){
            fast = nums[fast];
            slow = nums[slow];
        }
        return fast;
    }
};

/*Initial Move: Before entering the while loop, we move fast and slow pointers one step and two steps respectively to ensure they don't start at the same position, thus allowing the loop to run and detect the cycle.

Phase 1: This phase continues moving fast by two steps and slow by one step until they meet inside the cycle.

Phase 2: Once they meet, fast is reset to the start of the array, and both fast and slow move one step at a time until they meet at the entrance of the cycle, which is the duplicate number.*/