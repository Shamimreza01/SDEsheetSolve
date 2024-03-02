class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> box;
        for(int i=0;i<nums.size();i++){
            box.insert(nums[i]);
        }
        int count=0;
        int longest=0;
        for(auto num:box){
            if(box.find(num-1)==box.end()){
                count=1;
                while(box.find(num+1)!=box.end()){
                    count++;
                    num=num+1;
                }
            }
            longest=max(longest,count);
        }
        return longest;
    }
};