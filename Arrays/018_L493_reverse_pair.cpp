/* using extra space ,using mergesort concept*/
class Solution {
public:
void merge(vector<int> &arr,int low, int mid,int high,int &count){
    int i=low,j=mid+1;
    vector<int> temp;
    while(i<=mid && j<=high){
        
        if(arr[i]<=arr[j]){
           temp.push_back(arr[i]);
            i++;
        }else{
            temp.push_back(arr[j]);
            j++;
        }
    }
    while(i<=mid){
        temp.push_back(arr[i]);
        i++;
    }
    while(j<=high){
       temp.push_back(arr[j]);
        j++;
    }
    for(int i=low;i<=high;i++){
        arr[i]=temp[i-low];
    }
}

void inversePair(vector<int> &arr,int low,int mid,int high,int &count){
    int j=mid+1;
    for(int i=low;i<=mid;i++){
        while(j<=high && arr[i]>2*(long long)arr[j]) j++;
        count+=(j-(mid+1));
    }
}
void mergeSort(vector<int> &arr,int low,int high,int &count){
    int mid;
    if(low<high){
        mid=(low+high)/2;
        mergeSort(arr,low,mid,count);
        mergeSort(arr,mid+1,high,count);
        inversePair(arr,low,mid,high,count);
        merge(arr,low,mid,high,count);
    }
}

    int reversePairs(vector<int>& nums) {
        int count=0;
        mergeSort(nums,0,nums.size()-1,count);
        return count;
    }
};

/* without using extra space, using mergesort concept*/
class Solution {
public:
    void merge(vector<int> &nums,int start,int mid,int end,int &res){
        int l=start,r=mid+1;
        while(l<=mid && r<=end){
            long long p=nums[l];
            long long q=(long long) 2*nums[r];
            if(p>q){
                res+=mid-l+1;
                r++;
            }
            else{
                l++;
            }
        }
        sort(nums.begin()+start,nums.begin()+end+1);
    }
    void mergeSort(vector<int> &nums,int start,int end,int &res){
        if(start==end){
            return ;
        }
        int mid=start+(end-start)/2;
        mergeSort(nums,start,mid,res);
        mergeSort(nums,mid+1,end,res);
        merge(nums,start,mid,end,res);
    }
    int reversePairs(vector<int>& nums) {
        int res=0;
        mergeSort(nums,0,nums.size()-1,res);
        for(auto n:nums){
            cout<<n<<" ";
        }
        return res;
    }
};