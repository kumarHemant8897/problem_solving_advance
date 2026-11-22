
class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
        int rh = 0;
        int lh = n - 1;
        int maxarea = 0;

        while (rh < lh) {
            int wid = lh - rh;
            int height = min(heights[rh], heights[lh]);

            int area = wid * height;
            maxarea = max(maxarea, area);

            if (heights[rh] < heights[lh]) {
                rh++;
            }
            else {
                lh--;
            }
        }

        return maxarea;
    }
};
