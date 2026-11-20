class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int> ans;

        unordered_map<int,int> map;

        for(int i=0;i<n;i++){
            map[nums[i]]++;
        }

        priority_queue<pair<int,int>> pq;

        for(auto it: map){
            pq.push({it.second,it.first});
        }

        while(k--){
            ans.push_back(pq.top().second);
            pq.pop();
        }

        return ans;

       

    }
};
