// task №35. 

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l = 0;
        int r = nums.size();
        int mid = 0;
        if(target>nums[r-1]){
            return {r};
        }

        while (l <= r) {
            mid = (r + l) / 2;
            int guess = nums[mid];

            if (guess == target) {
                return mid;
            } else if (guess > target) {
                r = mid - 1;
            } else if (guess < target) {
                l = mid + 1;
            } 
        }
        return l;
    }
};
