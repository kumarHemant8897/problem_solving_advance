class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n=numbers.size();
        int ans=0;
        
        unordered_map<int,int> map;
        
        for(int i=0;i<n;i++){
            int ans=target-numbers[i];

            if(map.find(ans) != map.end()){
                return {map[ans]+1,i+1};
            }

            map[numbers[i]]=i;
        }
        return {};

        
    }
};
