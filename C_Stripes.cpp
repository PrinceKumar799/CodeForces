#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        vector<vector<char>> mat;
        for (int i = 0; i < 8; i++)
        {
            vector<char> temp;
            for (int j = 0; j < 8; j++)
            {
                char ch;
                cin>>ch;
                temp.push_back(ch);
            }
            mat.push_back(temp);
        }
        int lastRow=-1,lastCol=-1;
        char last='.';
        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                if(mat[i][j]!='.' && lastRow==-1 && lastCol==-1)
                {
                    lastRow= i;
                    lastCol = j;
                    last = mat[i][j];
                    // cout<<last<<endl;
                }
                else if(j == lastCol && mat[i][j]!=last && mat[i][j]!='.')
                {
                    last = mat[i][j];
                    // cout<<last<<endl;
                    // lastCol = -1;
                    lastRow=i;
                }
                else if(i==lastRow && mat[i][j]!=last && mat[i][j]!='.')
                {
                    last = mat[i][j];
                    lastCol = j;
                    // lastRow=-1;
                }
                else if(mat[i][j]==last)
                {
                    lastCol = j;
                    lastRow = i;
                }
            }
        }
        // cout<<lastRow<<" "<<lastCol<<endl;
        cout<<last<<endl;
    }

    return 0;
}
