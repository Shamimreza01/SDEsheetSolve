class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maximum=nums[0];
        int currSum=nums[0];
        for(int i=1;i<nums.size();i++){
            currSum=max(currSum+nums[i],nums[i]);
            maximum=max(maximum,currSum);
        }
        return maximum;
    }
};