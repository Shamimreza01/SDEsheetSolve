class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> result;
        int count1=0,count2=0;
        int ele1,ele2;
        for(int i=0;i<nums.size();i++){
            if(count1==0 && ele2!=nums[i]){
                ele1=nums[i];
                count1++;
            }else if(count2==0 && ele1!=nums[i]){
                ele2=nums[i];
                count2++;
            }else if(ele1==nums[i]) count1++;
            else if(ele2==nums[i]) count2++;
            else count1--,count2--;
        }
        count1=0,count2=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==ele1) count1++;
            else if(nums[i]==ele2) count2++;
        }
        int mini = int(nums.size() / 3);
        if (count1> mini) result.push_back(ele1);
        if (count2> mini) result.push_back(ele2);
        return result;
    }
};