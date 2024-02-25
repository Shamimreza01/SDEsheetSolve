class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int> tester;
        int result;
      for(int i=0;i<nums.size();i++){
         tester[nums[i]]++;
         if(tester[nums[i]]>1){
            result=nums[i]; 
            break;
         }
      }
      return result;  
    }
};