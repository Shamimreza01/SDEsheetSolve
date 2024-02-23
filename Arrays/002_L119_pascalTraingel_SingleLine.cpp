 vector<int> getRow(int rowIndex) {
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