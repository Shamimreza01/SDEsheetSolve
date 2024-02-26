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