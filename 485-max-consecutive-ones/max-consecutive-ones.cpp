class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int cnt =0, maxi = 0;
        for(int i =0;i<n;i++){
            if(nums[i] == 1){
                cnt++;
                if(maxi < cnt){
                    maxi++;
                }
            }
            else if(nums[i] == 0){
                maxi = max(cnt,maxi);
                cnt = 0;
            }
        }
        return maxi;
    }
};