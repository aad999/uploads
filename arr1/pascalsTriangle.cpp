class Solution {
public:
    vector<vector<int>> generate(int m) {
        vector<vector<int>>v(m);
        for(int i = 0; i<m; i++){
            v[i].resize(i+1);
            v[i][0] = v[i][i] = 1;
            for(int j = 1; j<i; j++){
                v[i][j] = v[i-1][j-1] + v[i-1][j];
            }
        }
        return v;
    }
};

/*

         1
        1 1
       1 2 1
     1 3 2 3 1
   1 4 3 2 3 4 1

*/