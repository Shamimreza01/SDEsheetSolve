// optimize but it use eXtra space. TC=> O(n) SC=>O(n)
/*
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
*/ 
// but we also optimized it using cycle in linked list or floyed algorithm 
// TC=> O(n)  SC=>O(1)
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
      int slow=0,fast=0;
      while(true){
          slow=nums[slow];
          fast=nums[nums[fast]];
          if(slow==fast) break;
      }
      int slow2=0;
      while(slow!=slow2){
          slow=nums[slow];
          slow2=nums[slow2];
      }
      return slow;
    }
};