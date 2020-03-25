#include<bits/stdc++.h>
using namespace std;

int hourglassSum(vector<vector<int>> arr) {
    int row,col,maxValue=-1000,sum;
    for(row=0;row<4;row++)
    {
        for(col=0;col<4;col++)
        {
            sum=arr[row][col]+arr[row][col+1]+arr[row][col+2]
            +arr[row+1][col+1]
            +arr[row+2][col]+arr[row+2][col+1]+arr[row+2][col+2];
            if(sum>maxValue)
                maxValue=sum;
        }
    }
        return maxValue;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    vector<vector<int>> arr(6);
    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);

        for (int j = 0; j < 6; j++) {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int result = hourglassSum(arr);

    fout << result << "\n";

    fout.close();

    return 0;
}

