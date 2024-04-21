// A C++ program to find all symmetric pairs in a given
// array of pairs
#include <bits/stdc++.h>
using namespace std;


void findSymPairs(int arr[][2], int row)
{
	for(int i=0;i<row;i++)
    {
        cout<<"(";
        for(int j=0;j<2;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<")"<<",";
    }
}

// Driver method
int main()
{
	int arr[5][2];
	arr[0][0] = 11;
	arr[0][1] = 20;
	arr[1][0] = 30;
	arr[1][1] = 40;
	arr[2][0] = 5;
	arr[2][1] = 10;
	arr[3][0] = 40;
	arr[3][1] = 30;
	arr[4][0] = 10;
	arr[4][1] = 5;
	cout << "Following pairs have symmetric pairs\n";
	findSymPairs(arr, 5);
}

// This is contributed by Arpit Jain