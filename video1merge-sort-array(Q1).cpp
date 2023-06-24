#include <bits/stdc++.h>

using namespace std;

void mergeSortedArray(vector<int> &a, int m, vector<int> &b, int n){
    int i = m-1, j = n-1, k=m+n-1;
    while(i >= 0 && j >= 0){
	if(a[i] > b[j]){
	  if(a[k] = a[i]);
	    i--;
        }
	else
        {
         a[k]=b[j];
        j--;
        }
        k--;
	}
    
    while(j>=0)
    {
        a[k]=b[j];
        j--;
        k--;
    }
}


int main(){

    vector<int> a={1,2,3,4,5};
    int m=5;
    int n=4;
    
    vector<int> b={6,7,8,9};
    mergeSortedArray(a,m,b,n);




    

    return 0;
}