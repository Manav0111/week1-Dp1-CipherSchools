#include <bits/stdc++.h>

using namespace std;

int rainWaterTrapped(vector<int> &heights)
{
	int n = heights.size();
	vector<int> lMax(n), rMax(n);
	// Calculate lMax and rMax
	lMax[0] = heights[0];
	for (int i = 1; i < n; i++)
	{
		lMax[i] = max(lMax[i - 1], heights[i]);
	}
	rMax[n - 1] = heights[n - 1];
	for (int i = n - 2; i >= 0; i--)
	{
		rMax[i] = max(rMax[i + 1], heights[i]);
	}
	// Calculate water trapped
	int water = 0;
	for (int i = 0; i < n; i++)
	{
		water += min(lMax[i], rMax[i]) - heights[i];
	}
	return water;
}