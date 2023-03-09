#include <iostream>
using namespace std;
void solve()
{
    int m, n;
    cin >> m >> n;
    string tower1, tower2;
    cin >> tower1 >> tower2;
    int top1 = m - 1, top2 = n - 1;
    bool repFound = false;
    for (int i = 1; i < m; i++)
    {
        if (tower1[i] == tower1[i - 1])
        {
            if (tower1[top1] == tower2[top2] || repFound)
            {
                cout << "NO" << endl;
                return;
            }
            else
            {
                repFound = true;
            }
        }
    }

    for (int i = 1; i < n; i++)
    {
        if (tower2[i] == tower2[i - 1])
        {
            if (tower1[top1] == tower2[top2] || repFound)
            {
                cout << "NO" << endl;
                return;
            }
            else
            {
                repFound = true;
            }
        }
    }
    cout << "YES" << endl;
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