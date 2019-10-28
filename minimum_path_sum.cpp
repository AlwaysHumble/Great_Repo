/* THis question deals with a m*n matrix having some values. We start from top left and go to bottom down by moving only right and bottom directions.
We have to find the minimum sum taken by the paths that can be taken.*/


#include<bits/stdc++.h>
using namespace std;

int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(i==0 && j==0) grid[i][j] = grid[i][j];
                else if(i==0 && j>0) grid[i][j] = grid[i][j] + grid[i][j-1];
                else if(j==0 && i>0) grid[i][j] = grid[i][j] + grid[i-1][j];
                else grid[i][j] = grid[i][j] + min(grid[i-1][j],grid[i][j-1]);
            }
        }
        return grid[m-1][n-1];
}
int main(){
    int m,n;
    cout<<"Enter the dimensions of the matrix"<<endl;
    cin>>m>>n;
    vector<vector<int>> matrix(m,vector<int>(n,0));
    cout<<"Enter the elements of matrix"<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>matrix[i][j];
        }
    }
    cout<<"The minimum path sum is  "<<minPathSum(matrix)<<endl;

    return 0;
}