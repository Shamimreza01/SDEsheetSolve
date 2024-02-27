/*//better than bruteforce but still use extra space 
//TC=> O(n), SC=>O(n)
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> box;
        for(auto i:nums){
            box[i]++;
        }
        for(auto ele:box){
            if(ele.second>(nums.size()/2)) return ele.first;
        }
        return -1;
    }
};
*/
//optimize solution with moore's voting algorithm 
//TC=>O(n), SC=>O(1)
class Solution{
    public: 
    int majorityElement(vector<int>& nums) {
       int count=0;
       int currMajor;
       for(int i=0;i<nums.size();i++){
           if(count==0){
               currMajor=nums[i];
               count++;
           }else if(currMajor==nums[i]){
               count++;
           }else{
               count--;
           }
       }
       return currMajor;
    }
};
