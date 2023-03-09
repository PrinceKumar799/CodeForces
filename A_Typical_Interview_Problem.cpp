#include <iostream>
using namespace std;
void solve()
{
    // 3 5 6 9 10 12 15
    string fbString = "FBFFBFFBFBFFBFFBF";
    int len;
    cin >> len;
    string str;
    cin >> str;
    string ans = "NO";
    for (int i = 0; i < 17; i++)
    {
        int diff = 0;
        for (int j = 0; j < len; j++)
        {
            if (fbString[i + j] != str[j])
            {
                diff = 1;
                break;
            }
        }
        if (diff == 0)
        {
            ans = "YES";
        }
    }
    cout << ans << endl;
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