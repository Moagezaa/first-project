#include <bits/stdc++.h>
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <list>
#include <utility>
#define ll long long
#define ull unsigned long long
#define ld long double
#define nl "\n"
#define str string
#define sp " "
#define sz(x) x.size()
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()
#define fi first
#define se second
#define vi vector<int>
#define vll vector<long long>
#define vec vector
#define pb push_back
#define fixed(n) fixed << setprecision(n)
using namespace std;
void Moageza()
{
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin),freopen("output.txt","w",stdout);
    // #endif
    ios_base::sync_with_stdio(0), cin.tie(nullptr), cout.tie(nullptr);
}
 
void solve()
{   
    int a,b,c=0;cin >> a>>b;
    while(a<b){
        c++;
        a*=3;
        b*=2;
    }
    cout<<c;
}
int main()
{
    Moageza();
    // int t;
    // cin >> t;
    // while (t--)
    // {
    //     solve();
    //     cout << endl;
    // }
    solve();
    return 0;
}