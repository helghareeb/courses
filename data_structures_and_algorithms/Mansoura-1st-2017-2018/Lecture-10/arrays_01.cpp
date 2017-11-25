// بسم الله الرحمن الرحيم

// source: https://raw.githubusercontent.com/mostafa-saad/ArabicCompetitiveProgramming/master/15%20C%2B%2B%20Programming%204%20Competitions/42%20C%2B%2B%20Programming%204%20Competitions%20-%20Recursion.cpp

#include <iostream>
using namespace std;

// Competitive programming hint
#define MAX 20
int n=0;
int grid[MAX][MAX];

bool valid(int,int);

// Think in function F(i, j) that find solution from (i, j) to (n, n)

int maxPathSum(int r, int c)
{
	if( !valid(r, c))
		return 0;

	if (r == n-1 && c == n-1)
		return grid[r][c];	// base

	int path1 = maxPathSum(r, c+1);	// right
	int path2 = maxPathSum(r+1, c);	// down

	return grid[r][c] + max(path1, path2);
}

int main(void){
    // Write code to take input
    cout << "Number of Rows and Columns is: ";
    cin >> n;
    for(int i=0; i < n; i++){
        for(int j=0; j<n; j++){
            cin >> grid[i][j];
        }
    }
    cout << "MAX Path Sum: " << maxPathSum(0,0);
}

bool valid(int r,int c){
    if (r >= n || c >= n){
        return false;
    }
    else return true;
}