class Solution {
public:
    void rotate(vector<vector<int>>& m) {
        //finding the size of 2D array/matrix
        int n= m.size();
        
        //transposing the matrix
        for(int i=0; i<n; i++)
            for(int j=0;j<i;j++)
                swap(m[i][j],m[j][i]);
        
        //reverse printing 
        for(int i=0; i<n; i++)
            reverse(m[i].begin(),m[i].end());
    }
};