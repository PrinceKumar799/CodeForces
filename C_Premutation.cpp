#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    int arr[n][n-1];
    int unique=-1,repeating;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-1; j++)
        {
            cin>>arr[i][j];
        }
        
    }
    // for (int i = 0; i < n-1; i++)
    // {
    //     for (int j = 0; j < n-1; j++)
    //     {
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    unique=arr[0][0],repeating=arr[0][0];
    for (int i = 0; i < n; i++)
    {
            if(arr[i][0]!=unique)
            {
                repeating = unique;
                unique = arr[i][0];
                cout<<repeating<<" ";
                for (int j  = 0; j < n-1;j++)
                {
                    cout<<arr[i][j]<<" ";
                }
                cout<<endl;
                break;
            }   
            // else
            //     repeating = arr[i][0];
    }
    // cout<<unique<<" ";
    // for (int i = 0; i < n; i++)
    // {
    //     if(arr[i][0]==repeating)
    //     {
    //         for (int j = 0; j < n-1; j++)
    //         {
    //             cout<<arr[i][j]<<" ";
    //         }
    //         cout<<endl;
    //         return;
    //     }
    // }
    
  //1,2,3,4,0,0 m=99 
}

int main()
{
    int t;cin>>t;
    while (t--)
    {
        solve();
    }
    
}