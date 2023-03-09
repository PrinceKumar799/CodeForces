#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n,x=0;
    cin>>n;
    while(n--)
    {
        string in;
        cin>>in;
        if(in=="++X" ||in=="X++")
        {
            x=x+1;
        }
        else
        {
            x=x-1;
        }
    }
    cout<<x<<endl;
    return 0;
}