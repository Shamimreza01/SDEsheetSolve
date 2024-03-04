//bruteforce 311 testcase pass TC=> O(n^3)
/*
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> result;
        for(int i=0;i<nums.size();i++){
            set<int> hashMap;
            for(int j=i+1;j<nums.size();j++){
                int third=-(nums[i]+nums[j]);

                if(hashMap.find(third)!=hashMap.end()){
                vector<int> temp={nums[i],nums[j],third};
                sort(temp.begin(),temp.end());
                result.insert(temp);
                }
                hashMap.insert(nums[j]);
            }
        }
        vector<vector<int>> finalResult(result.begin(),result.end());
        return finalResult;
    }
};*/ 

//optimal TC=> O(n^2)

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
       vector<vector<int>> result;
       sort(nums.begin(),nums.end());
       
       for(int i=0;i<nums.size();i++){
           if(i>0 && nums[i]==nums[i-1]) continue;
           int j=i+1;
           int k=nums.size()-1;
           while(j<k){
               if(nums[i]+nums[j]+nums[k]>0) k--;
               else if(nums[i]+nums[j]+nums[k]<0) j++;
               else{
                   vector<int> temp={nums[i],nums[j],nums[k]};
                   result.push_back(temp);
                   j++,k--;
                   while(j<k && nums[j]==nums[j-1]) j++;
                   while(j<k && nums[k]==nums[k+1]) k--;
               }
           }
       }
        return result;
    }
};