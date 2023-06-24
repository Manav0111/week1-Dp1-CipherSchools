#include <bits/stdc++.h>

using namespace std;

void sort012(vector<int> &nums)
{
	int p0=0, p1=0, p2=nums.size()-1;
	while(p1<=p2){
		if(nums[p1]==0){
			swap(nums[p0], nums[p1]);
			p0++;
			p1++;
		}
		else if(nums[p1]==1){
			p1++;
		}
		else{
			swap(nums[p1], nums[p2]);
			p2--;
		}
	}
}