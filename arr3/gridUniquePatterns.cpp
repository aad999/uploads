class Solution {
public:
    vector<vector<int>> arr;
    int buildArr(int m, int n, int i, int j){
        if(i == m-1 && j == n-1) return 1;
        if(i > m-1 || j > n-1) return 0;
        if(arr[i][j] != -1) return arr[i][j];
        arr[i][j] = buildArr(m, n, i+1, j) + buildArr(m, n, i, j+1);
        return arr[i][j];
    }
    int uniquePaths(int m, int n) {
        arr.resize(m, vector<int>(n, -1));
        return buildArr(m, n, 0, 0);
    }
};

// <m, n> = <m+1, n> + <m, n+1>

/*

m = 4, n = 7;

    -   -   -   -   -   -   -
>   84  56  35  20  10  4   1
>   28  21  15  10  6   3   1
>   7   6   5   4   3   2   1
>   1   1   1   1   1   1   1

here ans = 84

*/