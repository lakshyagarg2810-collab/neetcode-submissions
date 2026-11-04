class Solution {
public:
    void transpose(vector<vector<int>>&matrix){
        for(int i = 0;i<matrix.size();i++)
            for(int j = 0;j<matrix[0].size();j++)
                if(i<j)
                    swap(matrix[i][j],matrix[j][i]);
    }
    void reverse(vector<int>&a){
        int i = 0,j = a.size()-1;
        while(i<j){
            swap(a[i],a[j]);
            i++;
            j--;
        }
    }
    void rotate(vector<vector<int>>& matrix) {
        transpose(matrix);
        for(int i = 0;i<matrix.size();i++){
            reverse(matrix[i]);
        }
    }
};
