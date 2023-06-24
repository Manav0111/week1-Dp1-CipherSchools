#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:

    bool isSafe(int m, int n, int i, int j,vector<vector<int>>& grid)
    {
        return (i>=0 && i<=m && j >=0 && j<=n && grid[i][j]!=-1);
    }

    int helper(int i,int j,int count, int m,int n,vector<vector<int>>& grid)
    {
        if(!isSafe(m,n,i,j,grid))
        {
            return 0;
        }

        if(grid[i][j]==2)
        {

        return count==0;
    
        }


        grid[i][j]=-1;
        int result=helper(i-1,j,count-1,m,n,grid)+
                    helper(i+1,j,count-1,m,n,grid)+
                    helper(i,j-1,count-1,m,n,grid)+
                    helper(i,j+1,count-1,m,n,grid);

        grid[i][j]=0;

        return result;


    }

    int uniquePathsIII(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();

        int count=1;
        int startrow=0;
        int startcol=0;

        for(int i=0; i<m; i++)
        {

            for(int j=0; j<n; j++)
            {
                if(grid[i][j]==0)
                {
                    count++;
                }

                if(grid[i][j]==1)
                {
                    startrow=i;
                    startcol=j;
                }
            }

        }



        return helper(startrow,startcol,count,m-1,n-1,grid);

    }
};