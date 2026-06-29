class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        map<int,int> mpp;

        for(int i =0;i<n;i++){
            mpp[nums[i]]++;
        }
        int size = n/2;
        for(auto x: mpp){
            if(x.second > size){
                return x.first;
            }
        }
        return -1;
    }
};