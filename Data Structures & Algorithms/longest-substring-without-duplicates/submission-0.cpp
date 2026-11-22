class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        int st=-1;
        int maxlen=0;

        vector<int> dict(256,-1);
        for(int i=0;i<n;i++){
            if(dict[s[i]] > st){
                st=dict[s[i]];
            }

            dict[s[i]]=i;

            maxlen=max(maxlen, i-st);
        }

        return maxlen;
    }
};
