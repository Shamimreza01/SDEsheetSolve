class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maximum=INT_MIN;
        int currSum=0;
        int start=-1,end=-1;
        for(int i=0;i<nums.size();i++){
          if(currSum+nums[i]>nums[i]){
              currSum+=nums[i];
          }else{
              currSum=nums[i];
              start=i;
          }
            if(maximum<currSum){
                maximum=currSum;
                end=i;
            }
        }
        
        for(int i=start;i<=end;i++){
            cout<<nums[i]<<"  ";
        }
        return maximum;
    }
};