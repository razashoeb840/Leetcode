class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        int step = 0;
        int c = capacity;

        for(int i = 0; i < plants.size(); i++) {

            if(c < plants[i]) {
                step += 2 * i;
                c = capacity;
            }

            step++;
            c -= plants[i];
        }

        return step;
    }
};