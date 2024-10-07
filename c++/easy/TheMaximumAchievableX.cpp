// task №2769

class Solution {
public:
    int theMaximumAchievableX(int num, int t) {
        int counter = 0;
        int it = 0;
        
        for (int i = 0; i < t; i++) {
            num++;
            counter--;
        }

        while (counter < num) {
            counter++;
            it++;
        }

        return it;
    }
};
