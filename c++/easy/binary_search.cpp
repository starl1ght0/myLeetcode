// task №704

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;
        while (left <= right) {
            int mid = (left + right) / 2;
            int guess = nums[mid];

            if (guess == target) {
                return mid;
            } else if (guess < target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
    return -1;
    }
};
