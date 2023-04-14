#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int total = 0, unused = 0, used = 0;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        if (temp == 1)
        {
            if (unused > 0)
            {
                used++;
                unused--;
            }
            else
            {
                // unused++;
                total++;
            }
        }
        else if (used < total)
        {
            used = (total + 2) / 2;
            unused = total - used;
        }
        // else
        // {
        //     total++;
        // }
    }
    cout << total << endl;
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