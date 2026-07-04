class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> arr;
        for (int i=1;i<=numRows;i++) {
            for (int j=1;j<=numRows;j++) {
                if (j==1||j==numRows) arr[i][j]=1;
                else {
                    if (i<numRows) {
                        arr[i+1][j]=arr[i][j-1]+arr[i][j];
                    }
                    else break;
                }
            }
        }
        return arr;
    }
};