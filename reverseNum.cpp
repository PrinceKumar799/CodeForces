#include<bits/stdc++.h>
using namespace std;
int reverse(int x){
    int temp = x;
    int sum = 0;
    int count = 0;
    int original = x;
   
    while(temp!=0)
    {
        count++;
        temp = temp/10;
    }
    temp = x;
    while(original!=0)
    {
        temp = original%10;//temp = -1
        count--;//0
        sum += temp*pow(10,count);//-300+-20 = -320 - 1 = -321
        original = original/10;//0
    }
   
    if(x<=INT_MIN||x>=INT_MAX)
    {
        return 0;
    }
    return sum;
}

int main()
{
    cout<<reverse(123456789);
}