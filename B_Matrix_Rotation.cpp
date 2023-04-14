#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int arr[2][2];
        cin>>arr[0][0];
        int first = arr[0][0];
        cin>>arr[0][1];
        int second = arr[0][1];
        cin>>arr[1][0];
        int third = arr[1][0];
        cin>>arr[1][1];
        int fourth = arr[1][1];
        bool flag = false;
        while (arr[0][0]>arr[0][1] || arr[0][0]>arr[1][0] || arr[0][1]>arr[1][1] || arr[1][0]>arr[1][1])
        {
            int temp1 = arr[0][1];
            arr[0][1] = arr[0][0];
            int temp2 = arr[1][1];
            arr[1][1] = temp1;
            int temp3 = arr[1][0];
            arr[1][0] = temp2;
            arr[0][0] = temp3;
            if(first == arr[0][0] && second == arr[0][1] && third == arr[1][0] && fourth == arr[1][1])
            {
                flag = true;
                break;
            }
        }
        if(flag)
        {
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
        
    
}