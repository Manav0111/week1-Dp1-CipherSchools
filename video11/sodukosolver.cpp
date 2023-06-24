#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
        bool issafe(int val,vector<vector<char>>& board,int row,int col){
            //row
            int n=board.size();
            for(int i=0;i<n;i++)
                if((board[row][i]==val)||(board[i][col]==val)||(board[3*(row/3)+(i/3)][3*(col/3)+(i%3)])==val)
                return false;

            return true;
        }
     
        bool solve(vector<vector<char>>& board){
            int n=board.size();
               for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                   
                    if(board[i][j]=='.')
                    {
                        for(char val='1';val<='9';val++){
                         
                            if(issafe(val,board,i,j)){
                            
                                board[i][j]=val;
                            
                                bool aage=solve(board);
                                if(aage==true)
                                return true;
                                else
                                board[i][j]='.';
                            }
                        }
                    return false;
                    }  
                }
            }
            return true;
        }
    void solveSudoku(vector<vector<char>>& board) {
        solve(board);
    }
};