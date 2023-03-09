#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    long long n,output=0;
    cin>>n;
    for (int i=0;n>0;i++)
    {
        int digit = n%10;

        if(digit<=4 || (n/10==0 &&n==9))
        {
            output = output+ pow(10,i)*digit;
        }
        else
            output = output + pow(10,i)*(9-digit);
        
        n = n/10;
    }
    cout<<output<<endl;
    return 0;
}