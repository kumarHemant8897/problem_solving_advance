class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        int sum=0;
        unordered_map<int,int> map;

        for(int i=0;i<n;i++){
           int ans=target-nums[i];

           if(map.find(ans) != map.end()){
            return {map[ans],i};
           }

           map[nums[i]]=i;

        }
        return {};
    }
};
