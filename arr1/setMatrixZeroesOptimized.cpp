class Solution {
public:
 void setZeroes(vector<vector<int>>& a) {





    /*



    firstrow is true if there is a zero element in first row
    firstcol is true if there is a zero element in first column

    check if firstrow and firstcol needs to get zeroed

    then for rest of the matrix, check the rows and columns need to be zeroed
    and store that data in the first row and column

    now zero the rows and columns corresponding to that data

    and finally zero first row and first column as per firstrow and firstcolumn


    */






        int m = a.size();
        int n = a[0].size();
        bool firstRow = false;
        bool firstCol = false;
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
					if(a[i][j] == 0){ 
                    if(i==0) firstRow = true;
                    if(j==0) firstCol = true;
                    a[i][0] = 0;
                    a[0][j] = 0;
                }
            }
        }
        for(int i=1; i<m; i++){
            for(int j=1; j<n; j++){
                if(a[i][0] == 0 || a[0][j] == 0){
                    a[i][j] = 0;
                }
            }
        }
        
        if(firstRow){
            for(int j=0;j<n;j++) a[0][j] = 0;
        }
        
        if(firstCol){
            for(int i=0;i<m;i++) a[i][0] = 0;
        }
    }
};

// constant space complexity