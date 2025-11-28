#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n, x;
    cin >> n >> x;
    vector<ll> pref(n);
    map<ll, ll> mp;
    mp[0] = 1;

    ll res = 0;

    cin >> pref[0];
    if (pref[0] == x) res++;
    mp[pref[0]]++;

    for (ll i = 1; i < n; i++)
    {
        ll num;
        cin >> num;
        pref[i] = pref[i - 1] + num;
        
        if (mp.find(pref[i] - x) != mp.end())
            res += mp[pref[i] - x];
        mp[pref[i]]++;
    }
    cout << res << endl;
}