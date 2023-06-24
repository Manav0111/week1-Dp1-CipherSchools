#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    void helper(vector<int>& nums,int indx, vector<vector<int>> &ans,vector<int> &temp, int n)
    {
        if(indx==n)
        {
            ans.push_back(temp);
            return;
        }


        //not include
        helper(nums,indx+1,ans,temp,n);

        //include
        temp.push_back(nums[indx]);
        helper(nums,indx+1,ans,temp,n);
        temp.pop_back();

    }

    vector<vector<int>> powerset(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;
        int n=nums.size();
        helper( nums,0,ans,temp,n);


        return ans;
    }
};