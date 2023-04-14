#include <iostream>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    if (n == 1)
    {
        cout << "Yes" << endl;
        return;
    }
    int kcount = 0, prev = 0, next = 0;
    int maxA = INT32_MIN, lastA;
    int maxB = INT32_MIN, lastB;
    for (int i = 0; i < n - 1; i++)
    {
        int temp;
        cin >> temp;
        maxA = max(maxA, temp);
    }
    cin >> lastA;
    for (int i = 0; i < n - 1; i++)
    {
        int temp;
        cin >> temp;
        maxB = max(maxB, temp);
    }
    cin >> lastB;
    if ((lastA >= maxA && lastB >= maxB) || (lastA >= maxB && lastB >= maxA))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}