#include <bits/stdc++.h>

using namespace std;

void rotateMatrix(int mat[3][3])
{
    // Transpose of a matrix
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            swap(mat[i][j], mat[j][i]);

    // Reverse columns
    for (int i = 0; i < 3; i++)
        for (int j = 0, k = 3 - 1; j < k; j++, k--)
            swap(mat[j][i], mat[k][i]);
}

int main(){
	    int mat[3][3] = { {1, 2, 3},
		      {4, 5, 6},
		      {7, 8, 9} };
	rotateMatrix(mat);

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout<<mat[i][j]<<" ";
        }
    }

}