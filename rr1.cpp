#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    if (n%2)
    {
        cout << 0 << "\n";
    }
    else
    {
        n = n/4 ;
        cout << n - 1 << "\n";
    }
    return 0;
}