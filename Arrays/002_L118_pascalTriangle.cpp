class Solution {
public:
     vector<int> generateRow(int rowIndex) {
        vector<int> ansRow;
        ansRow.push_back(1);
        long long ans=1;
        for(int i=1;i<=rowIndex;i++){
           ans*=(rowIndex + 1 - i);
           ans=ans/i;
            ansRow.push_back(ans);
        }
        return ansRow;
    }


    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> pascalTriangle;

        for(int i=0;i<numRows;i++){
            
            pascalTriangle.push_back(generateRow(i));
        }
        return pascalTriangle;
    }
};