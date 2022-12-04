class Solution {
public:
    bool searchArray(vector<int> arr, int target){
        int s = 0, e = arr.size()-1;
        for(int i = 0; i<arr.size(); i++){
            while(s <= e){
                int mid = (s+e)/2;
                if(arr[mid] == target){
                    return true;
                }
                if(arr[mid] > target){
                    e = mid-1;
                }
                if(arr[mid] < target){
                    s = mid+1;
                }   
            }
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for(int i = 0; i<matrix.size(); i++){
            vector<int> space = matrix[i];
            if(target == space.back()){
                return true;
            }
            if(target < space.back()){
                return searchArray(space, target);
            }
        }
        return false;
    }
};