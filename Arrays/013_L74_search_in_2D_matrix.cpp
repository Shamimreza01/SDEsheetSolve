class Solution {
public:
  bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int m = matrix.size();
    int n = matrix[0].size();
    int left=0,right=m*n-1;
    int mid;
    int row,column;
    while(left<=right){
        mid=(left+right)/2;
        row=mid/n;
        column=mid%n;
        if(matrix[row][column]==target) return true;
        if(matrix[row][column]<target) left=mid+1;
        else right=mid-1;
    }
    return false;
  }
};
