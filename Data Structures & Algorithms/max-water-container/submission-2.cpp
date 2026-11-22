class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n=heights.size();
        int rh=n-1;
        int lh=0;
        int maxi=INT_MIN;

        while(lh < rh){
            int wid=rh - lh;
            int ht=min(heights[rh],heights[lh]);
            int area=wid*ht;

            maxi=max(maxi,area);


            if(heights[lh] < heights[rh]){
                lh++;
            }
            else{
                rh--;
            }
        }

        return maxi;
    }
};
