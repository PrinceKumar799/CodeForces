#include <bits/stdc++.h>

using namespace std;
int factorial(int n)
{
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}
int combination(int a,int b)
{
    return factorial(a) / (factorial(a-b)*factorial(b));
}

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,m;
        cin>>n>>m;
        vector<bool> rows(n,false);
        vector<bool> columns(n,false);
        bool board[n+1][n+1];
        memset(board,false,sizeof board);
        bool flag = false;
        for(int i=0;i<m;i++)
        {
            int row,col;
            cin>>row>>col;
            board[row][col] = true;
            rows[row] = true;
            columns[col] = true;
        }
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if(board[i][j]==false && (!rows[i]) && (!columns[j]))
                {
                        flag = true;
                        break;
                }
            }
            
        }
        
        if(!flag)
        {
            cout<<"NO"<<endl;
        }
        else
        cout<<"YES"<<endl;
    }
    
    return 0;
}
