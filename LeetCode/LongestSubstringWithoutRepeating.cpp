class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if (s.length()==0){
            return 0;
        }
        int max=1;
        int n=s.length();
        int dp[n];
        dp[0]=1;
        int start=0;
        for (int i=1;i<n;i++){
            bool flag=true;
            for (int j=start;j<i;j++){
                if (s[j]==s[i]){
                    dp[i]=i-j;
                    start=j+1;
                    flag=false;
                }
            }
            if (flag){
                dp[i]=dp[i-1]+1;
                if (max<dp[i]){
                    max=dp[i];
                }
            }
        }
        return max;
    }
};