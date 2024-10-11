// task №1431

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> result;
        int maxV = candies[0];
        int n = candies.size();

        for (int i = 1; i < n; i++) {
           if (candies[i] > maxV) {
                maxV = candies[i];
           }    
        }
        
        bool nigga = false;
        for (int i = 0; i < candies.size(); i++) {
            if (candies[i] + extraCandies >= maxV) {
                nigga = true;
                result.push_back(nigga);
            } else {
                nigga = false;
                result.push_back(nigga);
            }
        }
        return result;
    }
};
