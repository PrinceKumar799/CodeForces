#include<bits/stdc++.h>
using namespace std;
#define ll  long long
#define vi vector<int>
#define rep(i,s,n) for(int i=s;i<n;i++)
const int M=1e9+7;
ll gcd(ll divisor,ll divident){
    if(divisor==0)
        return divident;
    return gcd(divident%divisor,divisor);
}

ll lcm(ll a, ll b){
    return a*b/gcd(a,b);
}

ll max(ll a, ll b){
    if(a>b)
    return a;
    else 
    return b;
}

char toUpper(char ch){
    return ch & '_';  //~(1<<5) binary rep of '_' ASCII
}

char toLower(char ch)
{
    return ch | ' '; 
}

bool checkEven(int a)
{
    if(a & 1)
        return false;
    else
        return true;
}

bool checkOdd(int a)
{
    if(a & 1)
        return true;
    else
        return false;
}

//n>>1 divides n by 2
//n<< multiplies n by 2
void printBinary(int a)
{
    for (int i = 31; i >=0; i--)
    {
        cout<<((a>>i)&1);
    }
    cout<<endl;
    
}
void setOrUnset(int a)
{
    int i=0;
    cin>>i;
    if((a & 1<<i) !=0)
    {
        cout<<"Set Bit"<<endl;
    }
    else
        cout<<"Unset Bit"<<endl;
}

int setBit(int a,int i)
{
    return (a | 1<<i);
}

int unsetBit(int a,int i)
{
    return (a & ~(1<<i));
}

int toogleBits(int a,int i)
{
    return (a ^ 1<<i);
}

int countSetBits(int a)
{
    int cnt =0;
    for (int i = 0; i < 31; i++)
    {
        if(a & 1<<i)
        {
            cnt++;
        }
    }
    return cnt;  
}

int countUnsetBits(int a)
{
    int cnt=0;
    for(int i=0;i<31;i++)
    {
        if((a & (1<<i))==0)
            cnt++;
    }
    return cnt;
}
//1010101010101
//1111000000000
int clearLSB(int a)    
{
    int i;
    cin>>i;
    return a & (~((1<<(i+1))-1));
}

int clearMSB(int a,int i)
{
    return a & ((1<<(i-1))-1);
}

void swap(int &a, int &b)
{
    a = a^b;
    b = a^b;
    a = a^b;
}

bool isPrime(ll n)
{
    if(n==1)
        return false;
    
    for (ll i = 2; i*i <= n; i++)
    {
        if(n%i==0)
            return false;            
    }
    return true;    
}

ll power(ll a,int b)
{
    ll res=1;
    while(b)
    {
        if(b&1)   
        {
            res *= a;
        }
        a *= a; 
        b = b>>1;
    }
    return res;
}
ll binExp(ll a,ll b,int M)
{
    ll res=1;
    while (b)
    {
        if(b& 1)
        {
            res = (res*a)%M;
        }
        a = (a*a)%M;
        b = b>>1;
    }
    return res;  
}

// vector<bool> arr(M,true);
// const int N = 1e7 + 10;
// void seive()
// {
//     arr[0]=false;
//     arr[1]=false;
//    for(int i=2;i<=N;i++)
//    {
//     if(arr[i])
//     {
//         for(int j=i*2;j<=N;j+=i)
//         {
//             arr[j]=false;
//         }
//     }
//    } 
//    for(int i=0;i<100; i++)
//    {
//     cout<<i<<" "<<arr[i]<<endl;
//    }
// }
//7 6 5 4 3 2 1
//1 2 3 4 5 6 7 

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
    int n;
    cin>>n;
    int vec[n];
    if(n&1)
    {
        for(int i=n;i>(n+1)/2;i--)
        {
            vec[n-i] = i;
        }
        int j=1;
        for(int i=(n+1)/2;i>0;i--,j++)
        {
            vec[n-i] = j;
        }
    }
    else{
        for(int i=n;i>0;i--)
        {

        vec[n-i] = i;
        }
    }

    bool flag = false;
    for(int i=0;i<n;i++)
    {
        if((i==0 && abs(vec[i]-vec[i+1])>1)||(i==n-1 && abs(vec[i-1]-vec[i])>1))
        {
            flag = true;
        }
        else if(abs(vec[i]-vec[i+1])>1 && abs(vec[i]-vec[i-1])>1)
        {
            flag = true;
        }
    }

    if(flag)
    cout<<-1;
    else{
        for(int i: vec)
        {
            cout<<i<<" ";
        }
    }
    cout<<endl;
    }
    return 0;
}
