// task №27 

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k = nums.size();

        int perezapis = 0;
        for(int i = 0; i < k; i++) 
        {
            bool isValue = false;
            for (int j = 0; j < perezapis; j++)
            {
                if (nums[i] == nums[j])
                {
                    isValue = true;
                    break;
                }
            }
            if (!isValue)
            {
                nums[perezapis] = nums[i];
                perezapis++;
            }
        }
        nums.resize(perezapis);
        k = perezapis;
        
        return perezapis;
    }
};
