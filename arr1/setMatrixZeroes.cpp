class Solution {
public:
    void setZeroes(vector<vector<int>>& arr) {
        int m = arr.size();
        int n = arr[0].size();
        vector<bool> rows;
        rows.resize(m, false);
        vector<bool> cols;
        cols.resize(n, false);
        for(int row = 0; row<m; row++){
            for(int col = 0; col<n; col++){
                if(arr[row][col] == 0){
                    rows[row] = true;
                    cols[col] = true;
                }
            }
        }
        for(int i = 0; i<m; i++){
            for(int j = 0; j<n; j++){
                if(rows[i] || cols[j]){
                    arr[i][j] = 0;
                }
            }
        }
        return;
    }
};


// linear space complexity O(m+n)