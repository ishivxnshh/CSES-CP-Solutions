#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n, q;
    cin >> n >> q;
    vector<ll> pref(n, 0);
    cin >> pref[0];
    for (ll i = 1; i < n; i++)
    {
        ll num;
        cin >> num;
        pref[i] = pref[i - 1] + num;
    }
    for (ll i = 0; i < q; i++)
    {
        ll a;
        ll b;
        cin >> a >> b;
        if (a == 1)
            cout << pref[b - 1] << endl;
        else
            cout << pref[b - 1] - pref[a - 2] << endl;
    }
}