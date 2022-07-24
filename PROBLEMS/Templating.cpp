#include <bits/stdc++.h>
using namespace std;
#define fastio()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define mod (int)(1e9 + 7)
#define N 100007
#define INF 1e18
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define test0 solve();
#define test1                    \
    int t;                       \
    cin >> t;                    \
    for (int i = 1; i <= t; i++) \
        solve();
#define test2                    \
    int t;                       \
    cin >> t;                    \
    for (int i = 1; i <= t; i++) \
        cout << "Case #" << i << ": ", solve();

#define debug(x)          \
    cout << #x << " -> "; \
    _print(x);            \
    cout << endl;
#define pa(v)             \
    cout << #v << " -> "; \
    for (auto i : v)      \
        cout << i << " "; \
    cout << endl;

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;

void _print(ll t) { cout << t; }
void _print(int t) { cout << t; }
void _print(string t) { cout << t; }
void _print(char t) { cout << t; }
void _print(lld t) { cout << t; }
void _print(double t) { cout << t; }
void _print(ull t) { cout << t; }

template <class T, class V>
void _print(pair<T, V> p);
template <class T>
void _print(vector<T> v);
template <class T>
void _print(set<T> v);
template <class T, class V>
void _print(map<T, V> v);
template <class T>
void _print(multiset<T> v);
template <class T, class V>
void _print(pair<T, V> p)
{
    cout << "{";
    _print(p.ff);
    cout << ",";
    _print(p.ss);
    cout << "}";
}
template <class T>
void _print(vector<T> v)
{
    cout << "[ ";
    for (T i : v)
    {
        _print(i);
        cout << " ";
    }
    cout << "]";
}
template <class T>
void _print(set<T> v)
{
    cout << "[ ";
    for (T i : v)
    {
        _print(i);
        cout << " ";
    }
    cout << "]";
}
template <class T>
void _print(multiset<T> v)
{
    cout << "[ ";
    for (T i : v)
    {
        _print(i);
        cout << " ";
    }
    cout << "]";
}
template <class T, class V>
void _print(map<T, V> v)
{
    cout << "[ ";
    for (auto i : v)
    {
        _print(i);
        cout << " ";
    }
    cout << "]";
}

#define TRACE
#ifdef TRACE
#define trace(...) __f(#__VA_ARGS__, __VA_ARGS__)
template <typename Arg1>
void __f(const char *name, Arg1 &&arg1)
{
    cout << name << " : " << arg1 << endl;
}
template <typename Arg1, typename... Args>
void __f(const char *names, Arg1 &&arg1, Args &&...args)
{
    const char *comma = strchr(names + 1, ',');
    cout.write(names, comma - names) << " : " << arg1 << " | ";
    __f(comma + 1, args...);
}
#else
#define trace(...)
#endif

ll gcd(ll a, ll b)
{
    if (b > a)
    {
        return gcd(b, a);
    }
    if (b == 0)
    {
        return a;
    }
    return gcd(b, a % b);
}
ll expo(ll a, ll b)
{
    ll res = 1;
    while (b > 0)
    {
        if (b & 1)
            res = (res * a) % mod;
        a = (a * a) % mod;
        b = b >> 1;
    }
    return res;
}
vector<ll> sieve(int n)
{
    int *arr = new int[n + 1]();
    vector<ll> vect;
    for (int i = 2; i <= n; i++)
        if (arr[i] == 0)
        {
            vect.push_back(i);
            for (int j = 2 * i; j <= n; j += i)
                arr[j] = 1;
        }
    return vect;
}
ll max(ll a, ll b) { return (a > b ? a : b); }
ll min(ll a, ll b) { return (a > b ? b : a); }

void solve()
{
    int n;
    cin >> n;

    int a[4] = {};
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        sum += x;
        a[x % 4]++;
    }

    if (sum % 4 != 0)
    {
        cout << "-1" << endl;
    }
    else
    {
        int ans = a[2] / 2;
        a[2] %= 2;

        int mi = min(a[1], a[3]);
        int mx = max(a[1], a[3]);

        int left = mx - mi;
        if (a[2])
        {
            ans += 2;
            left -= 2;
        }
        ans += (left / 4) * 3;
        ans += mi;

        cout << ans << endl;
    }
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    fastio();
    test1
}