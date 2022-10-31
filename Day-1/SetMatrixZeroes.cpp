#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        
        int m = matrix.size();
        int n = matrix[0].size();
        vector<int> row;
        vector<int> col;
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==0){
                    row.push_back(i);
                    col.push_back(j);
                }
            }
        }
        
        for(int i=0;i<row.size();i++){
            for(int k=0;k<n;k++){
                matrix[row[i]][k]=0;
            }            
        }
        
        for(int i=0;i<col.size();i++){
            for(int k=0;k<m;k++){
                matrix[k][col[i]]=0;
            }
        }        
    }
};