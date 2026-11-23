class Solution {
public:
    int characterReplacement(string s, int k) {
        int n=s.size();
        int r=0;
        int l=0;
        int maxf=0;
        int maxlen=INT_MIN;
        vector<int> map(26,0);

        while(r < n ){
            map[s[r]-'A']++;
            maxf=max(maxf,map[s[r]-'A']);

           while((r-l+1) > maxf + k){
            map[s[l]-'A']--;
            l++;

           }

           maxlen=max(maxlen,r-l+1);
           r++;
        }

        return maxlen;
    }
};
