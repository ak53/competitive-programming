class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        if(nums.size() == 1) return nums[0];    
        int n = nums.size();
        int dp[n];
        int maxi=nums[0];
        dp[0]=nums[0];
        for (int i=1;i<nums.size();i++){
            dp[i]=0;
            if (dp[i-1]+nums[i]>0 && dp[i-1]>0){
                dp[i]+=dp[i-1]+nums[i];
            }else{
                dp[i]=nums[i];
            }
            if (maxi<dp[i]){
                maxi=dp[i];
            }

        }
        return maxi;   
        
    }
};