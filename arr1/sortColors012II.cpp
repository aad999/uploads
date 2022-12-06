class Solution {
public:
    void sortColors(vector<int>& arr) {
        int n = arr.size();
        if(n == 0 || n == 1) return;
        if(n == 2){
            if(arr[0] > arr[1]){
                swap(arr[0], arr[1]);
            }
            return;
        }
        int l = 0, m = 0, h = 0;
        while(h < n){
            // sort3(arr[l], arr[m], arr[h]);
            if(arr[l] > arr[m]) swap(arr[l], arr[m]);
            if(arr[l] > arr[h]) swap(arr[l], arr[h]);
            if(arr[m] > arr[h]) swap(arr[m], arr[h]);
            if(arr[l] == 0){
                if(h == l) h++;
                if(m == l) m++;
                l++; 
            }
            if(arr[m] == 1){
                if(h == m) h++;
                m++; 
            }
            if(arr[h] == 2){
                h++;
            }
        }
        return;
    }
};